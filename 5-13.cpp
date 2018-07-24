/*
 * 5-13.cpp
 *
 *  Created on: 2018/06/22
 *      Author: syuka
 */

/*演習5-13 本文で解説した2次元配列の初期化を、実際にプログラムを作成して確認せよ
 */

#include<iostream>

using namespace std;

int main()
{
	//2次元配列の行数
	const int arrayLine = 2;
	
	//2次元配列の列数
	const int arrayRow = 3;

	//2次元配列を初期化
	int intArray[arrayLine][arrayRow] = {
			{2, 5, 6},
			{5, 5, 6},
	};

	//初期化した配列を走査表示するループ
	for (int firstCounter = 0; firstCounter < arrayLine; ++firstCounter){

		//列を指定
		for(int secondCounter = 0; secondCounter < arrayRow; ++secondCounter) {

			//要素ごとに表示
			cout << "a[" << firstCounter << "][" << secondCounter << "] = " << intArray[firstCounter][secondCounter] << "  ";

		}

		//表示する行数を変えるため改行
		cout << '\n';
	}
}

//初期化を確認
