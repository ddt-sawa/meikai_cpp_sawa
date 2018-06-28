/*
 * 3-16.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習3-16 右に示すように、1からnまでの整数値の2乗値を表示する
 * プログラムを作成せよ。 */

#include<iostream>

using namespace std;

int main()
{
	//整数値を入力させる
    int n;
    cout << "nの値 : ";
	cin >> n;

	//i回目の時i~2を表示する
	for (int i = 1; i <= n; i++)
		cout << i << "の2乗は" << i * i << '\n';
}
