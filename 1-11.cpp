/*
 * 1-11.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習1-11 右に示すように、二つの実数値を読み込み、その合計と平均を求めて
表示するプログラムを作成せよ。 */

#include<iostream>

using namespace std;

int main()
{
	// 二つのdouble型変数を宣言
	double firstNumber, secondNumber;

	// 一つ目の実数値の入力を促す
	cout << "一つ目の実数値 : ";

	// 入力された実数値を読み込む
	cin >> firstNumber;

	// 二つ目の実数値の入力を促す
	cout << "二つ目の実数値 : ";

	// 入力された実数値を読み込む
	cin >> secondNumber;

	// 二つの実数値の合計を表示
	cout << "合計は" << firstNumber + secondNumber << "です。\n";

	// 二つの実数値の平均を表示
	cout << "平均は" << (firstNumber + secondNumber) / 2 << "です。\n";
}
