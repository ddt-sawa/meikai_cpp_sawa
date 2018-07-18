/*
 * 7-12.cpp
 *
 *  Created on: 2018/06/25
 *      Author: ddt
 */

 /* 演習7-12 要素数nの配列pの全要素にvを代入する関数fillを作成せよ。
  * void fill(int* p, int n, int v)
  */

#include<iostream>

using namespace std;

/**
* 配列の全要素に受け取った整数を代入する
* @param intArray 配列の先頭要素へのポインタ, arraySize 要素数, integerValue 整数
* @author Sawa
* @since 7.17
*/
void fillElement(int* intArray, int arraySize, int integerValue)
{
	//配列の全要素に整数を代入するループ
	for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter) {
		//整数を代入
		intArray[firstCounter] = integerValue;
	}
}


int main()
{
	//配列の要素数
	const int arraySize = 5;

	//配列の宣言
	int intArray[arraySize];

	//配列の全要素に代入する整数
	int integerValue;

	//整数の入力を促す
	cout << "配列の全要素に代入する整数 : ";

	//整数入力
	cin >> integerValue;

	//配列の全要素に入力した整数を代入
	fillElement(intArray, arraySize, integerValue);

	//配列の要素を走査表示するループ
	for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter) {
		//要素を表示
		cout << "p[" << firstCounter << "] = " << intArray[firstCounter] << '\n';
	}
}
