/*
 * 2-14.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習2-14 0,1,2のいずれかの値の乱数を生成し、0であれば『グー』、1であれば『チョキ』、
 * 2であれば『パー』と表示するプログラムを作成せよ。なおswitch文を用いて実現すること。*/

#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	 cout << "ランダムにじゃんけんの手を表示します。\n";

	 //rand関数を使うための準備
     srand(time(NULL));

     //0-2の値を取るint型変数xの宣言
     int x = rand() % 3;

     //xの値を利用したswitch文の作成
     switch (x){
      case 0 : cout << "グー\n";    break;
      case 1 : cout << "チョキ\n" ; break;
      case 2 : cout << "パー\n" ;   break;
     }
}
