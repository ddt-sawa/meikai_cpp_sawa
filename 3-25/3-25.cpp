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

//srand関数を使用するため、<ctime><cstdlib>ヘッダをインクルード
#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	//乱数テーブルを準備
	srand(time(NULL));

	//0-99までの乱数を正解として設定
	int randomNumber = rand() % 100;

	//回答値
	int userAnswer;

	//制限回数
	int answerLimit;


	//制限回数の入力を促す
	cout << "数当てゲーム開始!\n" << "制限回数を指定してください。";

	//制限回数入力
	cin >> answerLimit;

	//回答入力を促す
	cout << "0-99の数を当ててください。\n";

	//正解が出るか、制限回数が来るまで入力を続けるループ文
	for (int firstCounter = 0; firstCounter < answerLimit; firstCounter++){

		//回答を促し、値を読み込む
		cout << "いくつでしょうか。";  cin >> userAnswer;

		//回答が正解より大きい場合
		if (userAnswer> randomNumber) {

			//正解がもっと小さな数であることを告知
			cout << "もっと小さな数です。\n";
		}

		//回答が正解より小さい場合
		else if (userAnswer < randomNumber) {

			//正解がもっと大きな数であることを告知
			cout << "もっと大きな数です。\n";
		}

		//正解した場合、ループを抜けて最終行に移動
		else{
			cout << "正解です！"; goto gameClear;
		}
	}

	//制限回数内に正解できなかった場合正解告知
	cout << "正解は" << randomNumber << "でした。\n";

	//正解できた場合ゲーム終了
	gameClear : ;
}
