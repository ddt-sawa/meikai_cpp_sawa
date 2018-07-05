/*
 * 3-18.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習3-18 九九の表を表示するList3-13(p.106)を、setw操作子を用いることなく
 * 実現するように書き換えたプログラムを作成せよ。
 */


#include<iostream>

using namespace std;

int main ()
{
	//for文を用いて九九の総当たり計算を行うループ文（段）
	for (int i = 1; i <= 9; i++){

		//for文を用いて九九の総当たり計算を行うループ文（掛）
		for(int j = 1; j <= 9; j++){

			//段×掛の答えを表示
			int multiplicationTable = i * j;

			//1桁の時は空白文字を前方に2つ置く
			if (multiplicationTable < 10) {
				cout << "  " << multiplicationTable;
			}
			//2桁の時は空白文字を前方に1つ置く
			else {
				cout << " " << multiplicationTable;
			}
		}
		//段が変わるごとに改行
		cout << "\n";
	}
}
