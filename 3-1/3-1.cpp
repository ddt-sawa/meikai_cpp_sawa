/*
 * 3-1.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習3-1 読み込んだ整数値の符号を判定するList2-5(p44)を、好きなだけ何度でも
 * 入力・表示を繰り返せるようにしたプログラムを作成せよ。*/

//string型を使うため、<string>ヘッダをインクルード
#include<string>
#include<iostream>

using namespace std;

int main()
{
    //繰り返しを訪ねる際に用いる、siring型変数retryの宣言
	string retry;

    do {
	// int型変数xの宣言
	int x;

	//整数の入力を促す
	cout << "整数値 : ";

	//入力された整数を読み込む
	cin >> x;

	//xが正の場合
	if (x > 0)
		cout << "その値は正です\n";

	//xが負の場合
	else if (x < 0)
		cout << "その値は負です\n";

	//xが0の場合
	else
		cout << "その値は0です。\n";

	//もう一度入力を行うかを訪ねる
	cout << "もう一度？ Y・・・Yes / N・・・No";

    //Y,yを検出した場合もう一回
	cin >> retry;
    }while(retry == "Y" || retry == "y");
}
