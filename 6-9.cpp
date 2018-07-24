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

/**
*下限値以上、上限値未満の乱数を返却する
* @param lowerLimit 下限値, upperLimit 上限値
* @return randomNumber 乱数
* @author Sawa
* @since 7.17
*/
int returnRandom(int lowerLimit, int upperLimit)
{

	//下限値が上限値以上の場合
	if (lowerLimit >= upperLimit) {

		//下限値を返却
		return lowerLimit;
	}

	//乱数テーブルを準備
	srand(time(NULL));

	//最初にfor文の条件を満たすため、返却値を下限値より小さい値で初期化しておく
	int randomNumber = lowerLimit - 1;

	//下限値以上上限値未満の乱数を生成するまでループ
	for (; (randomNumber < lowerLimit || randomNumber >= upperLimit);) {

		//返却値に乱数を代入
		randomNumber = rand();
	}

	//下限値以上上限値未満の乱数を返却
	return randomNumber;
}


int main()
{

	//表示する値の概要を告知
	cout << "a以上b未満の乱数を表示します。a >= b の場合aの値を返します。\n";

	//下限値を宣言
	int lowerLimit;

	//下限値の入力を促す
	cout << "a : ";

	//下限値の入力
	cin >> lowerLimit;

	//上限値を宣言
	int upperLimit;

	//上限値の入力を促す
	cout << "b : ";

	//上限値の入力
	cin >> upperLimit;

	//returnRandom関数に引数を渡し、返却値となる下限値以上上限値未満の乱数を表示
	cout << returnRandom(lowerLimit, upperLimit) << "です。\n";
}

