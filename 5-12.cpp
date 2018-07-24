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
	//配列の要素数
	const int firstArrayElement = 5;
	
	//要素の要素数
	const int secondArrayElement = 6;

	//要素の要素の要素数
	const int thirdArrayElement = 4;

    //3次元配列aを初期化
	int intArray[firstArrayElement][secondArrayElement][thirdArrayElement] = { 0 };

	//要素数を表示(5)
	cout << "配列a[5][6][4]の要素数は" << sizeof(intArray) / sizeof(intArray[firstArrayElement]) << "です。\n";
}






