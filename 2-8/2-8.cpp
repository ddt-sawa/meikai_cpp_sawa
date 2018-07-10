/*
 * 2-8.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習2-8 二つの整数値を読み込んで、それらの値の差を表示するプログラムを作成せよ */

#include<iostream>

using namespace std;

int main()
{
	//二つの整数値の宣言
	int firstNumber, secondNumber;

	//一つ目の整数値の入力
	cout << "整数x : "; cin >> firstNumber;

	//二つ目の整数値の入力
	cout << "整数y : "; cin >> secondNumber;

	//二値の差を表示
	cout << "それらの値の差は" << (firstNumber > secondNumber ? (firstNumber - secondNumber) : (secondNumber - firstNumber)) << "です。\n";
}
