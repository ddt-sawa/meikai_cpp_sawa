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


//int型の最大桁数を調べるため、<climits>ヘッダをインクルード
#include<climits>
//setw操作子、left操作子を使用するため、<iomanip>ヘッダをインクルード
#include<iomanip>
#include<iostream>

using namespace std;

/**
* int型の最小値＋空白文字を表示するために必要なスペースな数を返却する
* @return spaceNumber スペースの数
* @author Sawa
* @since 7.17
*/
int getSpaceNumber()
{
	//スペースの数
	int spaceNumber = 0;

	//int型最小値の桁数を調べるため、値を保存
	int minimumInteger = INT_MIN;

	//最小値を10で割り続け、-1より大きくなった時点での繰り返し回数を桁数とするループ
	for (; minimumInteger < -1; ++spaceNumber) {

		//最小値を10で割った値を自らに代入
		minimumInteger /= 10;
	}

	//桁数に空白+符号ぶんのスペースを追加
	spaceNumber += 2;

	//スペースの数を返却
	return spaceNumber;
}

/**
* 2次元配列の全構成要素の値を縦横に表示する
* @param intArray[][5] 2次元配列の先頭要素へのポインタ, arraySize 2次元配列の行数
* @author Sawa
* @since 7.17
*/
void printTwoDimension(int intArray[][5], int arraySize)
{
	//2次元配列の行を参照するループ
	for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter) {

		//2次元配列の列を参照するループ
		for (int secondCounter = 0; secondCounter < 5; ++secondCounter) {

			//数値の左端を揃えつつ、要素を表示
			cout << setw(getSpaceNumber()) << left << intArray[firstCounter][secondCounter];
		}
		//表示する行を変えるため、改行
		cout << '\n';
	}
}

int main()
{
	//2次元配列の行数
	const int arrayLine = 3;

	//二次元配列の列数
	const int arrayRow = 5;

	//2次元配列
	int intArray[arrayLine][arrayRow] = { 0 };

	//2次元配列の行を参照するループ
	for (int firstCounter = 0; firstCounter < arrayLine; ++firstCounter) {

		//2次元配列の列を参照するループ
		for (int secondCounter = 0; secondCounter < arrayRow; ++secondCounter) {

			//要素の入力を促す
			cout << "a[" << firstCounter << "][" << secondCounter << "] : ";

			//要素を入力
			cin >> intArray[firstCounter][secondCounter];
		}
	}
	//関数を呼び出す
	printTwoDimension(intArray, arrayLine);
}
