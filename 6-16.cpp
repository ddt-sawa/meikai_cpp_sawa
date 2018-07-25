/*
 * 6-16.cpp
 *
 *  Created on: 2018/06/24
 *      Author: syuka
 */

/*演習6-16 静的記憶域期間を持つ配列の全要素が0で初期化されることを確認するプログラム
 * を作成せよ
 */

#include<iostream>

using namespace std;

//配列の容量
const int arraySize = 5;

//関数外で宣言することで静的記憶域期間を与える
int firstArray[arraySize];

int main()
{
	//static指定子を付ける事で静的記憶域期間を与えた配列b
	static int secondArray[arraySize];

	//配列aを走査表示するループ文
	for(int firstCounter = 0; firstCounter < arraySize; ++firstCounter) {

		//値を表示
		cout << firstArray[firstCounter];

	}

	//改行
	cout << '\n';

	//配列bを走査表示するループ文
	for(int firstCounter = 0; firstCounter < arraySize; ++firstCounter) {

		//値を表示
		cout << secondArray[firstCounter];

	}
}

//全要素が0で初期化されたことを確認
