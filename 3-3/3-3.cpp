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
	//int型変数x,yの宣言
    int x, y;

    // 実数値の入力を促し、読み込む
    cout << "整数x : "; cin >> x;
    cout << "整数y : "; cin >> y;


    //大きい数をxに、小さい数をyに移動
    if (x < y){
    	int t = x;
    	x = y;
    	y = t;
    }

    //x == yになるまで、yに1を加え表示を続ける
    do{
    	cout << y++ << " ";
    }while(x >= y);
}
