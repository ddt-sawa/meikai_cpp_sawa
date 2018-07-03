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
	//乱数テーブルを準備
	srand(time(NULL));

	//正解となる10～99までの乱数を作成
	int randomNumber = rand() % 90 + 10;

	//回答となる整数値の宣言
	int userAnswer;

	//回答開始の合図を表示
	cout << "数当てゲーム開始！\n";

	//回答の入力を促す
	cout << "10-99の数を当ててください\n";

	//正解が出るまで入力を続ける
	do{

		//回答を促し、入力
		cout << "いくつでしょうか。";  cin >> userAnswer;

		//回答が正解より大きい場合
		if (userAnswer > randomNumber) {
			cout << "もっと小さな数です。\n";
		}

		//回答が正解より小さい場合
		else if (userAnswer < randomNumber) {
			cout << "もっと大きな数です。\n";
		}
	}while (userAnswer != randomNumber);

	//正解を通知
	cout << "正解です!\n";
}
