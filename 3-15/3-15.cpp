/*
 * 3-15.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/* 演習3-15 読み込んだ整数値の全約数を表示するList 3-12 を書き換えて、
 * 約数の表示が終了したのちに、約数の個数を表示するプログラムを作成せよ。
 */

#include<iostream>

using namespace std;

int main(){

	//約数を調べる整数値
	int integerValue;

	//入力を促す
	cout << "整数値 : ";

	//入力
	cin >> integerValue;

	//約数の総数
	int divisorNumber = 0;

	//約数を探し、その数を記録するループ文
	for (int counterVariable = 1; counterVariable <= integerValue; ++counterVariable){

		// 整数を割り切れる値（約数）が見つかった場合
		if ((integerValue % counterVariable) == 0){
			//その約数を表示して改行
			cout << counterVariable << '\n';
			//約数が見つかるたび、約数の総数をインクリメント
			++divisorNumber;
		}
	}
	//約数の総数を表示
	cout << "約数は" << divisorNumber << "個です。\n";
}
