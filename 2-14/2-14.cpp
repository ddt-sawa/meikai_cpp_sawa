/*
 * 2-14.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習2-14 0,1,2のいずれかの値の乱数を生成し、0であれば『グー』、1であれば『チョキ』、
 * 2であれば『パー』と表示するプログラムを作成せよ。なおswitch文を用いて実現すること。*/

//srand関数を使うため、<ctime><cstdlib>ヘッダをインクルード
#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	//じゃんけんの手を表示することの告知
	cout << "ランダムにじゃんけんの手を表示します。\n";

	//乱数テーブルを用意
	srand(time(NULL));

	//0～2の乱数を生成
	int randomNumber = rand() % 3;

	//乱数の値によって表示する手を変更
	switch (randomNumber){
	case 0 : {cout << "グー\n";}       //0 = グー
	break;
	case 1 : {cout << "チョキ\n";}     //1 = チョキ
	break;
	case 2 : {cout << "パー\n";}       //2 = パー
	break;
	}
}
