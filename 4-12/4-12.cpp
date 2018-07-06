/*
 * 4-12.cc
 *
 *  Created on: 2018/06/21
 *      Author: syuka
 */

/*トランプの記号(ダイヤ、ハート、クラブ、スペード)の4つの列挙子を持つ列挙体を定義せよ。
各列挙子の値は、先頭から順に0,1,2,3とし、List4-17と同様にキーボードから値を読み込んで表示すること。*/

#include<iostream>

using namespace std;

int main()
{
	//トランプのマークを格納した列挙体の宣言
	enum trumpMark {diamondMark, heartMark, clubMark, spadeMark, invalidMark};

	//マーク選択に使う整数値
	int userChoice;

	//マークを入力させるループ文
	do {
		//マークに対応した整数値の入力を促す
		cout << "0 -『ダイヤ』  1 -『ハート』  2 -『クラブ』 3 -『スペード』 4 -『終了』";

		//整数値入力
		cin >> userChoice;

		//値が列挙子内のマークを指すまで繰り返し
		} while (userChoice < diamondMark || userChoice > invalidMark);

	//選んだ列挙子が4 = 『invalidMark』でないとき
	if (userChoice != invalidMark){

	    // trumpMark型変数に選んだ値ををキャスト
		trumpMark userSymbol = static_cast<trumpMark>(userChoice);

		//選んだマーク毎に表示文を変更
		switch (userSymbol){

		case diamondMark : cout << "ダイヤを出しました。\n"; //0 = 『ダイヤ』
		break;

		case heartMark : cout << "ハートを出しました。\n";   //1 = 『ハート』
		break;

		case clubMark : cout << "クラブを出しました。\n";    //2 = 『クラブ』
		break;

		case spadeMark : cout << "スペードを出しました。\n"; //3 = 『スペード』
		break;
		}
	}
}
