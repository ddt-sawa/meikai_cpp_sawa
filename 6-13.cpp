/*
 * 6-13.cpp
 *
 *  Created on: 2018/06/23
 *      Author: syuka
 */

/*演習6-13 List6-14(p.219)のプログラムにa = yを追加して、
 * プログラムの挙動を確認せよ
 */

#include<iostream>

using namespace std;

int main(){

	int firstInteger = 1;    //整数x
	int secondInteger = 2;   //整数y
	int& referenceInteger = firstInteger; //整数xを参照する整数a

	cout << "a = " << referenceInteger << '\n'; //整数aの値(1)
	cout << "x = " << firstInteger << '\n';     //整数xの値(1)
	cout << "y = " << secondInteger << '\n';    //整数yの値(2)

	//整数aに5を代入
	referenceInteger = 5;

	//整数aに整数yを代入
	referenceInteger = secondInteger;

	cout << "a = " << referenceInteger << '\n'; //整数aの値(2)
	cout << "x = " << firstInteger << '\n';     //整数xの値(2)
	cout << "y = " << secondInteger << '\n';    //整数yの値(2)
}


//参照渡しを通して、a x y の値が2になることを確認(aの参照先は依然としてx)
