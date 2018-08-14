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

//数当てゲームの正解となる乱数
extern int randomNumber;

//乱数の上限値
extern const int maximumNumber;

//制限回数
extern const int limitNumber;

//srand関数を呼び出し、乱数テーブルを用意
void initializeRandomNumber();

//数当てゲームの正解となる乱数を生成
void generateRandomNumber();

//回答した値と正解の関係性を返却
int judgeAnswer(int);

//回答入力の手続きを行い、回答を返却
int inputAnswer();

//ゲーム続行の是非を確認
bool confirmRetry();