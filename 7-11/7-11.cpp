/*
 * 7-11.cpp
 *
 *  Created on: 2018/06/25
 *      Author: ddt
 */

/*演習7-11 n行5列のint型2次元配列aの全構成要素の値を縦横に並べて表示する関数print2dを作成せよ。
 * void print2d(int a[][5], int n)
 *
 * 各構成要素がどのような値であっても、各列の数値の先頭（左端）がそろうように、最低限の
 * スペースを空けること。
 * ※　右に示すのは、3行5列の2次元配列を表示した例である。
 */

//setw操作子を使用するため、<iomanip>ヘッダをインクルード
#include<iomanip>
#include<iostream>

using namespace std;

/**
* 2次元配列の全構成要素の値を縦横に表示する
* @param intArray[][5] 2次元配列の先頭要素へのポインタ, arraySize 2次元配列の行数
* @author Sawa
* @since 7.17
*/
void printTwoDimension(int intArray[][5], int arraySize)
{
	//2次元配列の行を参照するループ
	for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter){

		//2次元配列の列を参照するループ
		for (int secondCounter = 0; secondCounter < 5; ++secondCounter) {

			//数値の左端を揃えつつ、要素を表示
			cout << setw(5) << left << intArray[firstCounter][secondCounter];
		}
		//表示する行を変えるため、改行
    cout << '\n';
    }
}

int main()
{
	//2次元配列の行数
	const int arraySize = 3;

	//2次元配列
	int intArray[arraySize][5];

	//2次元配列の行を参照するループ
	for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter){

		//2次元配列の列を参照するループ
		for (int secondCounter = 0; secondCounter < 5; ++secondCounter){

			//要素の入力を促す
		cout << "a[" << firstCounter << "][" << secondCounter << "] : ";

		//要素を入力
		cin >> intArray[firstCounter][secondCounter];
		}
	}
	//関数を呼び出す
	printTwoDimension(intArray, arraySize);
}
