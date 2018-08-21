/*
 * 8-2.cpp
 *
 *  Created on: 2018/06/25
 *      Author: ddt
 */

 /*演習8-2 以下のように初期化された文字列sを空文字列にするコードを示せ。
 char s[] = "ABC";
  */

#include<iostream>

using namespace std;

int main()
{
	//配列を初期化
	char characterArray[] = "ABC";

	//空文字列
	char emptyString[] = "";

	//配列のポインタを空文字列のポインタに変更する
	*characterArray = *emptyString;

	//要素を表示（空文字列なので表示されない）
	cout << characterArray[0];
}

