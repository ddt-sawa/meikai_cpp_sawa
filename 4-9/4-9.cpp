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
	//３整数の宣言
	int firstInteger, secondInteger, thirdInteger;

	//３整数入力を促す
	cout << "整数を3つ入力してください。";

	//３整数入力
	cin >> firstInteger >> secondInteger >> thirdInteger;

	//合計
	cout << "合計は" << firstInteger + secondInteger + thirdInteger << "です。\n";

	//平均（キャスト記法）
	cout << "平均(キャスト記法)は" << (double)(firstInteger + secondInteger + thirdInteger) / 2 << "です。\n";

	//平均（関数的記法）
	cout << "平均(関数的記法)は" << double(firstInteger + secondInteger + thirdInteger) / 2 << "です。\n";

	//平均（static_castを用いた記法）
	cout << "平均(static_cast演算子)は" << static_cast<double>(firstInteger + secondInteger + thirdInteger) / 2 << "です。\n";
}
