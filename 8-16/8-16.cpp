/*
 * 8-16.cpp
 *
 *  Created on: 2018/06/26
 *      Author: ddt
 */

 /*演習8-16 文字列s内の数字文字を削除する関数strrmv_digitsを作成せよ。
  * char* strrmv_digits(char* s)
  * たとえば、文字列sが"a1bc39d"であれば、その文字列を"abcd"に更新する。
  * 受け取ったsの値をそのまま返却すること。
  */


//isdigit関数を使うため<cctype>ヘッダをインクルード
#include<cctype>
#include<iostream>

using namespace std;

//配列の要素数を多めに初期化
const int arrayCapacity = 50;

/**
* 文字列中の数字文字を削除する
* @param characterArray 文字列
* @return characterArray 数字文字を削除した文字列
* @author Sawa
* @since 7.23
*/
char* removeDigits(char* characterArray)
{
	//文字列内の数字文字を削除するループ
	for (int firstCounter = 0; characterArray[firstCounter]; ++firstCounter) {

		//数字文字が何連続しているかを表す変数を0で初期化
		int consecutiveNumber = 0;

		//配列内に数字文字を見つけた場合
		if (isdigit(characterArray[firstCounter])) {

			//数字文字の連続数を調べるためのループ
			for (int secondCounter = 0; isdigit(characterArray[firstCounter + secondCounter]); ++secondCounter) {

				//数字文字の連続数を記録
				++consecutiveNumber;
			}
			//連続している数字文字数ぶん、以降の全要素を前にずらすループ
			for (int secondCounter = 0; secondCounter < arrayCapacity; ++secondCounter) {

				//走査中の要素に対し、数字文字の連続数ぶん後の要素を代入
				characterArray[firstCounter + secondCounter] = characterArray[firstCounter + secondCounter + consecutiveNumber];
			}
		}
	}
	//数字文字を削除した文字列配列へのポインタを返却
	return characterArray;
}


int main()
{
	//文字列配列の初期化
	char characterArray[arrayCapacity] = { 0 };

	//文字列入力を促す
	cout << "数字文字を削除したい文字列を入力してください。\n";

	//文字列入力
	cin >> characterArray;

	//数字文字を削除した文字列を表示
	cout << removeDigits(characterArray) << "です。\n";
}
