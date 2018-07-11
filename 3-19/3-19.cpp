/*
 * 3-19.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習3-19 n段の正方形を表示するプログラムを作成せよ。右に示すのは、
 nが3の時の実行結果である。*/

#include<iostream>

using namespace std;

int main()
{
	//正方形の段数
    int stepNumber;

    //整数値入力を促す
    cout << "段数 : ";

    //入力
	cin >> stepNumber;

	//n×nマス（正方形）上にアスタリスクを表示
	for (int firstCounter = 1; firstCounter <= stepNumber; ++firstCounter){
		for (int secondCounter = 1; secondCounter <= stepNumber; ++secondCounter) {
			cout << '*';
		}
		//段数を変えるため改行
		cout << '\n';
	}
}
