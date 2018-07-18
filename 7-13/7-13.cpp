/*
 * 7-13.cpp
 *
 *  Created on: 2018/06/25
 *      Author: ddt
 */

 /*演習7-13 要素数がnである配列bの全要素を配列aにコピーする関数を作成せよ。
  * void ary_cpy(int* a, const int* b, int n)
   */

#include<iostream>

using namespace std;


/**
* 配列の要素を別の配列にコピーする
* @param intArray コピー先の配列, inputArray コピー元の配列, arraySize 要素数
* @author Sawa
* @since 7.18
*/
void copyArray(int* intArray, const int* inputArray, int arraySize)
{
	//配列の要素を別の配列にコピーするループ
	for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter) {
		//別の配列の、同じ添字の要素に値を代入
		intArray[firstCounter] = inputArray[firstCounter];
	}
}

int main()
{
	//配列の要素数
	const int arraySize = 5;

	//配列の宣言
	int intArray[arraySize]; int inputArray[arraySize];

	//配列の要素を走査入力するループ
	for (int firstCounter = 0; firstCounter < arraySize; firstCounter++) {

		//要素の入力を促す
		cout << "b[" << firstCounter << "] : ";

		//入力
		cin >> inputArray[firstCounter];
	}

	//入力した配列の全要素を、別の配列にコピーする
	copyArray(intArray, inputArray, arraySize);

	//コピーした配列の要素を走査表示するループ
	for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter) {

		//要素を表示
		cout << "a[" << firstCounter << "] = " << intArray[firstCounter] << '\n';
	}
}

