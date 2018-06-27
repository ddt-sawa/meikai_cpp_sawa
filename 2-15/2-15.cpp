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

	 cout << "おみくじを引きます。\n";

	 //rand関数を使うための準備
     srand(time(NULL));

     //0-6の値を取るint型変数xの宣言
     int x = rand() % 7;

     //xの値を利用したswitch文の作成
     switch (x){
      case 0 : cout << "大吉\n";  break;
      case 1 : cout << "中吉\n" ; break;
      case 2 : cout << "小吉\n" ; break;
      case 3 : cout << "吉\n";    break;
      case 4 : cout << "末吉\n" ; break;
      case 5 : cout << "凶\n" ;   break;
      case 6 : cout << "大凶\n" ; break;
     }
}
