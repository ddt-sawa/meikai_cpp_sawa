/*
 * 2-3.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習2-3 二つのint型変数a,bに値を読み込んで、その大小関係を以下の
  いずれかで表示するプログラムを作成せよ。
  『aの方が大きいです。』『bの方が大きいです』『aとbは同じ値です』*/

#include<iostream>

using namespace std;

int main()
{
	//int型変数a,bの宣言
	int a, b;

	//aとbの値の入力を促す
	cout << "aとbの値を入力してください";

	//入力されたa,bの値を読み込む
	cin >> a >> b;

	// a > b の場合『aの方が大きいです。』を表示
	if (a > b)
		cout << "aの方が大きいです。\n";

	// b < a の場合『bの方が大きいです。』を表示
	else if (b < a)
		cout << "bの方が大きいです。\n";

    // a == b の場合『aとbは同じ値です。』を表示
	else if (a == b)
			cout << "aとbは同じ値です。\n";
}


