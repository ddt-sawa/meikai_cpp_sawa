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
	//int型変数x,yの宣言
	int x, y;

    // x,yの入力を促し、読み込む
    cout << "整数x : "; cin >> x;
    cout << "整数y : "; cin >> y;

    //二値の差を表すint型変数balanceを宣言し、x - y の絶対値で初期化
    int balance = (x > y ? (x - y) : (y - x));

    //差が10以下の場合
    if (balance <= 10)
    	cout << "それらの差は10以下です。\n";

    else
    	cout << "それらの差は11以上です。\n";
}

