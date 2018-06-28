/*
 * 4-10.cc
 *
 *  Created on: 2018/06/21
 *      Author: syuka
 */

/*演習4-10 List4-15のように、float型の変数を0.0から1.0まで0.001ずつ
 * 増やしていく様子と、List4-16のように、int型の変数を0から1000
 * までインクリメントした値を1000で割った値を求める様子を、
 * 横に並べて表示するプログラムを作成せよ。
 */


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	//以下の浮動小数を有効数字6桁で表現
	cout << fixed << setprecision(6) << "  float        int\n";
	//仕切り
	cout << "_________________________\n";

    //float型の計算に用いるxを宣言
	float x = 0;

	for (int i = 00; i <= 1000; i++){

		//float型で0.001ずつインクリメント
		cout << x << "    ";
		x += 0.001F;

		//int型を1000で割った数値(0.001)ずつインクリメント
		float y = static_cast<double>(i) / 1000;
		cout <<  y << '\n';
	}
}
