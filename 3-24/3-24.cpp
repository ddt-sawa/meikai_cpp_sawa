/*
 * 3-24.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */


/*演習3-24 合計だけでなく平均も求めるように、List3-17を書き換えたプログラムを作成せよ。
 * なお、読み込んだ負の数の個数は平均を求める際の分母から除外すること
 */
#include<iostream>

using namespace std;

int main()
{
	//加算したい正の整数の個数
	int integerNumber;

	//個数入力を促す
	cout << "正の整数を加算します。\n" << "何個加算しますか : ";

	//個数入力
	cin >> integerNumber;

	//合計値
	int entireSum = 0;

	//平均値
	double entireAverage = 0;

	////正の整数を規定回数入力し、その合計と平均値を計算するループ文
	for (int firstCounter = 1; firstCounter <= integerNumber; ++firstCounter){

		//加算したい正の整数
		int positiveInteger;

		//正の整数入力を促す
		cout << "正の整数 : ";

		//正の整数入力
		cin >> positiveInteger;

		//正でない数が入力された場合
		if (positiveInteger <= 0){

			//入力値を除外することを告知
			cout << "負及び0は加算しません。\n";

			//入力回数を1つ戻す
			--firstCounter;

			//合計値・平均値計算を飛ばす
			continue;
		}

		//合計に入力値を加算
		entireSum += positiveInteger;

		//平均を計算
		entireAverage = static_cast<double>(entireSum) / firstCounter;

	}

	//合計を表示
	cout << "合計は" << entireSum << "です。\n";

	//平均を表示
	cout << "平均は" << entireAverage << "です。\n";
}
