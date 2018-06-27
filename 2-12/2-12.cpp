/*
 * 2-12.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習2-12 List2-13と同様に、二つの整数値を読み込んで、小さい方の値と大きい方の値の両方を
 *表示するプログラムを作成せよ。ただし、二つの整数値が等しい場合は、右に示すように
 『二つの値は同じです。』と表示すること。*/

#include<iostream>

using namespace std;

int main()
{
	//int型変数x,yの宣言
    int x, y;

    //x,yの入力を促し、読み込む
    cout << "整数x : "; cin >> x;
    cout << "整数y : "; cin >> y;

    //int型変数min（最小値）、max (最大値)の宣言
    int min, max;

    //xとyが等しくない場合
    if (x != y){

    	//xがyより大きい場合 最大値はxで最小値はy
        if (x > y){
    	    max = x;
    	    min = y;
     }
        //xがyより小さい場合 最大値はyで最小値はx
        else{
    	    max = y;
            min = x;
     }

     //最大値と最小値の表示
     cout << "小さい方の値は" << min << "です。\n";
     cout << "大きい方の値は" << max << "です。\n";
    }
     //xとyが等しい場合
     else
    	 cout << "二つの値は同じです。\n";
}
