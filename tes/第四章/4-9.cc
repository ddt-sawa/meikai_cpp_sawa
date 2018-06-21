/*
 * 4-9.cc
 *
 *  Created on: 2018/06/21
 *      Author: syuka
 */

/*演習4-9 三つの整数値を読み込んで、その合計と平均を表示するプログラムを作成せよ。
 * 平均は実数値で表示すること。キャスト記法を用いるもの、関数的記法を用いるもの、
 * static_cast演算子を用いるものを作成すること。
 */

#include<iostream>

using namespace std;

int main()
{
	//３つの整数の読み込み
	int x; int y; int z;
	cout << "整数を3つ入力してください";
	cin >> x >> y >> z;

	//合計
	cout << "合計は" << x + y + z << "です。\n";

	//平均（キャスト記法）
	cout << "平均(キャスト記法)は" << (double)(x + y + z) / 2 << "です。\n";

	//平均（関数的記法）
	cout << "平均(関数的記法)は" << double(x + y + z) / 2 << "です。\n";

	//平均（static_castを用いた記法）
	cout << "平均(static_cast演算子)は" << static_cast<double>(x + y + z) / 2 << "です。\n";
}
