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
	// int型変数xの宣言
	int x;

	// xの値の入力を促す
	cout << "整数値 : ";

	// xに実数値を読み込む
	cin >> x;

	// 読み込んだ整数値に10を加えた値を表示
	cout << "10を加えた値は" << x + 10 << "です。\n";

	// 読み込んだ整数値に10を減じた値を表示
	cout << "10を減じた値は" << x - 10 << "です。\n";
}



