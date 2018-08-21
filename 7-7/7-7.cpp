/*
* 7-7.cpp
*
*  Created on: 2018/06/25
*      Author: ddt
*/

/*演習7-7 要素数nの配列aから要素a[idx]を削除する関数aryrmvを作成せよ。
* int aryrmv(int a[], int n, int idx);
* 削除はa[idx]より後方の全要素を一つずつ前方にずらすことによって行なう。移動されずに
* 余ってしまう末尾要素a[n - 1]の値は変更しなくてよい。たとえば、配列aの要素が{1, 3, 4, 7, 9, 11}の
* ときにaryrmv(a, 6, 2)と呼び出した後の配列aの要素は{1, 3, 7, 9, 11, 11}となる。 */

#include<iostream>

using namespace std;

/**
* 配列の要素を指定削除する
* @param intArray[] 配列の先頭要素, arraySize 要素数, deleteindex 削除する要素の添字
* @author Sawa
* @since 7.17
*/
void removeArray(int intArray[], int arraySize, int deleteIndex)
{
	//配列の要素を削除するためのループ
	for (int firstCounter = deleteIndex; firstCounter < arraySize - 1; ++firstCounter) {

		//消去される要素以降にある要素は一つずつ配列をズラす
		intArray[firstCounter] = intArray[firstCounter + 1];
	}
}

int main()
{
	//配列の要素数
	const int arraySize = 5;

	//配列
	int intArray[arraySize] = { 0 };

	//配列の要素を入力するループ
	for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter) {

		//要素入力を促す
		cout << "a[" << firstCounter << "] : ";

		//要素入力
		cin >> intArray[firstCounter];
	}

	//消去する要素の添え字
	int deleteIndex;

	//入力した添字の要素を消去することを告知
	cout << "入力した添字の要素を消去し、以降の要素を一つずつ前にずらします。\n";

	//妥当な添字を入力させるためのループ
	do {
		//添字入力を促す
		cout << "添字 : ";

		//添字入力
		cin >> deleteIndex;

		//入力された添字が0より小さい場合、または最大の添え字より大きい場合添字を再入力
	} while (deleteIndex < 0 || deleteIndex > arraySize - 1);

	//removeArray関数を呼び出し、指定した配列の要素を削除する
	removeArray(intArray, arraySize, deleteIndex);

	//要素を削除した配列を走査表示するループ
	for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter) {

		//要素を表示
		cout << "a[" << firstCounter << "] = " << intArray[firstCounter] << '\n';
	}
}