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
	//2乗値を表示したい整数値
    int integerValue;

    //入力を促す
    cout << "nの値 : ";

    //入力
	cin >> integerValue;

	//1からnまでの2乗値を表示するループ文
	for (int i = 1; i <= integerValue; i++)
		//2乗値を表示
		cout << i << "の2乗は" << i * i << '\n';
}
