/*
 * 2-8.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習2-8 二つの整数値を読み込んで、それらの値の差を表示するプログラムを作成せよ */

#include<iostream>

using namespace std;

int main()
{
	//int型変数x,yの宣言
	int x, y;

    // x,yの入力を促し、読み込む
    cout << "整数x : "; cin >> x;
    cout << "整数y : "; cin >> y;

    //x - y の絶対値を表示
     cout << "それらの値の差は" << (x > y ? (x - y) : (y - x)) << "です。\n";
}
