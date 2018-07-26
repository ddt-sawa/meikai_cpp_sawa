/*
 * 6-12.cpp
 *
 *  Created on: 2018/06/23
 *      Author: syuka
 */

 /*演習6-12 b以上a以下の全整数の和を求める関数sumを作成せよ。なお、
  * bに対する実引数が省略されて呼び出された場合は、bを1とみなして合計を求めること。
  */

#include<iostream>

using namespace std;


/**
* 下限値以上、上限値以下の全整数の総和を返却する。下限値が指定されなかった場合、下限値は1とする
* @param upperLimit 上限値、lowerLimit 下限値
* @return entireSum 総和
* @author Sawa
* @since 7.17
*/
int returnSum(int upperLimit, int lowerLimit = 1)
{
	//第二引数以上第一引数以下の全整数の総和を0で初期化
	int entireSum = 0;

	//総和を計算するループ
	for (int counterVariable = lowerLimit; counterVariable <= upperLimit; ++counterVariable) {

		//総和に整数値を代入
		entireSum += counterVariable;
	}

	//総和を返却
	return entireSum;
}

int main()
{
	//表示する値の概要を告知
	cout << "b以上a以下の全整数の総和を求めます。\n";

	//上限値
	int upperLimit;

	//上限値の入力を促す
	cout << "aの値 : ";

	//上限値の入力
	cin >> upperLimit;

	//下限値
	int lowerLimit;

	//下限値の入力を促す
	cout << "bの値 : ";

	//下限値の入力
	cin >> lowerLimit;

	//関数へ引数を渡し、返却値となる総和を表示
	cout << "合計値は" << returnSum(upperLimit, lowerLimit) << "です。\n";

	//引数が1つの場合でも下限値==1として動作することを確認
	cout << "合計値は" << returnSum(upperLimit) << "です。\n";
}
