/*
 * 1-14.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習1-14 キーボードから読み込んだ整数値プラスマイナス5の範囲の整数値を
  ランダムに生成して表示するプログラムを作成せよ */

#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	//int型変数xを宣言
	int x;

	//xの入力を促す
	cout << "整数値 : ";

	//xの入力
	cin >> x;

	// 乱数の種を設定
    srand(time(NULL));

    //0～10の乱数を生成
    int y = rand() % 11;

    //入力した値に0～10を加え、その後5を減じた値を表示
    cout << "その値の±5の乱数を生成しました。それは" << x + y -5  << "です。";
}
