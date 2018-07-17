/*
 * 6-5.cpp
 *
 *  Created on: 2018/06/22
 *      Author: syuka
 */

/*演習6-5 1からnまでの全整数の和を求めて返却する関数sumupを作成せよ。
 * int sumup(int n);
 */

#include<iostream>

using namespace std;

/**
*1から引数までの全整数の総和を求めて返却する
* @param integerNumber 整数
* @return arithmeticSum　総和
* @author Sawa
* @since 7.17
*/
int returnSum(int integerNumber)
{
	//カウントアップの総和を0で初期化
	int arithmeticSum = 0;

	//カウントアップの総和を計算するループ文
	for (int firstCounter = 1;  firstCounter <= integerNumber; ++firstCounter) {

		//総和にカウント中の値を加算代入
		arithmeticSum += firstCounter;
	}
	//総和を返却
	return arithmeticSum;
}

int main()
{
	//カウントアップの上限値を宣言
	int integerNumber;

	//カウントアップの総和を返却することを告知
	cout << "1からnまでの全整数の和を求めます。\n";

	//上限値入力を促す
	cout << "整数n : ";

	//上限値入力
	cin >> integerNumber;

	//上限値をreturnSum関数に渡し、返却された総和を表示
	cout << returnSum(integerNumber) <<  "です。\n";
}

