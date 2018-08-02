/*
 * 7-8.cpp
 *
 *  Created on: 2018/06/25
 *      Author: ddt
 */

 /*演習7-8　要素数nの配列aから要素a[idx]を先頭とするk個の要素を削除する関数arynrmxを作成せよ。
  * int arynrmv(int a[], int n, int idx, int k)
  * 削除はa[idx]より後方の全要素をk個前方にずらすことによって行なうこと。なお、移動されずに
  *余ってしまう要素の値は変更しなくてよい。
  */

#include<iostream>

using namespace std;

const int arraySize = 5;

/**
* 配列の要素を指定削除する
* @param intArray[] 配列の先頭要素, arraySize 要素数, deleteindex 削除する要素の添字 deleteNumber 消去数
* @author Sawa
* @since 7.17
*/
void removeArray(int intArray[], int inputArraySize, int deleteIndex, int deleteNumber)
{
	//削除する要素に、削除数ぶんずらした添字の要素を代入するループ
	for (int firstCounter = deleteIndex; firstCounter < (deleteIndex + deleteNumber); ++firstCounter) {

		//値を代入
		intArray[firstCounter] = intArray[firstCounter + deleteNumber];
	}
}

int main()
{
	//配列の宣言
	int intArray[arraySize];

	//配列の要素を入力するループ
	for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter) {

		//要素入力を促す
		cout << "a[" << firstCounter << "] : ";

		//要素入力
		cin >> intArray[firstCounter];
	}
	//消去する要素の添え字
	int deleteIndex;

	//入力した添字以降の要素を消去することを告知
	cout << "入力した添字以降の要素を消去し、以降の要素を前にずらします。\n";

	//妥当な添字を入力させるためのループ
	do {
		//添字入力を促す
		cout << "添字 : ";

		//添字入力
		cin >> deleteIndex;

		//入力された添字が負、または最大の添え字より大きい場合再入力
	} while (deleteIndex < 0 || deleteIndex > arraySize - 1);

	//消去する個数
	int deleteNumber;

	//妥当な消去数を入力させるためのループ
	do {
		//消去数入力を促す
		cout << "消去する個数 : ";

		//消去数入力
		cin >> deleteNumber;

		//消去数が負、または消去する添字が最大の添字以上になる場合再入力
	} while (deleteNumber < 0 || deleteIndex + deleteNumber - 1 >= arraySize - 1);

	//removeArray関数を呼び出し、指定した配列の要素を削除する
	removeArray(intArray, arraySize, deleteIndex, deleteNumber);

	//要素を削除した配列を走査表示するループ
	for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter) {

		//要素を表示
		cout << "a[" << firstCounter << "] = " << intArray[firstCounter] << '\n';
	}
}

