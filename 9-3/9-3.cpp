/*
 * 9-3.cpp
 *
 *  Created on: 2018/06/27
 *      Author: ddt
 */

/*演習9-3 xの2乗を求める関数テンプレートsquareを作成せよ。
 * template <class Type> Type square(Type x);
 */

#include<iostream>

using namespace std;

/**
* 引数の2乗値を返却（テンプレート関数)
* @param argumentValue 引数 
* @return squareValue 2乗値
* @author Sawa
* @since 7.24
*/
template <class Type> Type returnSquare(Type argumentValue)
{
	//引数の2乗値を計算
	int squareValue = argumentValue * argumentValue;
	
	//2乗値を返却する
	return squareValue;
}

int main()
{
	//表示する値の説明
	cout << "int型変数xと、double型変数yの2乗の値を表示します。\n";

	//int型変数の初期化
	int intergerValue = 0;

	//int型変数の入力を促す
	cout << "整数xの値 : ";

	//入力
	cin >> intergerValue;

	//double型変数の初期化
	double doubleValue = 0.0;

	//double型変数の入力を促す
	cout << "実数yの値 : ";
	
	//入力
	cin >> doubleValue;

	//int型変数をテンプレート関数に渡し、返却された2乗値を表示
	cout << "xの2乗の値は" << returnSquare(intergerValue) << "です。\n";

	//double型変数をテンプレート関数に渡し、返却された2乗値を表示
	cout << "yの2乗の値は" << returnSquare(doubleValue) << "です。\n";
}
