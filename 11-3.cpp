/*
* 11-3.cpp
*
*  Created on: 2018/06/30
*      Author: ddt
*/

/*演習11-3 演習11-1(p.389)で作成した時刻クラスに挿入子と抽出子を追加せよ。*/

#include<iostream>
//ユーザ定義型のヘッダをインクルード
#include "11-3.h"

using namespace std;

int main()
{
	//文字列表現での時間
	string stringDate = "16:30.45";

	//文字列ストリームを宣言し時間を接続先とする
	istringstream inputStringDate(stringDate);

	int inputHour;        //時
	int inputMinute;      //分
	int inputSecond;      //秒
	char unusedCharacter; //除去すべき文字

	//文字列ストリームから除去すべき文字を除き、時分秒の整数値を抽出
	inputStringDate >> inputHour >> unusedCharacter >> inputMinute >> unusedCharacter >> inputSecond;

	//TimeClass型変数を初期化
	TimeClass userTime(inputHour, inputMinute, inputSecond);

	//時間を表示
	cout << userTime << "です。\n";
}

