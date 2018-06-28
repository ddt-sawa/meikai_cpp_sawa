/*
 * 4-8.cc
 *
 *  Created on: 2018/06/21
 *      Author: syuka
 */

/* 演習4-8 以下の算術演算を行う各式にsizeof演算子やtypeid演算子を
 * 適用した値を表示するプログラムを作成せよ。また、実行結果に対する考察を行うこと。
 */

/*int + int, double + double int + double double + int */

//typeid関数を呼び出すため、<typeinfo>ヘッダをインクルード
#include<typeinfo>
#include<iostream>

using namespace std;

int main()
{
    int i; double d;

    //int + int  表示結果 4 i
    cout << sizeof(i + i) << " " << typeid(i + i).name() << '\n';

    //double + double 表示結果 8 d
    cout << sizeof(d + d) << " " << typeid(d + d).name() << '\n';


    //int + double 表示結果 8 d
    cout << sizeof(i + d) << " " << typeid(i + d).name() << '\n';

    //double + int 表示結果 8 d
    cout << sizeof(d + i) << " " << typeid(d + i).name() << '\n';
}

/*実行結果により、int型とdouble型の演算ではdouble型に暗黙の型変換が
行われることが分かった。*/
