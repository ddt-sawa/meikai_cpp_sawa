/*
 * 2-6.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習2-6 キーボードから読み込んだ点数に応じて、優/良/可/不可を判定して
 * 表示するプログラムを作成せよ。判定は以下のように行うこと
 * 0-59 → 不可/ 60-69 → 可 / 70-79 → 良 /80-100 → 優 */

#include<iostream>

using namespace std;

int main()
{
	// int型変数xの宣言
	int x;

	//xの入力を促す
	cout << "得点を入力してください";

	//入力されたxを読み込む
	cin >> x;

		//xが0-59の場合
		if (x >= 0 && x <= 59)
			cout << "不可\n";

		//xが60-69の場合
		else if (x >= 60 && x <= 69)
			cout << "可\n";

		//xが70-79の場合
		else if (x >= 70 && x <= 79)
			cout << "良\n";

		//xが80-89の場合
		else if (x >= 80 && x <= 100)
			cout << "優\n";
}
