/*
 * 3-11.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/* 演習3-11 1からnまでの和を求めるList3-9(p.98)をfor文で実現せよ*/

#include<iostream>

using namespace std;

int main()
{
	//nの値
	int arithmeticNumber;

	//1からnまでの和
	int entireSum = 0;

	//nの入力を促す
	cout << "1からnまでの和を求めます。 n : ";
	cin >> arithmeticNumber;

	// 1からnまでの値を計算するループ
	for(int counterVariable = 1; counterVariable <= arithmeticNumber; ++counterVariable) {

		//値を合計に加える
		entireSum += counterVariable;
	}

	//結果を表示
	cout << "1から" << arithmeticNumber << "までの和は" << entireSum << "です。\n";
}
