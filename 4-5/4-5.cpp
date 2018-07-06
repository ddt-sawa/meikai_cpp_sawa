/*
 * 4-5.cc
 *
 *  Created on: 2018/06/21
 *      Author: syuka
 */

/* 演習4-5 float型の変数とdouble型の変数にキーボードから数値を読み込んで、
 * その値を表示するプログラムを作成せよ。いろいろな値を入力して、動作を検証すること。
 */

#include<iostream>

using namespace std;

int main()
{
	//float型変数
	float floatVariable;

	//入力を促す
	cout << "float型の入力 : ";

	//入力
	cin >> floatVariable;

	//表示
	cout << floatVariable <<"\n";

	//double型変数
	double doubleVariable;

	//入力を促す
	cout << "double型の入力 : ";

	//入力
	cin >> doubleVariable;

	//表示
	cout <<doubleVariable << "\n" ;
}
