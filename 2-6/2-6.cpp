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
	//判定したい得点の宣言
	int userScore;

	//得点入力を促す
	cout << "得点を入力してください : ";

	//得点入力
	cin >> userScore;

	//得点が0-59の場合
	if (userScore >= 0 && userScore <= 59){
		cout << "不可\n";
	}

	//60-69の場合
	else if (userScore >= 60 && userScore <= 69){
		cout << "可\n";
	}

	//70-79の場合
	else if (userScore >= 70 && userScore <= 79){
		cout << "良\n";
	}

	//80-89の場合
	else if (userScore >= 80 && userScore <= 100){
		cout << "優\n";
	}
}
