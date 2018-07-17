/*
 * 7-9.cpp
 *
 *  Created on: 2018/06/25
 *      Author: ddt
 */

 /*演習7-9　要素数nの配列aの要素a[idx]にxを挿入する関数aryinsを作成せよ。
  * int aryins(int a[], int n, int idx, int x)
  * 挿入に伴ってa[idx] ～ a[n - 2]を一つずつ後方にずらさなければならない。
  * たとえば、配列aの要素が{1, 3, 4, 7, 9, 11}のときにryins(a, 6, 2, 99)と
  * 呼び出した後の配列aの要素は{1, 3, 99, 4, 7, 9}となる。
  */


#include<iostream>

using namespace std;

/**
* 配列に要素を挿入する
* @param intArray[] 配列の先頭要素へのポインタ, arraySize 要素数, insertIndex 挿入する要素の添字, insertValue 挿入する要素の値
* @author Sawa
* @since 7.17
*/
void insertArray(int intArray[], int arraySize, int insertIndex, int insertValue)
{
	//指定された添字以降の値を一つずつ後ろにズラすループ
	for (int firstCounter = arraySize - 1; firstCounter > insertIndex; --firstCounter) {

		//ある要素に、一つ前の要素を代入
		intArray[firstCounter] = intArray[firstCounter - 1];
	}
	//指定された添字の要素に指定された値を代入する
	intArray[insertIndex] = insertValue;
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
		cout << "a[" << firstCounter << "] : ";

		//要素入力
		cin >> intArray[firstCounter];
	}

	//挿入する要素の添字
	int insertIndex;

	//妥当な添字を入力させるループ
	do {
		//添字入力を促す
		cout << "挿入する要素の添字 : ";

		//添字入力
		cin >> insertIndex;

		//入力された値が0未満、または最大の添字より大きい場合再入力
	} while (insertIndex < 0 || insertIndex > arraySize - 1);

	//追加する要素の値
	int insertValue;

	//整数入力を促す
	cout << "追加する整数の値 : ";

	//整数入力
	cin >> insertValue;

	//配列に要素を挿入する
	insertArray(intArray, arraySize, insertIndex, insertValue);

	//要素を挿入した配列を走査表示するループ
	for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter) {

		//要素の値を表示
		cout << "a[" << firstCounter << "] = " << intArray[firstCounter] << '\n';
	}
}
