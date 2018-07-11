/*
 * 3-5.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習3-5 読み込んだ値が1未満であれば改行文字を出力しないようにList3-6(p.92)
 * を書き換えたプログラムを作成せよ。*/

#include<iostream>

using namespace std;

int main()
{
	//記号数
	int symbolValue;

	//記号数入力を促す
	cout << "何個*を表示しますか : ";

	//記号数入力
	cin >> symbolValue;

	//記号数が1以上の場合のみ改行及び記号の表示を行う
	if (symbolValue >= 1) {

		//記号数ぶん記号を表示するループ文
		for (int counterVariable = 0; counterVariable < symbolValue; ++counterVariable) {

			//記号を表示
			cout << '*';
		}

		// 記号数が1以上の場合のみ改行を行う
		cout << '\n';
	}

}
