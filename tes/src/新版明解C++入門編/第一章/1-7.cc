/*
 * 1-7.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習1-7 三つのint型変数に値を代入し、それらの合計と平均を求めるプログラムを作成せよ*/

#include<iostream>

using namespace std;

int main()
{
//三つのint型変数に値を代入
    int x, y, z;

    x = 4;
    y = 5;
    z = 3;

//合計を求める式
    cout << "合計の値は" << x + y + z << "です。\n";
//平均を求める式
    cout << "平均の値は" << ( x + y + z) / 2 << "です";
}


