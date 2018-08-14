/*
* 9-9.cpp
*
*  Created on: 2018/06/27
*      Author: ddt
*/

/*演習9-9 演習9-6(p.337)中の内部結合をもつ識別子を、名前なし名前空間に属するように変更したプログラムを作成せよ。
*/

//srand関数を使用するため、<ctime><cstdlib>ヘッダをインクルード
#include<ctime>
#include<cstdlib>
#include "9-9_Header.h"

using namespace std;

//正解の値を初期化
int randomNumber = 0;

//乱数の上限値を初期化
const int maximumNumber = 999;

//制限回数を10回に設定
const int limitNumber = 10;


/**
* srand関数を呼び出し、乱数テーブルを用意
* @author Sawa
* @since 7.24
*/
void initializeRandomNumber()
{
	//乱数テーブルを用意
	srand(time(NULL));
}


/**
* 回答した値と正解の関係性を返却
* @param userAnswer 回答した値
* @return 整数値 0(回答==正解), 1（回答>正解）, 2(回答<正解)
* @author Sawa
* @since 7.24
*/
int judgeAnswer(int userAnswer)
{
	//回答と正解の関係性によって表示する文章を変えるべく、それぞれの条件で異なる整数値を返却する

	//回答と正解が等しい場合
	if (userAnswer == randomNumber) {

		//0を返却
		return 0;
	}

	//回答が正解より大きい場合
	else if (userAnswer > randomNumber) {

		//1を返却
		return 1;
	}

	//回答が正解より小さい場合
	else {

		//2を返却
		return 2;
	}
}
