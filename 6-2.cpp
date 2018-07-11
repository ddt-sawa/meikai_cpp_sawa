/*
 * 6-2.cpp
 *
 *  Created on: 2018/06/22
 *      Author: syuka
 */

/*演習6-2 三つのint型引数a,b,cの最小値を求める関数minを作成せよ。
int min(int a, int b, int c){************}
*/

#include<iostream>

using namespace std;


//関数名         : returnMinimum
//仕様           : 受け取った3整数の最小値を返却する
//引数           : 3つのint型変数
//返り値         : int型変数minimumValue(最小値)
//作成者         : sawa
//日付           : 7/11
int returnMinimum(int firstInteger, int secondInteger, int thirdInteger)
{
	//返却すべき最小値を、最初の引数に仮設定
	int minimumValue = firstInteger;

	//仮最小値より第二引数の方が小さかった場合
	if (secondInteger < minimumValue) {

		//第二引数を仮最小値とする
		minimumValue = secondInteger;
	}

	//仮最小値より第三引数の方が小さかった場合
	if (thirdInteger < minimumValue) {

		//第三引数を最小値とする
		minimumValue = thirdInteger;
	}

	//ここまで残った仮最小値を最小値として返却する
	return minimumValue;
}

int main()
{
	//returnMinimum関数に渡すint型変数を３つ宣言
	int firstInput, secondInput, thirdInput;

	//整数入力を促す
	cout << "3つの整数の最小値を表示します。\n" << "整数値 :";

	//整数入力
	cin >> firstInput >> secondInput >> thirdInput;

	//関数に3整数を送り、返却された最小値を表示
	cout << "最小値は" << returnMinimum(firstInput, secondInput, thirdInput) << "です。\n";
}
