/*
 * 6-9.cpp
 *
 *  Created on: 2018/06/22
 *      Author: syuka
 */

/*演習6-9 a以上b未満の乱数を生成して、その値を返却する関数randomを作成せよ。
内部で乱数を生成する標準ライブラリであるrand関数(p.30)を呼び出すこと。
   int random(int a, int b);
なお、bの値がa未満である場合には、aの値をそのまま返却すること。
*/

#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

//関数名         : returnRandom
//仕様           : 第一引数以上、第二引数未満の乱数を返却する
//引数           : int型変数firstArgument(第一引数)、secondArgument(第二引数)
//返り値         : int型変数randomNumber(第一引数以上、第二引数未満の乱数)
//作成者         : sawa
//日付           : 7/11
int returnRandom(int firstArgument, int secondArgument)
{

	//第一引数が第二引数以上の場合
	if (firstArgument >= secondArgument) {

		//第一引数の値を返却
		return firstArgument;
	}

	//乱数テーブルを準備
	srand(time(NULL));

	//最初にfor文の条件を満たすため、返却値を第一引数より小さい値で初期化しておく
	int randomNumber = firstArgument - 1;

	//第一引数以上第二引数未満の乱数を生成するまでループ
	for (; (randomNumber < firstArgument || randomNumber > secondArgument);) {

		//返却値に乱数を代入
		randomNumber = rand();
	}

	//第一引数以上第二引数未満の乱数を返却
	return randomNumber;
}


int main()
{

	//表示する値の概要を告知
	cout << "a以上b未満の乱数を表示します。a >= b の場合aの値を返します。";

	//第一引数を宣言
	int firstArgument;

	//第一引数の入力を促す
	cout << "a : ";

	//第一引数の入力
	cin >> firstArgument;

	//第二引数を宣言
	int secondArgument;

	//第二引数の入力を促す
	cout << "b : ";

	//第二引数の入力
	cin >> secondArgument;

	//returnRandom関数に引数を渡し、返却値となる第一引数以上第二引数未満の乱数を表示
	cout << returnRandom(firstArgument, secondArgument) << "です。\n";
}

