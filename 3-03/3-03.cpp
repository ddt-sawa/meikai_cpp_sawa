/*
 * 3-3.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習3-3 右に示すように、二つの実数値を読み込んで、小さい方の数以上で大きい方の数以下の全整数を、
 * 小さい方から順に表示するプログラムを作成せよ */

#include<iostream>

using namespace std;

int main()
{
	//2整数の宣言
    int firstNumber, secondNumber;

    cout << "整数x : ";  //整数xの宣言
    cin >> firstNumber;  //整数xの入力

    cout << "整数y : ";  //整数yの宣言
    cin >> secondNumber; //整数yの入力

    //整数xが整数yより大きい場合
    if (firstNumber < secondNumber){

    	//2整数の値を交換
    	int tradeNumber = firstNumber;  //整数xの値を保存し
    	firstNumber = secondNumber;     //整数xに実数yを代入し
    	secondNumber = tradeNumber;     //整数yに実数xを代入する
    }

    //小さい整数から大きい整数までの全整数を小さい順に表示するdo文
    do{
    	//整数yを表示した後インクリメントを行い、
    	cout << secondNumber++ << " ";
    	//整数x == 整数yになるまでループを続ける
    }while(firstNumber >= secondNumber);
}
