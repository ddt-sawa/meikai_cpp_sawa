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
	// double型変数x,yの宣言
	double x, y;

	// xの値の入力を促す
	cout << "xの値 : ";

	// xに実数値を読み込む
	cin >> x;

	// yの値の入力を促す
	cout << "yの値 : ";

	// yに実数値を読み込む
	cin >> y;

	// xとyの合計を表示
	cout << "合計は" << x + y << "です。\n";

	// xとyの平均を表示
	cout << "平均は" << (x + y) / 2 << "です。\n";
}
