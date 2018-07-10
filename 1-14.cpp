/*
 * 1-14.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習1-14 キーボードから読み込んだ整数値プラスマイナス5の範囲の整数値を
  ランダムに生成して表示するプログラムを作成せよ */

//srand関数を使用するため、<ctime><cstdlib>ヘッダをインクルード
#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	//計算に使用する整数値を宣言
	int firstNumber;

	//整数値の入力を促す
	cout << "整数値 : ";

	//入力された整数値を読み込む
	cin >> firstNumber;

	//乱数テーブルを設定
	srand(time(NULL));

	//0～10の乱数を生成
	int randomNumber = rand() % 11;

	//入力した整数値から5を減じ、乱数を加えた値を表示(増減値は±5)
	cout << "その値の±5の乱数を生成しました。それは" << firstNumber - 5 + randomNumber  << "です。";
}
