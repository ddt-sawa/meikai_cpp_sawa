/*
 * 7-1.cpp
 *
 *  Created on: 2018/06/25
 *      Author: ddt
 */

/* 演習7-1 List7-2(p244)に&ptrの表示を追加したプログラムを作成せよ。
*/

#include<iostream>

using namespace std;

int main()
{
	//ポインタの指す整数値を宣言
	int integerValue = 135;

	//整数値を表示
	cout << "n    : " << integerValue << '\n';

	//整数値のアドレスを表示
	cout << "&n   : " << &integerValue << "番地\n";

	//整数値を指すポインタを宣言
	int* ptr = &integerValue;

	//整数値のアドレスを表示
	cout << "ptr  : " << ptr << "番地\n";

	//整数値のエイリアスを表示
	cout << "*ptr : " << *ptr << '\n';

	//整数値を指すポインタのアドレスを表示
	cout << "&ptr : " << &ptr << "番地\n";
}
