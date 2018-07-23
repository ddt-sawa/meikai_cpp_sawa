/*
 * 8-10a.cpp
 *
 *  Created on: 2018/06/26
 *      Author: ddt
 */

 /*演習8-10 p310で学習したstrcat関数及びstrncat関数と同等な関数を作成せよ。
  * a.strcat関数の作成
  */

#include<iostream>

using namespace std;

//配列の容量を多めに宣言
const int arrayCapacity = 100;

/**
* 第二引数が指す文字列を、第一引数の末尾に連結する
* @param firstArray 第一引数となる文字配列, secondArray 第二引数となる文字配列
* @return 連結した第一引数の先頭要素へのポインタ
* @author Sawa
* @since 7.23
*/
char* connectCharacterArray(char* firstArray, const char* secondArray)
{
	//追加先配列のナル文字を除いた要素数
	int firstArrayNumber = 0;

	//追加先配列の要素数を数えるループ
	for (int firstCounter = 0; firstArray[firstCounter]; ++firstCounter) {

		//要素数ぶん値をインクリメント
		++firstArrayNumber;
	}

	//追加元配列の要素を追加先配列の後尾に追加するループ
	for (int firstCounter = 0; secondArray[firstCounter]; firstCounter++) {

		//追加先配列の最後尾(先頭のナル文字)に続き、追加元配列の要素を代入していく
		firstArray[firstArrayNumber + firstCounter] = secondArray[firstCounter];
	}

	//追加した配列の先頭要素へのポインタを返却
	return firstArray;
}

int main()
{
	//連結先の文字配列を初期化
	char firstArray[arrayCapacity] = { 0 };

	//文字列の入力を促す
	cout << "文字列1を入力してください : ";

	//文字列を入力
	cin >> firstArray;

	//連結する文字配列を初期化
	char secondArray[arrayCapacity] = { 0 };

	//文字列の入力を促す
	cout << "文字列2を入力してください : ";

	//文字列を入力
	cin >> secondArray;

	//連結した文字列を表示
	cout << "連結した文字列は " << connectCharacterArray(firstArray, secondArray) << " です。\n";
}




