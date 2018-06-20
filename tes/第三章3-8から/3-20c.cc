/*
 * 3-20c.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習3-20 List 3-14は左下側の直角の直角三角形を表示するプログラムであった。
 * 直角が左上側、右上側、右下側の直角三角形を表示するプログラムをそれぞれ作成せよ
 *
 * b.左上側に直角が来るプログラム
 */

#include<iostream>

using namespace std;

int main()
{
	//整数値を入力させ、読み込む
    int n;
    cout << "段数 : ";
	cin >> n;

	//以下の処理をn回行う
	for (int i = 0; i <= n; i++){

		//i個の空白文字を置き
		for (int j = 0; j < i  ; j++)
			cout << ' ';
		//n - i 個のアスタリスクを表示
		for (int j = 0; j < (n - i) ; j++)
			cout << '*';
		cout << '\n';
        }
}
