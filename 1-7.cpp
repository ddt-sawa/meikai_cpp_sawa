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
    //代入・合計・平均計算を行うため、三つのint型変数を宣言
    int firstNumber, secondNumber, thirdNumber;

    //int型変数にそれぞれ値を代入
    firstNumber = 4; secondNumber = 5; thirdNumber = 3;

    //三つの変数の合計を求める
    cout << "合計の値は" << firstNumber + secondNumber + thirdNumber << "です。\n";

    //三つの変数の平均を求める
    cout << "平均の値は" << ( firstNumber + secondNumber + thirdNumber) / 2 << "です。\n";
}


