/*
 * 5-7.cc
 *
 *  Created on: 2018/06/21
 *      Author: syuka
 */

/*演習5-7 前問を書き換えて、縦方向の棒グラフによって値を表示するプログラムを
 * 作成せよ。添え字を10で割った剰余を最下段に表示すること。
 */
#include<iomanip>
#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	//配列の要素数
	const int arrayNumber = 15;

	//配列宣言
	int intArray[arrayNumber];

	//乱数テーブルの準備
	srand(time(NULL));

	//配列に表示する記号数を走査代入するためのループ文
	for(int firstCounter = 0; firstCounter < arrayNumber; firstCounter++){

		//配列に記号数を走査代入する
		intArray[firstCounter] = rand() % 11;
	}

	//配列の値が1-10以上かどうかを調べるループ分
	for (int firstCounter = 10; firstCounter > 0; firstCounter--) {

		//配列の要素を走査するループ文
		for (int secondCounter = 0; secondCounter < arrayNumber; secondCounter++) {

			//配列の要素が現在走査中の数字以上の場合
			if (firstCounter <= intArray[secondCounter]) {

				//記号を表示
				cout << " * ";
			}

			//未満の場合
			else {

				//空白文字を表示
				cout << "   ";
			}
		}
		//縦方向の棒グラフを作るため改行
	    cout << '\n';
	}

	//レイアウトを整える
	cout << "______________________________________________\n";

	//配列の添え字を10で割った剰余を表示するためのループ文
	for (int firstCounter = 0; firstCounter < arrayNumber; firstCounter++) {

	//添え字の剰余を表示
	cout << ' ' << firstCounter % 10 << ' ';
	}
}

