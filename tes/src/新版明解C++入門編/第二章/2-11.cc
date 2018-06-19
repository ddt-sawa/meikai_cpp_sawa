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
	//int型変数x,y,zの宣言
    int x, y, z;

    //x,y,zの入力を促し、読み込む
    cout << "整数x : "; cin >> x;
    cout << "整数y : "; cin >> y;
    cout << "整数z : "; cin >> z;

    //中央値を表すint型変数medの宣言
    int med = x;

    //yが中央値の場合
    if ((y <= x && y >= z) || (y <= z && y >= x))
    	med = y;

    //zが中央値の場合
    else if  ((z <= x && z >= y) || (z <= y && z >= x))
    	med = z;

    cout << "中央値は" <<  med <<"です。\n";
}
