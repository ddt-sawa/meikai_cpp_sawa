/*
 * 9-1.cpp
 *
 *  Created on: 2018/06/27
 *      Author: ddt
 */

//演習9-1 再帰呼び出しを用いずに、関数factorialを実現せよ。

#include<iostream>

using namespace std;


/**
* 1から引数までの階乗値を返却する。引数が負の整数値の場合、1を返却する
* @param factorialNumber 階乗計算に使用する引数
* @return factorialSum 階乗値
* @author Sawa
* @since 7.24
*/
int factorialFunction(int factorialNumber)
{
	//階乗値
	int factorialSum = 1;

	//引数が正の整数の場合
	if (factorialNumber > 0){
		
		//階乗値を計算するためのループ
		for (int firstCounter = 1; firstCounter <= factorialNumber; ++firstCounter) {

			//1から引数までの値を階乗値に乗算代入
			factorialSum *= firstCounter;
		}

		//階乗値を返却
	    return factorialSum;
	}

	//nがそれ以外の場合
	else {

		//1を返却
		return factorialSum;
	}
}

int main()
{
	//階乗計算の上限となる整数値
	int IntergerValue = 0;

	//階乗計算の上限値の入力を促す
	cout << "n!の値を求めます。 n : \n"; 
	
	//入力
	cin >>IntergerValue;

	//階乗値を表示
	cout<< "n!の値は" << factorialFunction(IntergerValue) << "です。\n";
}
