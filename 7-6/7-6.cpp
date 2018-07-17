/*
 * 7-6.cpp
 *
 *  Created on: 2018/06/25
 *      Author: ddt
 */

 /* 演習7-6 要素数nの配列aの全要素の合計を求めて返却する関数sumOfを作成せよ。 *
  * int sumOf(const int a[], int n)
  */

#include<iostream>

using namespace std;


/**
* 配列要素の合計値を返却する
* @param intArray[] 配列の先頭要素へのポインタ, arraySize　要素数
* @return arraySum　合計値
* @author Sawa
* @since 7.17
*/
int sumOf(const int intArray[], int arraySize) {

	//配列要素の合計値
	int arraySum = 0;

	//配列要素の合計値を計算するためのループ
	for (int fiirstCounter = 0; fiirstCounter < arraySize; ++fiirstCounter) {

		//配列要素を合計値に加算代入
		arraySum += intArray[fiirstCounter];
	}

	//合計値を返却
	return arraySum;
}

int main()
{
	//配列の要素数
	const int arraySize = 5;

	//配列を宣言
	int intArray[arraySize];

	//配列の要素を入力するループ
	for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter) {

		//要素入力を促す
		cout << "a[" << firstCounter << "] : ";

		//要素入力
		cin >> intArray[firstCounter];
	}
	//sumOf関数に配列の先頭要素へのポインタと要素数を渡し、合計値を表示
	cout << "合計値は" << sumOf(intArray, arraySize) << "です。\n";
}
