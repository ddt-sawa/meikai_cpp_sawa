/*
 * 1-10.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習1-10 右に示すように、キーボードから読み込んだ整数値に10を加えた値と
10を減じた値を出力するプログラムを作成せよ */

#include<iostream>

using namespace std;

int main()
{
	// キーボードから読み込む整数値の宣言
	int firstNumber;

	// 整数値の入力を促す
	cout << "整数値 : ";

	// 入力された整数値を読み込む
	cin >> firstNumber;

	// 読み込んだ整数値に10を加えた値を表示
	cout << "10を加えた値は" << firstNumber + 10 << "です。\n";

	// 読み込んだ整数値に10を減じた値を表示
	cout << "10を減じた値は" << firstNumber - 10 << "です。\n";
}



