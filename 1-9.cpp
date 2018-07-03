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
	// キーボードから読み込む整数値をfirstNumberと宣言
	int firstNumber;

	// 整数値の入力を促す
	cout << "整数値 : ";

	//入力された整数値を読み込む
	cin >> firstNumber;

	// 入力された整数値をそのまま反復して表示
	cout << firstNumber << "と入力しましたね。";
}
