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
	float f; double d; long double l;

	//typeid関数を用いて、浮動小数点型の情報を表示
	cout <<  "float型 : " << typeid(f).name() << '\n';
    cout <<  "double型 : " << typeid(d).name() << '\n';
	cout <<  "long double型 : " << typeid(l).name() << '\n';
}
