/*
 * 3-10.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習3-10 前問とは逆に、0から正の整数までカウントダウンするプログラムを作成せよ。 */

#include<iostream>

using namespace std;

int main()
{
	//int型変数xの宣言
	int x;

	//数を一つずつ減らしていくことを告知
	cout << "カウントアップします。\n";

	// 正の整数値が入力されるまで、入力を促す
	do{
		cout << "正の整数値 : ";
		cin >> x;
	}while (x <= 0);

	//int型変数nを0で初期化し、xになるまでになるまで一つずつ増やす
	for (int n = 0; n <= x; cout << n++ << '\n');
}
