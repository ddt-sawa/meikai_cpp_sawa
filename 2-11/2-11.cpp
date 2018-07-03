/*
 * 2-11.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習2-11 キーボードから読み込んだ三つの整数の中央値を求めて表示するプログラムを作成せよ。
 * 例えば2,3,1の中央値は2で、1,2,1の中央値は1で、3,3,3の中央値は3である。*/

#include<iostream>

using namespace std;

int main()
{
	//三つの整数を宣言
    int firstNumber, secondNumber, thirdNumber;

    cout << "整数1 : "; cin >> firstNumber;     //整数1の入力
    cout << "整数2 : "; cin >> secondNumber;    //整数2の入力
    cout << "整数3 : "; cin >> thirdNumber;     //整数3の入力

    //初めに整数を1を中央値(medValue)として、中央値でなかった場合入れ替え
    int medValue = firstNumber;

    //整数2が中央値の場合、medValueに代入
    if ((secondNumber <= firstNumber && secondNumber >= thirdNumber) || (secondNumber <= thirdNumber && secondNumber >= firstNumber)){
    	medValue = secondNumber;
    }

    //整数3が中央値の場合、medValueに代入
    else if  ((thirdNumber <= firstNumber && thirdNumber >= secondNumber) || (thirdNumber <= secondNumber && thirdNumber >= firstNumber)) {
    	medValue = thirdNumber;
    }

    //中央値の表示
    cout << "中央値は" <<  medValue <<"です。\n";
}
