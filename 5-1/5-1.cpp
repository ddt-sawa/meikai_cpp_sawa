/*
 * 5-1.cc
 *
 *  Created on: 2018/06/21
 *      Author: syuka
 */

/*演習5-1 要素型がint型で要素数が5の配列の要素に対して、先頭から
 * 順に5,4,3,2,1を代入して表示するプログラムを作成せよ。
 */

#include<iostream>

using namespace std;

int main()
{
	//int型配列の要素数
	const int arrayNumber = 5;

	//配列に先頭から5,4,3,2,1を代入
	int intArray[arrayNumber] = {5, 4, 3, 2, 1};

	//配列を走査表示するループ文
	for(int counterVariable = 0; counterVariable < arrayNumber; ++counterVariable) {

		//指定された配列の要素を表示する
		cout << intArray[counterVariable] << "\n";
	}
}
