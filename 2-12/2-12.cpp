/*
 * 2-12.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習2-12 List2-13と同様に、二つの整数値を読み込んで、小さい方の値と大きい方の値の両方を
 *表示するプログラムを作成せよ。ただし、二つの整数値が等しい場合は、右に示すように
 『二つの値は同じです。』と表示すること。*/

#include<iostream>

using namespace std;

int main()
{
	//大小を調べたい2整数を宣言
	int firstNumber, secondNumber;

	cout << "整数x : "; cin >> firstNumber;     //整数xの入力
	cout << "整数y : "; cin >> secondNumber;    //整数yの入力

	//最小値(minValue)、最大値(maxValue)の宣言
	int minValue, maxValue;

	//2値が等しくない場合、最大値と最小値を求める
	if (firstNumber != secondNumber){

		//整数xが整数yより大きい場合
		if (firstNumber > secondNumber){
			maxValue = firstNumber;           //最大値 = 整数x
			minValue = secondNumber;          //最小値 = 整数y
		}
		//整数xが整数yより小さい場合
		else{
			maxValue = secondNumber;          //最大値 = 整数y
			minValue = firstNumber;           //最小値 = 整数x
		}

		//最大値の表示
		cout << "小さい方の値は" << minValue << "です。\n";

		//最小値の表示
		cout << "大きい方の値は" << maxValue << "です。\n";
	}

	//2値が等しい場合、最大値と最小値の表示なし
	else{
		cout << "二つの値は同じです。\n";
	}
}
