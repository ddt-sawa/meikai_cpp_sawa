/*
 * 3-25.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習3-25 List3-3(p.87)の数当てゲームのプレーヤが値を入力できる回数に
 * 制限を設けたプログラムを作成せよ。制限回数内に当てられなかった場合は、
 * 正解を表示してゲームを終了すること。
 */

#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	//rand関数を使う準備
	srand(time(NULL));

	//rand関数を用いて、int型変数luckyを0-99の乱数で初期化
	int lucky = rand() % 100;

	//回答となるint型変数xと、入力回数となるyの宣言
	int x; int y;

	cout << "数当てゲーム開始！\n";

	cout << "入力回数を指定してください。"; cin >> y;

	cout << "0-99の数を当ててください。\n";

	//正解が出るまで入力を続けさせる
	for (int i = 0; i < y; i++){
		//回答を促し、値を読み込む
		cout << "いくつでしょうか。";  cin >> x;

		//回答(x)が乱数(lucky)より大きい場合
		if (x > lucky)
			cout << "もっと小さな数です。\n";

		//回答(x)が乱数(lucky)より小さい場合
		else if (x < lucky )
			cout << "もっと大きな数です。\n";

		//正解した場合Answerラベルに移動
		else{
			cout << "正解です！"; goto Answer;}
	}

	//正解できなかった場合
	cout << "正解は" << lucky << "でした。\n";
	//正解できた場合
	Answer : ;
}
