/*
 * 4-11.c
 *
 *  Created on: 2018/06/21
 *      Author: syuka
 */

/*演習4-11 float型の変数を0.0から1.0まで0.001ずつ増やしながら、その値とその値の2乗を
表示するプログラムを作成せよ。*/

#include<iomanip>
#include<iostream>

using namespace std;

int main()
{
	//有効数字を6桁に設定
	cout << fixed << setprecision(6);

    //0から1まで0.001ずつインクリメントした値とその2乗を表示するループ文
	for (float floatCounter = 0.0F; floatCounter <= 1.0F; floatCounter += 0.001F){

		//値をコンソール画面に出力
		cout << floatCounter << "  " << floatCounter * floatCounter << '\n';
	}
}
