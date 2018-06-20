/*
 * 3-19.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習3-19　n段の正方形を表示するプログラムを作成せよ。右に示すのは、
 * nが3の時の実行結果である。
 */

#include<iostream>

using namespace std;

int main()
{
	//整数値を入力させ、読み込む
    int n;
    cout << "段数 : ";
	cin >> n;

	//正方形のアスタリスクを表示
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++)
			cout << '*';
		cout << '\n';
	}
}
