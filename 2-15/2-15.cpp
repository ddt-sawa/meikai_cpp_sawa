/*
 * 2-15.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習2-15 おみくじプログラムを作成せよ。乱数を生成して、
 * 『大吉』、『中吉』、『小吉』、『吉』、『末吉』、『凶』、『大凶』のいずれかを作成すること。
 * なおswitch文を用いて実現すること。*/

#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	//おみくじの結果を表示することの告知
	cout << "おみくじを引きます。\n";

	//乱数テーブルの準備
	srand(time(NULL));

	//0～6の乱数を生成
	int randNumber = rand() % 7;

	//乱数の値によって表示する吉凶を変更
	switch (randNumber){
	case 0 : {cout << "大吉\n";}  //0 = 大吉
	break;

	case 1 : {cout << "中吉\n";}  //1 = 中吉
	break;

	case 2 : {cout << "小吉\n";}  //2 = 小吉
	break;

	case 3 : {cout << "吉\n";}    //3 = 吉
	break;

	case 4 : {cout << "末吉\n";}  //4 = 末吉
	break;

	case 5 : {cout << "凶\n";}    //5 = 凶
	break;

	case 6 : {cout << "大凶\n";}  //6 = 大凶
	break;
	}
}
