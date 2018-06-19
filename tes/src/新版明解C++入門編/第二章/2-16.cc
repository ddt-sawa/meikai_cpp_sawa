/*
 * 2-16.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習2-16 月を1-12の整数値として読みこんで、それに対応する
 * 季節を表示するプログラムを作成せよ。*/

#include<iostream>

using namespace std;

int main()
{
	// 月を表すint型変数xの宣言
	int x;

	//xの入力を促す
	cout << "月を入力してください。";

	//入力されたxを読み込む
	cin >> x;

	 //xの値を利用したswitch文の作成
	switch (x){
	      case 1 : cout << "冬\n" ; break;
	      case 2 : cout << "冬\n" ; break;
	      case 3 : cout << "春\n";  break;
	      case 4 : cout << "春\n" ; break;
	      case 5 : cout << "春\n" ; break;
	      case 6 : cout << "夏\n" ; break;
	      case 7 : cout << "夏\n";  break;
	      case 8 : cout << "夏\n" ; break;
	      case 9 : cout << "秋\n" ; break;
	      case 10 : cout << "秋\n"; break;
	      case 11 : cout << "秋\n" ;break;
	      case 12 : cout << "冬\n" ;break;
	     }
}
