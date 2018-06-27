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
	//int型変数x,y,zの宣言
    int x, y, z;

    //x,y,zの入力を促し、読み込む
    cout << "整数x : "; cin >> x;
    cout << "整数y : "; cin >> y;
    cout << "整数z : "; cin >> z;

    //最小値を表すint型変数minの宣言と初期化
    int min = x;

    //yが現時点でのminより小さい場合
    if (y < min) min = y;

    //zが現時点でのminより小さい場合
    if (z < min) min = z;

    //minの表示
    cout << "最小値は" << min << "です。\n";
}
