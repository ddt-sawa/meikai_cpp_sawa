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
	int firstNumber;

	//正の整数値が与えられるまで以下の処理を繰り返す
    do{

	//正の整数値の入力を促す
	    cout << "正の整数値 : ";

	//入力された値を読み込む
	    cin >> firstNumber;

	    //正の整数値であればループを抜ける
    }while (firstNumber <= 0);

	//繰り返しを制御するint型変数iを0で初期化
	int i = 0;

	//値が1より大きい場合
	while (firstNumber >= 1){
		//桁を一つ下げる
		firstNumber /= 10;
		//iをインクリメントして繰り返し
		i++;
	}

	//値が1より小さくなるまで桁を下げた回数が、値の桁数になる
cout << "その値は" << i << "桁です。\n";
}
