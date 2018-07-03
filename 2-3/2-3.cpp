/*
 * 2-3.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習2-3 二つのint型変数a,bに値を読み込んで、その大小関係を以下の
  いずれかで表示するプログラムを作成せよ。
  『aの方が大きいです。』『bの方が大きいです』『aとbは同じ値です』*/

#include<iostream>

using namespace std;

int main()
{
	//二つの整数値を宣言
	int firstNumber, secondNumber;

	//一つ目の整数値の入力を促す
	cout << "aの値を入力してください : ";

	//入力された整数値を読み込む
	cin >> firstNumber;

	//二つ目の整数値の入力を促す
	cout << "bの値を入力してください : ";

	//入力された整数値を読み込む
    cin >> secondNumber;

	//一つ目の値の方が大きかった場合『aの方が大きいです。』を表示
	if (firstNumber > secondNumber) {
		cout << "aの方が大きいです。\n";
	}

	//二つ目の値の方が大きかった場合『bの方が大きいです。』を表示
	else if (firstNumber < secondNumber) {
		cout << "bの方が大きいです。\n";
	}

    // 両整数が等しい場合『aとbは同じ値です。』を表示
	else if (firstNumber == secondNumber) {
			cout << "aとbは同じ値です。\n";
	}
}


