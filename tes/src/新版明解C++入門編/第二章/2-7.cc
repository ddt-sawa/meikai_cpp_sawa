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
	//double型変数x,yの宣言
    double x, y;

    // x,yの入力を促し、読み込む
    cout << "実数x : "; cin >> x;
    cout << "実数y : "; cin >> y;

    //最大値を表すdouble型変数minの初期化と、条件式による評価
    double max = x > y ? x : y;

    //maxの表示
    cout << "大きい方の値は" << max << "です。\n";
}
