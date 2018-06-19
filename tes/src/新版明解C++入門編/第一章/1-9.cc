/*
 * 1-9.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習1-9 右に示すように、キーボードから読み込んだ整数値をそのまま反復して表示するプログラムを作成せよ */

#include<iostream>

using namespace std;

int main()
{
	// int型変数xの宣言
	int x;

	// xの値の入力を促す
	cout << "整数値 : ";

	//xに実数値を読み込む
	cin >> x;

	// xの値を表示
	cout << x << "と入力しましたね。";
}
