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
	//int型変数xの宣言
	int x;

	//数を一つずつ減らしていくことを告知
	cout << "カウントダウンします";

	// 正の整数値が入力されるまで、入力を促す
	do{
		cout << "正の整数値 : ";
		cin >> x;
	}while (x <= 0);

	//xの値を0になるまで一つずつ減らしていく
	while (x >= 0){
		cout << x << "\n";
		x--;
	}
	//while文終了時のxの値を確認
	cout << "終了時のxの値は" << x << "です。\n";
}
