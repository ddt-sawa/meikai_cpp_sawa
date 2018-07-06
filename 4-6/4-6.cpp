/*
 * 4-6.cc
 *
 *  Created on: 2018/06/21
 *      Author: syuka
 */

/* 演習4-6 3種類の浮動少数点型の大きさをsizeof演算子によって表示するプログラムを作成せよ。*/

#include<iostream>

using namespace std;

int main()
{
	//三種類の浮動小数点型の大きさを表示
	cout << "float型 : "<< sizeof(float) << '\n';                //4バイト

	cout << "double型 : "<< sizeof(double) << '\n';              //8バイト

	cout << "long double型 : "<< sizeof(long double) << '\n';   //16バイト

}
