/*
 * 3-12.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/* 演習3-12 前問のプログラムを書き換えて、右のように式として表示する
 * プログラムを作成せよ*/

#include<iostream>

using namespace std;

int main()
{
	//nの値
	int arithmeticNumber;

	//1からnまでの和
	int entireSum = 0;

	//nの入力を促す
	cout << "nの値 : ";

	//入力
	cin >> arithmeticNumber;

	// 1からnまでの和を計算するfor文
	for(int counterVariable = 1; counterVariable <= arithmeticNumber; ++counterVariable){

		// 現在加える値を表示
		cout << counterVariable;

		//値が全体の最後尾の場合
		if (counterVariable < arithmeticNumber) {

			//" + "を表示する
			cout << " + ";
		}

		//値が全体の最後尾の場合
		else {

			//" = "を表示する
			cout << " = ";
		}

		//合計に値を加える
		entireSum += counterVariable;
	}
	//結果を表示
	cout << entireSum << "\n";
}


