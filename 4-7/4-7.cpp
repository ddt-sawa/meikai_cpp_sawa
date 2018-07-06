/*
 * 4-7.cc
 *
 *  Created on: 2018/06/21
 *      Author: syuka
 */

/*演習4-7 浮動小数点型の情報をtypeid演算子によって表示するプログラムを作成せよ。 */

//typeid関数を呼び出すため、<typeinfo>ヘッダをインクルード
#include<typeinfo>
#include<iostream>

using namespace std;

int main()
{
	//flaot型変数
	float floatVariable;

	//double型変数
	double doubleVariable;

	//long double型変数
	long double longDoubleVariable;

	//typeid関数を用いて、浮動小数点型の情報を表示
	cout <<  "float型 : " << typeid(floatVariable).name() << '\n';      //float型
    cout <<  "double型 : " << typeid(doubleVariable).name() << '\n';    //double型
	cout <<  "long double型 : " << typeid(longDoubleVariable).name() << '\n'; //long double型
}
