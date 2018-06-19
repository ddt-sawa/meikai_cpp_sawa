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
	//int型変数xとyの宣言
	int x, y;

	//xの入力を促す
	cout << "整数値 : ";

	//xに整数値を読み込む
	cin >> x;

	//xが正および0の場合、yにxを代入
	if (x >= 0)  y = x;

	//xが負の場合、yに-xを代入
	else  y = -x;

	//xの絶対値であるyを表示
	cout << "その絶対値は" << y << "です。\n";
}
