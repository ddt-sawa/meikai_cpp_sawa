/*
 * 3-13.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/* 身長と標準体重の対応表を表示するプログラムを作成せよ。
 * 表示する身長の範囲（開始値/終了値/増分）は、整数値として読み込むこと。
 * ※標準体重は（身長 - 100）* 0.9 によって求める。
 */

#include<iostream>

using namespace std;

int main(){

	//開始値、終了値、増分の入力を促す

	int x; cout << "何cmから : "; cin >> x;
	int y; cout << "何cmまで : "; cin >> y;
	int z; cout << "何cmごと : "; cin >> z;

	//for文内の繰り返し条件にxを使うので、増分を加えた身長値をaに保存
    int a = x;

	cout << "身長 標準体重\n";

	// (y - x) / z 回増分した身長と標準体重を表示する
	for (int i = 0; i <= ((y - x) / z); i++){

		cout << a << "    " << (a - 100) * 0.9 <<'\n';

		//身長に増分を加える
		a += z;
	}
}
