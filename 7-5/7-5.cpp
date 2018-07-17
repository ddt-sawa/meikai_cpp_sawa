/*
 * 7-5.cpp
 *
 *  Created on: 2018/06/25
 *      Author: ddt
 */

 /*演習7-5 List7-10の関数reverseでの2要素の交換を、演習7-2で作成した関数swapの呼び出しに
  * よって行なうように変更したプログラムを作成せよ。
  */

#include<iostream>

using namespace std;

/**
* 2整数の値を交換する
* @param *firstInteger, *secondInteger 整数へのポインタ
* @author Sawa
* @since 7.17
*/
void swap(int* firstInteger, int* secondInteger)
{
	//1つ目の整数値を保存
	int temporaryInteger = *firstInteger;

	//2つ目の整数値を1つ目の整数に代入
	*firstInteger = *secondInteger;

	//保存しておいた1つ目の整数値を2つ目の整数に代入
	*secondInteger = temporaryInteger;
}

int main()
{
	//配列の要素数
	const int arraySize = 5;

	//配列を宣言
	int intArray[arraySize];

	//配列の要素を入力するループ
	for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter) {

		//要素の入力を促す
		cout << "c[" << firstCounter << "] : ";

		//要素を入力
		cin >> intArray[firstCounter];
	}
	//配列内の並びを反転させるループ
	for (int firstCounter = 0; firstCounter < arraySize / 2; ++firstCounter) {

		//ある要素と、それに対応する要素をswap関数に渡す
		swap(intArray[firstCounter], intArray[arraySize - firstCounter - 1]);
	}

	//要素を交換した配列の表示
	for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter) {
		cout << "c[" << firstCounter << "] = " << intArray[firstCounter] << '\n';
	}

}

