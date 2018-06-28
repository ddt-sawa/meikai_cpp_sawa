/*
 * 3-2.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習3-2 2桁の整数値(10-99)を当てさせる<<数当てゲーム>>を作成せよ。*/

//rand関数を使うため、<ctime>と<cstdlib>をインクルード
#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	//rand関数を使う準備
	srand(time(NULL));

	//rand関数を用いて、int型変数luckyを10-99の乱数で初期化
	int lucky = rand() % 90 + 10;

	//回答となるint型変数xの宣言
	int x;

	cout << "数当てゲーム開始！\n";
	cout << "10-99の数を当ててください\n";

	//正解が出るまで入力を続けさせる
	do{
		//回答を促し、値を読み込む
		cout << "いくつでしょうか。";  cin >> x;

		//回答(x)が乱数(lucky)より大きい場合
		if (x > lucky)
			cout << "もっと小さな数です。\n";

		//回答(x)が乱数(lucky)より小さい場合
		else if (x < lucky)
			cout << "もっと大きな数です。\n";
	}while (x != lucky);

	//正解を通知
	cout << "正解です!\n";
}
