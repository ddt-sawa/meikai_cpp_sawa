/*
 * 6-3.cpp
 *
 *  Created on: 2018/06/22
 *      Author: syuka
 */

/*演習6-3 三つのint型引数a,b,cの中央値を求める関数medを作成せよ。
 * int med(int a, int b, int c){*******}
 */

#include<iostream>

using namespace std;

//関数名         : returnMedian
//仕様           : 受け取った3整数の中央値を返却する
//引数           : 3つのint型変数
//返り値         : int型変数medianInteger(中央値)
//作成者         : sawa
//日付           : 7/11
int returnMedian(int firstInteger, int secondInteger, int thirdInteger)
{
	//返却値である中央値を仮に第一引数に設定
	int medianInteger = firstInteger;

	//第二引数が中央値の場合
	if ((secondInteger <= firstInteger && secondInteger >= thirdInteger) || (secondInteger <= thirdInteger && secondInteger >= firstInteger)) {

		//第二引数を仮中央値に設定
		medianInteger = secondInteger;

	}

	//第三引数が中央値の場合
	else if  ((thirdInteger <= firstInteger && thirdInteger >= secondInteger) || (thirdInteger <= secondInteger && thirdInteger >= firstInteger)) {

		//第三引数を仮中央値に設定
		medianInteger = thirdInteger;
	}

	//中央値を返却
	return medianInteger;
}

int main()
{
	//一つ目の整数を宣言
	int firstInteger;

	//入力を促す
	cout << "整数a : ";

	//入力
	cin >> firstInteger;

	//二つ目の整数を宣言
	int secondInteger;

	//入力を促す
	cout << "整数b : ";

	//入力
	cin >> secondInteger;

	//三つ目の整数を宣言
	int thirdInteger;

	//入力を促す
	cout << "整数c : ";

	//入力
	cin >> thirdInteger;

	//returnMedian関数に3整数の値を渡し、中央値を表示する
	cout << "中央値は" <<  returnMedian(firstInteger, secondInteger, thirdInteger) <<"です。\n";
}

