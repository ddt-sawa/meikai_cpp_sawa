/*
 * 6-22.cpp
 *
 *  Created on: 2018/06/25
 *      Author: ddt
 */

/* 演習6-22　xの2乗を求めるインライン関数、3乗を求めるインライン関数を作成せよ。
 * inline double square(double x)
 * inline double cube(double x);
 */

#include<iostream>

using namespace std;

/**
*引数の2乗値を返却する
* @param doubleValue 引数
* @return double型の値　引数の2乗値
* @author Sawa
* @since 7.17
*/
inline double returnSquare(double doubleValue)
{
    //引数の2乗値を返す
	return doubleValue * doubleValue;
}

/**
*引数の3乗値を返却する
* @param doubleValue 引数
* @return double型の値　引数の3乗値
* @author Sawa
* @since 7.17
*/
inline double returnCube(double doubleValue)
{
	//引数の3乗値を返す
	return doubleValue * doubleValue * doubleValue;
}

int main()
{
	//表示する値の概要を告知
	cout << "xの2乗、または3乗の値を表示します。\n";

	////2乗・3乗する値の宣言
	double doubleValue;

	//値の入力を促す
	cout << "xの値 : ";

	//値の入力
	cin >> doubleValue;

	//関数を呼び出し、2乗値と3乗値を表示する
	cout << "2乗の値は" << returnSquare(doubleValue) << "、3乗の値は" << returnCube(doubleValue)  << "です。\n";
}
