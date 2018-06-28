/*
 * 4-13.cc
 *
 *  Created on: 2018/06/21
 *      Author: syuka
 */

/*演習4-13 性別、季節、曜日などを表す列挙体を自由に定義し、
 * それを用いたプログラムを作成せよ。
 */

#include<iostream>

using namespace std;

int main()
{
	//血液型を調べる列挙体の宣言
	enum bloodgroup {a, b, ab, o, invalid};
	int type;

	//血液型の入力
	do {
		cout << "血液型を入力してください。 (0 = 『A型』 1 =『B型  2 =『AB型』 3 =『O型』 4 =『終了』) ";
				cin >> type;
	}while (type < a || type > invalid);

	//列挙子がinvalid以外の場合、型変換
	if (type != invalid){
		bloodgroup selected = static_cast<bloodgroup>(type);

		//switch文で場合分け
		switch (selected){
		case a  : cout << "Ａ型ですね。\n"; break;
		case b  : cout << "Ｂ型ですね。\n"; break;
		case ab : cout << "ＡＢ型ですね。\n"; break;
		case o  : cout << "Ｏ型ですね。\n"; break;
		}
	}
}
