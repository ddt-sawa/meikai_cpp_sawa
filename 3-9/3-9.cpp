/*
 * 3-9.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習3-9 正の整数値を0までカウントダウンするList3-4をfor文で実現せよ。 */

#include<iostream>

using namespace std;

int main()
{
	//カウントダウンしたい整数値
	int countNumber;

	//カウントダウンを告知
	cout << "入力したい整数値をカウントダウンします。\n";

	// 正の整数値を入力させるためのループ文
	do{
		//正の整数値入力を促す
		cout << "正の整数値 : ";
		//整数値入力
		cin >> countNumber;
		//入力された値が正だった場合、ループを抜ける
	}while (countNumber <= 0);

	//値を0になるまで一つずつ減らしていく
	for (int i = 0; i <= countNumber; i++) {
		cout << (countNumber - i) << '\n';
	}
}
