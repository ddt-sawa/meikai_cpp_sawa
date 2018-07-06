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
	//血液型を格納した列挙体の宣言
	enum bloodGroup {aGroup, bGroup, abGroup, oGroup, invalidGroup};

	//血液型選択に使う整数値
	int choiceInteger;

	//血液型を入力させるループ文
	do {

		//血液型に対応した整数値の入力を促す
		cout << "血液型を入力してください。 (0 = 『A型』 1 =『B型』  2 =『AB型』 3 =『O型』 4 =『終了』) ";

		//整数値入力
		cin >> choiceInteger;

		//値が列挙子内の血液型を指すまで繰り返し
	}while (choiceInteger < aGroup || choiceInteger > invalidGroup);

	//選んだ列挙子が4 = 『invalidMark』でないとき
	if (choiceInteger != invalidGroup){

		//bloodGroup型変数に選んだ値をキャスト
		bloodGroup userGroup = static_cast<bloodGroup>(choiceInteger);

		////選んだ血液型毎に表示文を変更
		switch (userGroup){
		case aGroup  : cout << "Ａ型ですね。\n";   //0 = 『A型』
		break;

		case bGroup  : cout << "Ｂ型ですね。\n";   //1 =『B型』
		break;

		case abGroup : cout << "ＡＢ型ですね。\n"; //2 =『AB型』
		break;

		case oGroup  : cout << "Ｏ型ですね。\n";   //3 =『O型』
		break;
		}
	}
}
