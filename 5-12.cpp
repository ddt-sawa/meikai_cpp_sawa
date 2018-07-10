/*
 * 5-12.cpp
 *
 *  Created on: 2018/06/22
 *      Author: syuka
 */

//演習5-12 3次元配列の要素数を求める式を示せ。プログラムを作成して確認を行うこと

#include<iostream>

using namespace std;

int main()
{

	int intArray[5][6][4];

	cout << "配列a[5][6][4]の要素数は" << sizeof(intArray) / sizeof(intArray[5]) << "です。\n";
}





