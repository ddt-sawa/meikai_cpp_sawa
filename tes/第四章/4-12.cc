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
	//列挙体の宣言と、マーク入力に使う変数の宣言
	enum trump {diamond, heart, club, spade, invalid};
	int type;

	//マークを入力
	do {
		cout << "0 -『ダイヤ』  1 -『ハート』  2 -『クラブ』 3 -『スペード』 4 -『終了』";
		cin >> type;
		} while (type < diamond || type > invalid);

	//列挙子がinvalidでないとき
	if (type != invalid){

	    // trump型変数にtypeをキャスト
		trump symbol = static_cast<trump>(type);

		//symbol毎にswitch文で分岐
		switch (symbol){
		case diamond : cout << "ダイアを出しました。\n"; break;
		case heart : cout << "ハートを出しました。\n"; break;
		case club : cout << "クラブを出しました。\n"; break;
		case spade : cout << "スペードを出しました。\n"; break;
		}
	}
}
