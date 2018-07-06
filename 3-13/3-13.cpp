/*
 * 3-13.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/* 身長と標準体重の対応表を表示するプログラムを作成せよ。
 * 表示する身長の範囲（開始値/終了値/増分）は、整数値として読み込むこと。
 * ※標準体重は（身長 - 100）* 0.9 によって求める。
 */

#include<iostream>

using namespace std;

int main(){

	//開始値
	int startHeight;

	//入力を促す
	cout << "何cmから : ";

	//入力
	cin >> startHeight;

	//終了値
	int finishHeight;

	//入力を促す
	cout << "何cmまで : ";

	//入力
	cin >> finishHeight;

	//増分
	int incrementValue;

	//入力を促す
	cout << "何cmごと : ";

	//入力
	cin >> incrementValue;

	//表示する身長を開始値で初期化
    int currentHeight = startHeight;

    //表示画面のレイアウトを整える
	cout << "身長 標準体重\n";

	// 増分した身長が終了値に達するまで、標準体重を表示するループ文
	for (int counterHeight = 0; counterHeight <= ((finishHeight - startHeight) / incrementValue); counterHeight++){

		//標準体重を表示
		cout << currentHeight << "    " << (currentHeight - 100) * 0.9 <<'\n';

		//次に表示する身長に増分を加える
		currentHeight += incrementValue;
	}
}
