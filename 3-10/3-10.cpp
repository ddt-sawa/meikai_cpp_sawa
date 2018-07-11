/*
 * 3-10.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習3-10 前問とは逆に、0から正の整数までカウントアップするプログラムを作成せよ。 */

#include<iostream>

using namespace std;

int main()
{
	//カウントアップしたい整数値
	int upNumber;

	//カウントアップすることを告知
	cout << "0から入力された正の整数までカウントアップします。\n";

	// 正の整数値を入力させるためのループ文
	do{
		//正の整数値入力を促す
		cout << "正の整数値 : ";

		//整数値入力
		cin >> upNumber;
		//入力された値が正だった場合、ループを抜ける
	}while (upNumber <= 0);

	//表示値を正の整数になるまで一つずつ増やしていく
	for (int firstCounter = 0; firstCounter <= upNumber; ++firstCounter) {
		cout << firstCounter << '\n';
	}
}
