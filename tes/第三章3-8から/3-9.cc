/*
 * 3-9.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習3-9 正の整数値を0までカウントダウンするList3-4をfor文で実現せよ。 */

#include<iostream>

using namespace std;

int main()
{
	//int型変数xの宣言
	int x;

	//数を一つずつ減らしていくことを告知
	cout << "カウントダウンします。\n";

	// 正の整数値が入力されるまで、入力を促す
	do{
		cout << "正の整数値 : ";
		cin >> x;
	}while (x <= 0);

	//xの値を0になるまで一つずつ減らしていく
	for (; x >= 0; cout << x-- << '\n');
}
