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

	//整数値を入力させる
	int n;
	cout << "整数値 : ";
	cin >> n;

	//約数の個数を表すint型変数divisorの宣言
	int divisor = 0;

	for (int i = 1; i <= n; i++){
		// nを割り切れる約数を探す
		if (!(n % i)){
			cout << i << '\n';
			//約数が見つかるたび、約数の個数に1加える
			divisor++;
		}
	}
	//約数の個数表示
	cout << "約数は" << divisor << "個です。\n";
}
