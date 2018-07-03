/*
 * 2-7.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習2-7 二つの実数値を読み込んで、大きい方の値を表示するプログラムを作成せよ */

#include<iostream>

using namespace std;

int main()
{
	//二つの実数値を宣言
    double firstNumber, secondNumber;

    //一つ目の実数値の入力を促す
    cout << "実数x : ";

    //実数値の入力
    cin >> firstNumber;

    //二つ目の実数値の入力を促す
    cout << "実数y : ";

    //実数値の入力
    cin >> secondNumber;

    //条件式を用いて、大きい方の値を最大値(max)とする
    double max = firstNumber > secondNumber ? firstNumber : secondNumber;

    //最大値の表示
    cout << "大きい方の値は" << max << "です。\n";
}
