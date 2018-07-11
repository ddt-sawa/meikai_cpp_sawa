/*
 * 6-15.cpp
 *
 *  Created on: 2018/06/23
 *      Author: syuka
 */

/*演習6-15 時刻ｘ時ｙ分のdy分後の時刻を求める関数spendを作成せよ。
 * なお時刻の表現は24時間制であるとする。例えば、23時59分の2分後の
 * 時刻は0時1分となる。
 *
 * void spend(int& x, int& y, int& z)
 */


#include<iostream>

using namespace std;

void spendTime(int& inputHour, int& inputMinute, int plusMinute)
{
	//分数から時数の繰り上げが何回起こったかを保存する変数
	int advanceHour = 0;

	//入力値ぶん分数を進める
	inputMinute += plusMinute;

	//分数が60以上になった場合
	if (inputMinute >= 60){

		//分数から時数へ繰り上げるべき回数
		advanceHour = inputMinute / 60;

		//繰り上げた回数を時数に加算代入
		inputHour += advanceHour;

		//分数を60で割った剰余を時刻表現とする
		inputMinute %= 60;

	}

	//時数が24を超えた場合
	if (inputHour >= 24) {
		//合計時間を24で割った剰余を時刻表現とする
		inputHour %= 24;
	}
	cout <<"時刻は" << inputHour  << "時"  << inputMinute << "分です。\n";
}

int main()
{
	//時数、分数、進めたい分数の宣言
	int inputHour, inputMinute, plusMinute;

	//24時間制の時刻表現を入力させるループ文
	do {

		//時刻の入力を促す
		cout << "時刻を入力してください。\n";

		//時数の入力を促す
		cout << "何時ですか : ";

		//時数入力
		cin >> inputHour;

		//分数の入力を促す
		cout << "何分ですか : ";

		//分数入力
		cin >> inputMinute;

		//進めたい分数の入力を促す
		cout << "何分時間を進めますか？";

		//進めたい分数を入力
		cin >> plusMinute;

		//入力値が24時間制の時刻表現に適するまでループ
	}while((inputHour < 0 || inputHour > 24) || (inputMinute < 0 || inputMinute > 60 ) || plusMinute < 0 );

	//進めた時刻を表示
	spendTime(inputHour, inputMinute, plusMinute);
}
