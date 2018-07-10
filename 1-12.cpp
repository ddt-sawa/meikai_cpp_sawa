/*
 * 1-12.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習1-12 右に示すように、三角形の底辺と高さを読み込んで、
 その面積を表示するプログラムを作成せよ*/

#include<iostream>

using namespace std;

int main()
{
	// 底辺をbase、高さをheightとする
	double triangularBase, triangularHeight;

	// 底辺の値入力を促す
	cout << "三角形の底辺 : ";

	// 実数値を読み込む
	cin >> triangularBase;

	// 高さの値入力を促す
	cout << "三角形の高さ : ";

	// 実数値を読み込む
	cin >> triangularHeight;

	// 三角形の面積を表示
	cout << "面積は" << triangularBase * triangularHeight / 2 << "です。\n";
}
