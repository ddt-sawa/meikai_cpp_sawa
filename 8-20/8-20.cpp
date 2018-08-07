/*
 * 8-20.cpp
 *
 *  Created on: 2018/06/27
 *      Author: ddt
 */

/*演習8-20 二つの文字列を指すポインタを交換する関数を作成せよ。関数の仕様は
 * 自分で考えること。
 */

#include<iostream>

using namespace std;


/**
* 2つの文字列を指すポインタを交換する
* @param firstString, secondString 文字列へのポインタ
* @author Sawa
* @since 7.24
*/
void swapPointer(const char** firstString, const char** secondString)
{
	//第一引数のポインタを一時保存
	const char* temporaryString =  *firstString;

	//第二引数のポインタを第一引数のポインタに代入する
	*firstString = *secondString;

	//保存していた第一引数のポインタを第二引数のポインタに代入する
	*secondString = temporaryString;
}

int main()
{
	//文字列1
	const char* firstString = "abc"; 

	//文字列1の表示
	cout << "文字列1 = " << firstString << '\n';

	//文字列2
	const char* secondString = "def";

	//文字列2の表示
	cout << "文字列2 = " << secondString << '\n';

	//文字列1と文字列2のポインタ交換を告知
	cout << "文字列1と文字列2のポインタを交換します。\n";

	//文字列のポインタを交換するために、参照渡しを行う
	swapPointer(&firstString, &secondString);

	//ポインタを交換した後の文字列1を表示
	cout << "文字列1 = " << firstString << '\n';

	//ポインタを交換した後の文字列2を表示
	cout << "文字列2 = " << secondString << '\n';
}