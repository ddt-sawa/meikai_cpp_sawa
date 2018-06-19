/*
 * 1-12.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習1-12 右に示すように、三角形の底辺と高さを読み込んで、
 その面積を表示するプログラムを作成せよ*/

#include<iostream>

using namespace std;

int main()
{
	//二つのdouble型変数を宣言し、底辺をx、高さをyとする。
	double x, y;

	// 底辺(x)の値の入力を促す
	cout << "xの値 : ";

	// xに実数値を読み込む
	cin >> x;

	// 高さ(y)の値の入力を促す
	cout << "yの値 : ";

	// yに実数値を読み込む
	cin >> y;

	// 三角形の面積を表示
    cout << "面積は" << x * y / 2 << "です。\n";
}
