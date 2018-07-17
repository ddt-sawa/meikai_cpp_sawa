/*
 * 6-1.cpp
 *
 *  Created on: 2018/06/22
 *      Author: syuka
 */

/*演習6-1 受け取ったint型引数の値nが負であれば-1を返却し、0であれば0を返却し、
 * 正であれば1を返却する関数sign_of を作成せよ。以下の{*****}部分を作成すること。
 * int sign_of(int n) {******}
 */

#include<iostream>

using namespace std;


/**
*受け取った引数が負なら-1、0なら0、正なら1を返却する
* @param integerValue 整数
* @return int型整数　-1,0,1
* @author Sawa
* @since 7.17
*/
int signOf(int integerValue)
{
	//受け取った引数が負の場合
	if (integerValue < 0) {

		//-1を返却
		return -1;
	}

	//受け取った引数が0の場合
	else if (integerValue  == 0) {

		//0を返却
		return 0;
	}

	//受け取った引数が正の場合
	else {

		//1を返却
		return 1;
	}

}

int main()
{
	//signOf関数に渡すint型変数を宣言
	int inputNumber;

	//表示する値の説明
	cout << "負の整数なら-1を、0なら0を、正の整数なら1を表示します。\n";

	//整数値入力を促す
	cout << "整数値 : ";

	//整数値入力
	cin >> inputNumber;

	//関数を呼び出して、返却値を表示
	cout << signOf(inputNumber);
}

