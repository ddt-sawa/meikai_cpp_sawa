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

//関数名         : returnAbsoluteValue
//仕様           : 引数の絶対値を返却する
//引数           : short型変数argumentValue
//返り値         : short型変数argumentValueの絶対値
//作成者         : sawa
//日付           : 7/11
short returnAbsoluteValue(short argumentValue)
{
	//引数の絶対値を返却する
	return  argumentValue >= 0 ? argumentValue : -argumentValue;
}

//関数名         : returnAbsoluteValue
//仕様           : 引数の絶対値を返却する
//引数           : int型変数argumentValue
//返り値         : int型変数argumentValueの絶対値
//作成者         : sawa
//日付           : 7/11
int returnAbsoluteValue(int argumentValue)
{
	//引数の絶対値を返却する
	return  argumentValue >= 0 ? argumentValue : -argumentValue;
}

//関数名         : returnAbsoluteValue
//仕様           : 引数の絶対値を返却する
//引数           : long型変数argumentValue
//返り値         : long型変数argumentValueの絶対値
//作成者         : sawa
//日付           : 7/11
long returnAbsoluteValue(long argumentValue)
{
	//引数の絶対値を返却する
	return  argumentValue >= 0 ? argumentValue : -argumentValue;
}

//関数名         : returnAbsoluteValue
//仕様           : 引数の絶対値を返却する
//引数           : float型変数argumentValue
//返り値         : float型変数argumentValueの絶対値
//作成者         : sawa
//日付           : 7/11
float returnAbsoluteValue(float argumentValue)
{
	//引数の絶対値を返却する
	return  argumentValue >= 0 ? argumentValue : -argumentValue;
}

//関数名         : returnAbsoluteValue
//仕様           : 引数の絶対値を返却する
//引数           : double型変数argumentValue
//返り値         : double型変数argumentValueの絶対値
//作成者         : sawa
//日付           : 7/11
double returnAbsoluteValue(double argumentValue)
{
	//引数の絶対値を返却する
	return  argumentValue >= 0 ? argumentValue : -argumentValue;
}

//関数名         : returnAbsoluteValue
//仕様           : 引数の絶対値を返却する
//引数           : longdouble型変数argumentValue
//返り値         : longdouble型変数argumentValueの絶対値
//作成者         : sawa
//日付           : 7/11
long double returnAbsoluteValue(long double argumentValue)
{
	//引数の絶対値を返却する
	return  argumentValue >= 0 ? argumentValue : -argumentValue;
}
int main()
{
	//最後に多重定義したlong double型の変数宣言
	long double argumentValue;

	//値の入力を促す
	cout << "絶対値を調べたい値 : ";

	//入力
	cin >> argumentValue;

	//関数に値を渡し、返却された絶対値を表示する
	cout << returnAbsoluteValue(argumentValue) << "です。\n";
}
