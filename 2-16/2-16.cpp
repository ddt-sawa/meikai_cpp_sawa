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
	//月として入力する整数値を宣言
	int thisMonth;

	//整数値の入力
	cout << "月を入力してください : "; cin >> thisMonth;

	//入力値を利用したswitch文の作成
	switch (thisMonth){


	//(12)1,2月の場合"冬"と表示
	case 1 :
	case 2 : {cout << "冬\n";}
	break;

	//3,4,5月の場合"春"と表示
	case 3 :
	case 4 :
	case 5 : {cout << "春\n";}
	break;

	//6,7,8月の場合"夏"と表示
	case 6 :
	case 7 :
	case 8 : {cout << "夏\n";}
	break;

	//9,10,11月の場合"秋"と表示
	case 9 :
	case 10:
	case 11: {cout << "秋\n";}
	break;

	//12月の場合"冬"と表示
	case 12: {cout << "冬\n";}
	break;

	//上記以外の整数値が入力された場合、"その月はありません。"と表示
	default: {cout << "その月はありません。\n";}
	break;
	}
}
