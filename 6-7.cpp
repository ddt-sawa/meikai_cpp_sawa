/*
 * 6-7.cpp
 *
 *  Created on: 2018/06/22
 *      Author: syuka
 */

/*演習6-7 引数mで指定された月の季節を表示する関数print_seasonを作成せよ。
 * mが3,4,5であれば「春」、6,7,8であれば「夏」9,10,11であれば「秋」、
 * 12,1,2であれば「冬」と表示し、それ以外の値であれば何も表示しないこと。
  void print_season(int m);　*/

#include<iostream>

using namespace std;

/**
*引数として受け取った月に応じた季節を表示する
* @param thisMonth 月
* @author Sawa
* @since 7.17
*/
void printSeason(int thisMonth)
{
	//引数を利用したswitch文の作成
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

	//それ以外の場合何も表示しない
	default: break;
	}
}

int main()
{
	//月となる整数値の宣言
	int thisMonth;

	//月の入力を促す
	cout << "月を入力してください。 月 : ";

	//月の入力
	cin >> thisMonth;

	//printSeason関数に月を渡す
	printSeason(thisMonth);
}


