/*
 * 8-5.cpp
 *
 *  Created on: 2018/06/25
 *      Author: ddt
 */

 /*演習8-5 文字列sの全文字を先頭から順に1行に1文字ずつ表示する関数putvを作成せよ。
  * void putv(const char* s);
  */


#include<iostream>

using namespace std;

/**
* 文字列の全文字を1行1文字ずつ表示する
* @param characterArgument
* @author Sawa
* @since 7.20
*/
void putCharacter(const char* characterArgument)
{
	//文字列中の全文字を1行につき1文字表示するループ
	for (int firstCounter = 0; characterArgument[firstCounter]; firstCounter++) {

		//文字を表示して改行
		cout << characterArgument[firstCounter] << '\n';
	}
}
int main()
{
	//文字列の宣言と初期化
	char characterArray[20] = { 0 };

	//文字列の入力を促す
	cout << "文字列を入力してください。\n";

	//入力
	cin >> characterArray;

	//文字列中の全文字を1行につき1文字表示
	putCharacter(characterArray);
}
