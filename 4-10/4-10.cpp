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
	//浮動小数を有効数字6桁で表現することを宣言し、レイアウトを整える
	cout << fixed << setprecision(6) << "  float        int\n";
	//仕切り
	cout << "_________________________\n";

    //float型の変数を0.001ずつ増やしていった総和
	float floatSum = 0;

	for (int counterVariable = 00; counterVariable <= 1000; ++counterVariable){

		//float型で0.001ずつインクリメント
		cout << floatSum << "    ";

		//float型の表示
		floatSum += 0.001F;

		//int型を1000で割った数値(0.001)ずつインクリメントした値
		float intSum = static_cast<double>(counterVariable) / 1000;

		//int型の表示
		cout <<  intSum << '\n';
	}
}
