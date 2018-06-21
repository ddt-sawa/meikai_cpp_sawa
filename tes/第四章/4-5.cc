/*
 * 4-5.cc
 *
 *  Created on: 2018/06/21
 *      Author: syuka
 */

/* 演習4-5　float型の変数とdouble型の変数にキーボードから数値を読み込んで、
 * その値を表示するプログラムを作成せよ。いろいろな値を入力して、動作を検証すること。
 */

#include<iostream>

using namespace std;

int main()
{
	//float型変数
	float f;
	cout << "float型の入力 : \n";  cin >> f;
	cout << f <<"\n";

	//double型変数
	double d;
	cout << "double型の入力 : \n"; cin >> d;
	cout <<d << "\n" ;
}
