/*
 * 2-4.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習2-4 正の整数値を読み込んで、それが5で割り切れれば『その値は5で割り切れます。』
 * と表示し、そうでなければ『その値は5で割り切れません。』と表示するプログラムを作成せよ。
 * 正でない値を読み込んだ場合は、『正でない値が入力されました。』と表示すること。*/

#include<iostream>

using namespace std;

int main()
{
    //int型変数xの宣言
    int x;

    //xの入力を促す
    cout << "整数値 : ";

    //入力されたxの値を読み込む
    cin >> x;

    //xが正の場合
    if (x > 0)

    	//xが5で割り切れる場合
	    if (! (x % 5))
	    	cout << "その値は5で割り切れます\n";

        //xが5で割り切れない場合
	    else
	    	cout << "その値は5で割り切れません\n";

    //xが正でない場合
    else
    	cout << "正でない値が入力されました\n";
}


