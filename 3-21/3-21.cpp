/*
 * 3-21.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習3-21　n段のピラミッドを表示するプログラムを作成せよ(右図は4段の例)
 * 第i行目には(i - 1) * 2 + 1個の"*"を表示すること(最終行である第n行目には
 * (n - 1) * 2 + 1個の'*'記号を表示することになる)
 */

#include<iostream>

using namespace std;

int main()
{
	//ピラミッドの段数
	int stepNumber;

	//段数入力を促す
	cout << "段数 : ";

	//段数入力
	cin >> stepNumber;

	//ピラミッド上に記号を配置するためのループ文
	for (int firstCounter = 1 ; firstCounter <= stepNumber; ++firstCounter){

		//段目 - 1個の空白文字を置く
		for(int secondCounter = 1; secondCounter <= (stepNumber - firstCounter); ++secondCounter) {
			cout << ' ';
		}

		//(段目 - 1) * 2 + 1個のアスタリスクを置く
		for(int thirdCounter = 1; thirdCounter <= (firstCounter - 1) * 2 + 1; ++thirdCounter) {
			cout << '*';
		}

		//段目 - 1個の空白文字を置く
		for(int forthCounter = 1; forthCounter <= (stepNumber - firstCounter); ++forthCounter) {
			cout << ' ';
		}

		//段数を変えるため改行
		cout << '\n';
	}
}
