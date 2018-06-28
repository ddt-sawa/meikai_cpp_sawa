/*
 * 3-20.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習3-20 List 3-14は左下側の直角の直角三角形を表示するプログラムであった。
 * 直角が左上側、右上側、右下側の直角三角形を表示するプログラムをそれぞれ作成せよ
 *
 * a.左上側に直角が来るプログラム
 */

#include<iostream>

using namespace std;

int main()
{
	//直角三角形の段数を入力させ、読み込む
    int n;
    cout << "段数 : ";
	cin >> n;

	    //n段の直角三角形を表示
	for (int i = 1; i <= n; i++){
	    //左上側に直角を持っていくため、段数が変わるごとにアスタリスクを減らす
		for (int j = 0; j <= n - i; j++)
			cout << "*";
	cout << '\n';
	}
}
