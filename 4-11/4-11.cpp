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
    //0-1まで0.001ずつインクリメントした値とその2乗を表示
	for (float f = 0.0F; f <= 1.0F; f += 0.001F){
		cout << f << "  " << f * f << '\n';
	}
}
