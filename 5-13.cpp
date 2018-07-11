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
	//2次元配列[2][3]を初期化
	int intArray[2][3] = {
			{2, 5, 6},
			{5, 5, 6},
	};

	//初期化した配列を走査表示するループ
	for (int firstCounter = 0; firstCounter < 2; ++firstCounter){

		//列を指定
		for(int secondCounter = 0; secondCounter < 3; ++secondCounter) {

			//要素ごとに表示
			cout << "a[" << firstCounter << "][" << secondCounter << "] = " << intArray[firstCounter][secondCounter] << "  ";

		}

		//表示する行数を変えるため改行
		cout << '\n';
	}
}

//初期化を確認
