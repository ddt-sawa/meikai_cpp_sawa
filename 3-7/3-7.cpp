/*
 * 3-7.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習3-7 右に示すように、正の整数値を読み込んで、
 * その桁数を出力するプログラムを作成せよ。。*/

#include<iostream>

using namespace std;

int main()
{
	//正の整数値
	int positiveInteger;

	//正の整数値が与えられるまで以下の処理を繰り返す
	do{

		//正の整数値の入力を促す
		cout << "正の整数値 : ";

		//入力された値を読み込む
		cin >> positiveInteger;

		//正の整数値であればループを抜ける
	}while (positiveInteger <= 0);

	//桁数
	int digitsNumber = 0;


	//入力された整数値が1より小さくなるまで桁を下げるループ
	for (; positiveInteger > 1; ++digitsNumber) {

		//桁を1つ下げる
		positiveInteger /= 10;
	}

	//桁を下げた回数が整数値の桁数になる
	cout << "その値は" << digitsNumber << "桁です。\n";
}
