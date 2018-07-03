/*
 * 2-9.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習2-9 右に示すように、二つの整数値を読み込んで、それらの値の差が10以上であれば
 * 『それらの差は10以下です。』と表示し、そうでなければ
 * 『それらの差は11以上です。』と表示するプログラムを作成せよ*/

#include<iostream>

using namespace std;

int main()
{
	//整数値の宣言
	int firstNumber, secondNumber;

    cout << "整数x : "; cin >> firstNumber;    //整数xの入力
    cout << "整数y : "; cin >> secondNumber;   //整数yの入力

    //二値の差を求める
    int balance = (firstNumber > secondNumber ? (firstNumber - secondNumber) : (secondNumber - firstNumber));

    //二値の差が10以下の場合
    if (balance <= 10){
    	//差が10以下であることを表示
    	cout << "それらの差は10以下です。\n";
    }

    //二値の差が11以上の場合
    else {
    	//差が11以上であることを表示
    	cout << "それらの差は11以上です。\n";
    }
}

