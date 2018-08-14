/*
 * 9-4.cpp
 *
 *  Created on: 2018/06/27
 *      Author: ddt
 */

/*演習9-4 二値の最小値を求める関数テンプレートminofを作成せよ。
 */

#include<iostream>

using namespace std;

/**
* 2引数の最小値を返却（テンプレート関数)
* @param firstArgument secondArgument 引数
* @return 最小値
* @author Sawa
* @since 7.24
*/
template <class DataType> DataType returnMinimumValue(DataType firstArgument, DataType secondArgument)
{
	//第一引数の方が第二引数より小さい場合第一引数を返却し、そうでないなら第二引数を返却する
	return firstArgument < secondArgument ? firstArgument : secondArgument;
}

int main()
{
	//表示する値の説明
	cout << "int型変数xと、double型変数yの最小値を表示します。\n";

	//int型変数x
	int intergerValue = 0;

	//int型変数xの入力を促す
	cout << "整数xの値 : ";

	cin >> intergerValue;

	//double型変数y
	double doubleValue = 0.0;
	
	//double型変数yの入力を促す
	cout << "実数yの値 : ";
	
	//入力
	cin >> doubleValue;


	//テンプレート関数に引数を渡す際、double型へ明示的な具現化を行い、double型として最小値を表示する
	cout << "最小値は" << returnMinimumValue<double>(intergerValue, doubleValue) << "です。\n";
}
