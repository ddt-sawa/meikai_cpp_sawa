/*
 * 8-1.cpp
 *
 *  Created on: 2018/06/25
 *      Author: ddt
 */

/*演習8-1 List8-4の配列sの宣言を以下のように書き換えたプログラムを作成せよ。
char s[] = "ABC\0DEF";
*/

#include<iostream>

using namespace std;

int main()
{
	//文字配列を宣言
	char characterArray[] = "ABC\0DEF";

	//文字列を表示
	cout << "配列に文字列\"" << characterArray << "\"が格納されています。\n";
}

/*"ABC"が表示されました。文字列の末尾は最初に出現するナル文字であると定義されているため、
 * ナル文字までの文字列が表示されたものと思われます。
 */
