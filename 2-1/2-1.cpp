/*
 * 2-1.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習2-1 右に示すように、整数値を読み込んで、
 その絶対値を求めて表示するプログラムを作成せよ*/

#include<iostream>

using namespace std;

int main()
{
	//整数値firstNumberと、その絶対値absoluteValueを宣言
	int firstNumber, absoluteValue;

	//整数値の入力を促す
	cout << "整数値 : ";

	//入力された整数値を読み込む
	cin >> firstNumber;

	//整数値が正および0の場合
	if (firstNumber >= 0) {
		//そのままの値が絶対値
		absoluteValue = firstNumber;
	}

	//整数値が負の場合
	else {
		//符号を入れ替えた値が絶対値
		absoluteValue = -firstNumber;
	}

	//絶対値を表示
	cout << "その絶対値は" << absoluteValue << "です。\n";
}
