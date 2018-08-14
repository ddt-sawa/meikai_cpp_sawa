/*
* 9-6.cpp
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
* 回答値入力を促すメッセージを表示(内部結合)
* @author Sawa
* @since 7.24
*/
static void promptAnswer()
{
	//回答値の入力を促す
	cout << "0～" << maximumNumber << "の数 : ";
}


/**
* 回答入力の手続きを行い、回答を返却する
* @return userAnswer 回答
* @author Sawa
* @since 7.24
*/
int inputAnswer()
{
	//回答
	int userAnswer = 0;

	//回答を妥当なものに制限するループ
	do {

		//回答の入力を促す
		promptAnswer();

		//回答入力
		cin >> userAnswer;

		//回答が0-上限値(999)の場合ループを抜ける
	} while (userAnswer < 0 || userAnswer > maximumNumber);

	//回答を返却
	return userAnswer;
}

/**
* ゲーム続行の是非を確認する
* @return inputUserIntention 続行の是非
* @author Sawa
* @since 7.24
*/
bool confirmRetry()
{
	//続行の意思確認
	int inputUserIntention = 0;

	//意思入力を促す
	cout << "もう一度しますか？ <Yes・・・1 / No・・・0>\n";

	//意思入力
	cin >> inputUserIntention;

	//入力値をbool型変数に変換して返却
	return static_cast<bool>(inputUserIntention);
}
