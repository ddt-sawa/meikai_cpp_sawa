/*
 * 8-4.cpp
 *
 *  Created on: 2018/06/25
 *      Author: ddt
 */

 /*演習8-4 List8-11では、各配列の文字列の個数3が定数としてプログラム中(for文の制御式)
  * に埋め込まれている。計算によって求めるように書き換えたプログラムを作成せよ。
  */

#include<iostream>

using namespace std;

int main()
{
	//二次元文字配列
	char twoDimensionArray[][5] = { "LISP", "C", "Ada" };

	//2次元配列は、(全体のバイト数/要素のバイト数)で文字列数が出せる
	for (int firstCounter = 0; firstCounter < (sizeof(twoDimensionArray) / sizeof(twoDimensionArray[5])); ++firstCounter) {

		//要素を表示
		cout << "a[" << firstCounter << "] = \"" << twoDimensionArray[firstCounter] << "\"\n";
	}

	//ポインタによる文字列
	const char* pointerArray[] = { "PAUL", "X", "MAC" };

	//ポインタ配列は、(ポインタの配列のバイト数/ポインタの配列の要素のバイト数)で文字列数が出せる
	for (int firstCounter = 0; firstCounter < (sizeof(pointerArray) / sizeof(pointerArray[0])); ++firstCounter) {

		//要素を表示
		cout << "p[" << firstCounter << "] = \"" << pointerArray[firstCounter] << "\"\n";
	}
}
