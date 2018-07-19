/*
 * 5-3.cc
 *
 *  Created on: 2018/06/21
 *      Author: syuka
 */

/*演習5-3 要素型がint型で要素数が6の配列の全要素を1-10の乱数で埋め尽くす
 * （1以上10以下のランダムな値を代入する）プログラムを作成せよ
 */

//srand関数のため<ctime><cstdlib>をインクルード
#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	// 配列の要素数
	const int arrayNumber = 6;

	//配列宣言
	int intArray[arrayNumber] = {0};

	//乱数テーブルの準備
	srand(time(NULL));

	//1から10の乱数をランダムに配列へ代入するためのループ文
	for (int counterVariable = 0; counterVariable < arrayNumber; ++counterVariable){

		//乱数を配列に走査代入
		intArray[counterVariable] = rand() % 10 + 1;

		//配列を走査表示
		cout << intArray[counterVariable] << '\n';
	}
}
