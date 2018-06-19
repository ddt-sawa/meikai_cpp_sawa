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
	//int型変数x,yの宣言
	int x, y;

    // x,yの入力を促し、読み込む
    cout << "整数x : "; cin >> x;
    cout << "整数y : "; cin >> y;

    //xがyより小さいならば、値を交換
    if (x < y){

    	//値交換用のint型変数tの初期化
    	int t = x;
    	x = y;
    	y = t;
    }
    cout << "x <= y となるようにソートしました。\n";
    cout << "変数xは" << x << "です。\n";
    cout << "変数yは" << y << "です。\n";
}
