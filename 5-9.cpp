/*
 * 5-9.cpp
 *
 *  Created on: 2018/06/22
 *      Author: syuka
 */

//演習5-9 配列aの全要素を配列bに対して逆順にコピーするプログラムを作成せよ。

#include<iostream>

using namespace std;

int main()
{
	//配列の要素数
	const int arrayNumber = 6;

	//配列aの要素を初期化
	int firstArray[arrayNumber] = {5, 10, 15, 20, 25, 30};

	//配列aを逆順にコピーする配列の宣言
	int secondArray[arrayNumber];

	//配列の要素を逆順にコピーすることを告知
	cout << "元々の配列はa[6] = {5, 10, 15, 20, 25, 30}です。\n" << "逆順にコピーした配列b[6]を表示します。\n";

	//配列aを逆順にコピーするループ文
	for (int firstCounter = 0; firstCounter < arrayNumber; ++firstCounter){

		//配列aを配列bに逆順コピーする
		secondArray[firstCounter] = firstArray[(arrayNumber - firstCounter - 1)];

		//コピーした配列bの要素を走査表示
		cout << "b[" << firstCounter << "] =" << secondArray[firstCounter] << "\n";
	}
}
