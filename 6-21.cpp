/*
 * 6-21.cpp
 *
 *  Created on: 2018/06/25
 *      Author: ddt
 */

/* 演習6-21 short型整数xの絶対値、int型整数xの絶対値、・・・を求める、
 * 以下に示す多重定義された関数群を作成せよ。
 * short absolute(short x)
 * int absolute(int x)
 * long absolute(long x)
 * float absolute(float x)
 * double absolute(double x)
 * long double absolute(long double x)
 */


#include<iostream>

using namespace std;

/**
*引数の絶対値を返却する
* @param argumentValue 引数
* @return short型の値　引数の絶対値　
* @author Sawa
* @since 7.17
*/
short returnAbsoluteValue(short argumentValue)
{
	//引数の絶対値を返却する
	return  argumentValue >= 0 ? argumentValue : -argumentValue;
}

/**
*i引数の絶対値を返却する
* @param argumentValue 引数
* @return int型の値　引数の絶対値　
* @author Sawa
* @since 7.17
*/
int returnAbsoluteValue(int argumentValue)
{
	//引数の絶対値を返却する
	return  argumentValue >= 0 ? argumentValue : -argumentValue;
}

/**
*引数の絶対値を返却する
* @param argumentValue 引数
* @return long型の値　引数の絶対値　
* @author Sawa
* @since 7.17
*/
long returnAbsoluteValue(long argumentValue)
{
	//引数の絶対値を返却する
	return  argumentValue >= 0 ? argumentValue : -argumentValue;
}

/**
*引数の絶対値を返却する
* @param argumentValue 引数
* @return float型の値　引数の絶対値　
* @author Sawa
* @since 7.17
*/
float returnAbsoluteValue(float argumentValue)
{
	//引数の絶対値を返却する
	return  argumentValue >= 0 ? argumentValue : -argumentValue;
}

/**
*引数の絶対値を返却する
* @param argumentValue 引数
* @return double型の値　引数の絶対値　
* @author Sawa
* @since 7.17
*/
double returnAbsoluteValue(double argumentValue)
{
	//引数の絶対値を返却する
	return  argumentValue >= 0 ? argumentValue : -argumentValue;
}

/**
*引数の絶対値を返却する
* @param argumentValue 引数
* @return long double型の値　引数の絶対値　
* @author Sawa
* @since 7.17
*/
long double returnAbsoluteValue(long double argumentValue)
{
	//引数の絶対値を返却する
	return  argumentValue >= 0 ? argumentValue : -argumentValue;
}
int main()
{
	//short型変数
	short shortArgumentValue = 5;

	//int型変数
	int intArgumentValue = 10;

	//long型変数
	long longArgumentValue = 20;

	//float型変数
	float floatArgumentValue = 0.4;

	//double型変数
	double doubleArgumentValue = 0.1;

	//long double型変数
	long double longDoubleArgumentValue = 0.01;


	//short型変数の表示
	cout << returnAbsoluteValue(shortArgumentValue) << "です。\n";

	//int型変数の表示
	cout << returnAbsoluteValue(intArgumentValue) << "です。\n";

	//long型変数の表示
	cout << returnAbsoluteValue(longArgumentValue) << "です。\n";

	//float型変数の表示
	cout << returnAbsoluteValue(floatArgumentValue) << "です。\n";

	//double型変数の表示
	cout << returnAbsoluteValue(doubleArgumentValue) << "です。\n";

	//long double型変数の表示
	cout << returnAbsoluteValue(longDoubleArgumentValue) << "です。\n";
}

