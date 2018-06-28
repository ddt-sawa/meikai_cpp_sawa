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
	//for文を用いて九九の総当たり計算を行い、計算結果をnとする
	for (int i = 1; i <= 9; i++){
		for(int j = 1; j <= 9; j++){
			int n = i * j;

			//1桁の時は空白文字をnの前方に2つ置く
			if (n < 10)
				cout << "  " << n;
			//2桁の時は空白文字をnの前方に1つ置く
			else
				cout << " " << n;
		}
		cout << "\n";
	}
}
