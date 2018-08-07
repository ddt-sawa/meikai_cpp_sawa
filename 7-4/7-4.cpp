/*
 * 7-4.cpp
 *
 *  Created on: 2018/06/25
 *      Author: ddt
 */

 /*演習7-4 typeid演算子を用いて型を表示することによって、List7-10(p.260)の関数
  * reverseの仮引数aが配列でなくポインタであることを確認せよ。
  */


#include<iostream>
  //typeid演算子を使うため、<typeinfo>をインクルード
#include<typeinfo>

using namespace std;

/**
* 配列の要素の並びを反転する
* @param intArray[] 配列の先頭要素へのポインタ arraySize 配列の要素数
* @author Sawa
* @since 7.17
*/
void reverseArray(int intArray[], int arraySize)
{
	//引数として受け取った配列の情報が何であるかを調べる
	cout << "受け取った配列の情報は" << typeid(intArray).name() << "です。\n";

	//pi （intへのポインタ型）であることを確認しました。

	//配列の要素の並びを反転するループ
	for (int firstCounter = 0; firstCounter < arraySize / 2; ++firstCounter) {

		//ある要素を一時保存する
		int temporaryInteger = intArray[firstCounter];

		//ある要素に、添え字の並びを反転した要素を代入する
		intArray[firstCounter] = intArray[arraySize - firstCounter - 1];

		//添え字の並びを反転した要素に、ある要素を代入する
		intArray[arraySize - firstCounter - 1] = temporaryInteger;
	}
}
int main()
{
	//配列の要素数
	const int arraySize = 5;

	//配列の宣言
	int intArray[arraySize];

	//配列に要素を入力するためのループ文
	for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter) {

		//入力する要素の添え字を表示
		cout << "c[" << firstCounter << "] : ";

		//要素を入力
		cin >> intArray[firstCounter];
	}

	//関数を呼び出し、配列の並びを反転させる
	reverseArray(intArray, arraySize);

	//配列要素の並びを反転したことを告知
	cout << "要素の並びを反転しました。\n";

	//配列を走査表示するループ
	for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter) {

		//配列の要素を表示
		cout << "c[" << firstCounter << "] = " << intArray[firstCounter] << '\n';
	}
}

//クラッシュしないように修正