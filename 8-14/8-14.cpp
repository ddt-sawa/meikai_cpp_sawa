/*
 * 8-14.cpp
 *
 *  Created on: 2018/06/26
 *      Author: ddt
 */

 /*演習8-14 文字列sの文字の並びを反転する関数str_rvsを作成せよ。
  * char* str_rvs(char* s)
  * 例えば、文字列sが"abc"であれば、その文字列を"cba"に更新する。受け取ったsの値をそのまま返却すること。
  */

//strlen関数を使うため、cstringをインクルード
#include<cstring>
#include<iostream>

using namespace std;


/**
* 文字列の並びを反転する
* @param characterArray 文字列
* @return characterArray 並びを反転した文字列
* @author Sawa
* @since 7.23
*/
char* reverseArray(char* characterArray)
{
	//文字列の長さを取得
	int characterArrayLength = strlen(characterArray);

	//文字列の並びを入れ替えるループ
	for (int firstCounter = 0; firstCounter < (characterArrayLength / 2); ++firstCounter) {

		//走査中の値を一時保存
		int temporaryValue = characterArray[firstCounter];

		//走査中の要素と対称に並んでいる要素の値を、走査中の値に代入
		characterArray[firstCounter] = characterArray[characterArrayLength - firstCounter - 1];

		//一時保存していた走査中の値を対称に並んでいる要素に代入
		characterArray[characterArrayLength - firstCounter - 1] = temporaryValue;

	}
	//入れ替えた文字列を返却する
	return characterArray;
}

int main()
{
	//反転する文字列配列の要素数
	const int arrayCapacity = 50;

	//文字列配列を初期化
	char characterArray[arrayCapacity] = { 0 };

	//文字列配列の入力を促す
	cout << "反転する文字列を入力してください。\n";

	//入力
	cin >> characterArray;

	//反転した文字列を表示
	cout << "反転した文字列は" << reverseArray(characterArray) << "です。\n";

}
