/*
 * 5-4.cc
 *
 *  Created on: 2018/06/21
 *      Author: syuka
 */

/*演習5-4 連続する要素が同じ値とならないように、演習5-3のプログラムを
 * 改変したプログラムを作成せよ。たとえば、{1, 3, 5, 5, 3, 2}とならないようにすること。
 */

#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	// 配列の要素数
	const int arrayNumber = 6;

	//配列宣言
	int intArray[arrayNumber];

	//乱数テーブルの準備
	srand(time(NULL));

	//配列に値を走査代入するループ文
	for (int counterVariable = 0; counterVariable < arrayNumber; ++counterVariable){

		//配列に入れる値が連続しないようにするループ文
		do{
			//配列に乱数を代入
			intArray[counterVariable] = rand() % 10 + 1;

			//配列の添え字が[0]の場合
			if (counterVariable == 0) {
				//前の数値を参照しないので値を確定してループを抜ける
				break;
			}
			//前の要素と値が一致した場合、再試行
		} while (intArray[counterVariable] == intArray[counterVariable - 1]);

		//配列を走査表示
		cout << intArray[counterVariable] << '\n';
	}
}
