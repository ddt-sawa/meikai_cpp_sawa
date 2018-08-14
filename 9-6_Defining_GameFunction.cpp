/*
* 9-6c.cpp
*
*  Created on: 2018/06/27
*      Author: ddt
*/

/*演習9-6 数当てゲーム第2版を以下のように変更したプログラムを作成せよ。
・当てるべき数を0-999とする。
・プレーヤが数値を入力できる回数を最大で10回までに制限する。
・入力ミスを行った(0-999以外の数を入力した)場合は、回数としてカウントしない。
・正解した場合は何回で正解したのかを表示し、最後まで正解しなかった場合は正解を表示する。*/

#include<iostream>
#include "9-6_Header.h"

using namespace std;

/**
* 数当てゲームの正解となる乱数(randomNumber)を生成
* @author Sawa
* @since 7.24
*/
void generateRandomNumber()
{
	//数当てゲームの正解を、0から上限値(999)までの乱数に設定
	randomNumber = rand() % maximumNumber;
}

int main()
{
	//乱数テーブルを用意
	initializeRandomNumber();

	//ゲーム開始の合図
	cout << "数当てゲーム開始!\n";

	//ユーザーの望む限りゲームを繰り返すためのループ
	do {

		//正解となる乱数(0-999)を生成
		generateRandomNumber();

		//試行回数を初期化
		int trialNumber = 0;

		//正解が出るor試行回数が制限を超過するまで回答を入力するループ
		while (true) {

			//試行回数をインクリメント
			++trialNumber;

			//試行回数が制限を超過した場合
			if (trialNumber > limitNumber) {

				//正解を表示
				cout << "正解は" << randomNumber << "でした。\n";

				//回答ループを抜ける
				break;
			}

			//回答を入力させ、正解との大小関係を取得する
			int comparisionAnswer = judgeAnswer(inputAnswer());


			//回答が正解より大きい場合
			if (comparisionAnswer == 1) {

				//回答修正を促す
				cout << "回答が正解より大きいです。\n";
			}

			//回答が正解より小さい場合
			else if (comparisionAnswer == 2) {

				//回答修正を促す
				cout << "回答が正解より小さいです。\n";
			}

			//回答が正解だった場合
			else {

				//正解したことを告知し、回答回数を表示
				cout << "正解です。" << trialNumber << "回目で正解しました。\n";

				//回答ループを抜ける
				break;
			}
		}
		//ユーザーが続行の意志を示した場合、ゲームを再試行
	} while (confirmRetry());
}