/*
 * 2-13.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習2-13 二つの整数値を読み込んで降順(大きい順)に並び替えるプログラムを作成せよ。*/

#include<iostream>

using namespace std;

int main()
{
	//2整数を宣言
	int firstNumber, secondNumber;

    //
    cout << "整数x : "; cin >> firstNumber;    //整数xを入力
    cout << "整数y : "; cin >> secondNumber;   //整数yを入力

    //整数xが整数yより小さいならば、値を交換
    if (firstNumber < secondNumber){

    	int t = firstNumber;           //整数xの値を一時保存
    	firstNumber = secondNumber;    //整数yの値を整数xに代入
    	secondNumber = t;              //保存していた整数xの値を整数yに代入
    }

    //2整数を降順にソートしたことを表示
    cout << "整数x <= 整数y となるようにソートしました。\n";

    //整数xの表示
    cout << "整数xは" << firstNumber << "です。\n";

    //整数yの表示
    cout << "整数yは" << secondNumber << "です。\n";
}
