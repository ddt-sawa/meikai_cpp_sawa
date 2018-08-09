/*
 * 9-2.cpp
 *
 *  Created on: 2018/06/27
 *      Author: ddt
 */

 /*演習9-2 二つの整数値xとyの最大公約数をユークリッドの互除法を用いて求める関数
  * int gcd(int x, int y)を作成せよ。
  * ユークリッドの互除法とは : 二つの整数を長方形の辺の長さとする。短いほうの辺を一辺とする正方形で埋め尽くす。
  * 残った長方形に大して同じ操作を繰り返す。正方形のみで埋め尽くされたとき、その正方形の辺の長さが最大公約数である。
  */

#include<iostream>

using namespace std;

/**
* ユークリッドの互除法を用い、2引数の最大公約数を返却する
* @param firstInteger, secondInteger 整数
* @return greatestCommonFactor 最大公約数
* @author Sawa
* @since 7.24
*/
int returnGreatestCommonFactor(int firstInteger, int secondInteger)
{
	int greatestCommonFactor = 0;

	//常に第一引数が最大値になるよう並び替えを行う
	if (firstInteger < secondInteger) {

		//第一引数を一時保存
		int temporaryValue = firstInteger;

		//第二引数を第一引数に代入
		firstInteger = secondInteger;

		//一時保存していた第一引数を第二引数に代入
		secondInteger = temporaryValue;
	}

	//(第一引数 / 第二引数)で剰余が発生した場合
	if (firstInteger % secondInteger) {

		//再起的関数呼び出しを行い、剰余と第二引数の値を渡す
		return returnGreatestCommonFactor((firstInteger % secondInteger), secondInteger);
	}

	//剰余が発生しなかった場合
	else {

		//最大公約数を小さいほうの整数とする
		greatestCommonFactor = secondInteger;
		
		//最大公約数を返却
		return greatestCommonFactor;
	}
}

int main()
{
	//これから表示する値の説明
	cout << "二つの整数値xとyの最大公約数を求めます。\n";

	//整数xを初期化
	int firstInteger = 0;

	//整数xの入力を促す
	cout << "xの値 : ";

	//入力
	cin >> firstInteger;

	//整数yを初期化
	int secondInteger = 0;

	//整数yの入力を促す
	cout << "yの値 : ";

	//入力
	cin >> secondInteger;

	//ユークリッド互除法を用いて計算した、最大公約数を表示する
	cout << "最大公約数の値は" << returnGreatestCommonFactor(firstInteger, secondInteger) << "です。\n";
}
