/*
 * 3-4.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習3-4 List3-4のwhile文終了時にxの値が-1になることを確認できるように
 * 書き換えたプログラムを作成せよ。 */

#include<iostream>

using namespace std;

int main()
{
	//カウントダウンしたい整数の宣言
	int firstNumber;

	//カウントダウン告知
	cout << "入力された整数をカウントダウンします。";

	// 正の整数を入力させるためのdo文
	do{
		//整数の入力
		cout << "正の整数値 : "; cin >> firstNumber;

		//正の整数が入力されるまで再試行
	}while (firstNumber <= 0);

	//整数の値を0になるまで一つずつ減らしていくwhile文
	while (firstNumber >= 0){
		//カウントダウンを表示しつつ
		cout << firstNumber << "\n";
		//整数をデクリメント
		--firstNumber;
	}
	//while文終了時の整数値を確認 (-1)
	cout << "終了時の整数の値は" << firstNumber << "です。\n";
}
