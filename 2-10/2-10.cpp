/*
 * 2-10.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習2-10 キーボードから読み込んだ三つの整数の最小値を求めて表示するプログラムを作成せよ*/

#include<iostream>

using namespace std;

int main()
{
	//三つの整数を宣言
    int firstNumber, secondNumber, thirdNumber;

    cout << "整数x : "; cin >> firstNumber;   //整数xの入力
    cout << "整数y : "; cin >> secondNumber;  //整数yの入力
    cout << "整数z : "; cin >> thirdNumber;   //整数zの入力

    //最小値を整数xで初期化
    int min = firstNumber;

    //整数yが現時点での最小値より小さい場合
    if (secondNumber < min) {
    	min = secondNumber;
    }

    //整数zが現時点での最小値より小さい場合
    if (thirdNumber < min) {
    	min = thirdNumber;
    }

    //最小値を表示
    cout << "最小値は" << min << "です。\n";
}
