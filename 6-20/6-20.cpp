/*
 * 6-20.cpp
 *
 *  Created on: 2018/06/25
 *      Author: ddt
 */

/*演習6-20　二つのint型整数a,bの最小値、三つのint型整数a,b,cの最小値を求める、以下に示す多重定義
 * された関数群を作成せよ。
 * int min(int a, int b);
 * int min(int a, int b, int c);
 */

#include <iostream>

using namespace std;

/**
*2つの引数の最小値を返却する
* @param firstInteger, secondInteger 整数
* @return int型の値　2つの引数の最小値
* @author Sawa
* @since 7.17
*/

int returnMinimumValue(int firstInteger, int secondInteger)
{
	//2引数のうち、小さい方の値を返却
	return firstInteger < secondInteger ? firstInteger : secondInteger;
}

/**
*3つの引数の最小値を返却する
* @param firstInteger, secondInteger, thirdInteger 整数
* @return minimumValue　最小値
* @author Sawa
* @since 7.17
*/
int returnMinimumValue(int firstInteger, int secondInteger, int thirdInteger)
{
	//最小値を仮に第一引数の値とする
	int minimumValue = firstInteger;

	//現時点での仮最小値より第二引数が小さい場合
	if (secondInteger < minimumValue) {

		//第二引数の値を仮最小値に設定
		minimumValue = secondInteger;
	}
	//現時点での仮最小値より第三引数が小さい場合
	if (thirdInteger < minimumValue) {

		//第三引数の値を仮最小値に設定
		minimumValue = thirdInteger;
	}

	//仮最小値を最小値として返却
	return minimumValue;
}

int main()
{

	int firstInteger;   //整数a
	int secondInteger;  //整数b
	int thirdInteger;   //整数c

	//整数aの入力を促す
	cout << "aの値 : ";

	//整数aの入力
	cin >> firstInteger;

	//整数bの入力を促す
	cout << "bの値 : ";

	//整数bの入力
	cin >> secondInteger;

	//関数を呼び出し、整数aとbの最小値を表示
	cout << "aとbの最小値は" << returnMinimumValue(firstInteger,secondInteger) << "です。\n";

	//整数cの入力を促す
	cout << "cの値 : ";

	//整数cの入力
	cin >> thirdInteger;

	//関数を呼び出し、整数aとbとcの最小値を表示
	cout << "aとbとcの最小値は" << returnMinimumValue(firstInteger,secondInteger,thirdInteger) << "です。\n";
}



