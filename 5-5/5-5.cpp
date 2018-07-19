/*
 * 5-5.cc
 *
 *  Created on: 2018/06/21
 *      Author: syuka
 */

/*演習5-5 異なる要素が同じ値とならないように、演習5-3のプログラムを
 * 改変したプログラムを作成せよ。たとえば、{1, 3, 5, 6, 1, 2}とならないようにすること。
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
	int intArray[arrayNumber] = {0};

	//乱数テーブルの準備
	srand(time(NULL));

	//配列に値を走査代入するループ文
	for (int firstCounter = 0; firstCounter < arrayNumber; ++firstCounter){

		//前の要素の値と被っていないことを確かめるint型変数を初期化
		int checkCounter = 0;

		//配列に入れる値が被らないようにするループ文
		do{
			//配列に乱数を代入
			intArray[firstCounter] = rand() % 10 + 1;

			//配列の添え字が[0]の場合
			if (firstCounter == 0) {

				//前の数値を参照しないのでループを抜け、次の要素に進む
				break;
			}

			//現在代入中の要素より前の要素の値をチェックするループ文
			for (int secondCounter = 0; secondCounter < firstCounter; ++secondCounter){

				//同じ値を発見した場合
				if (intArray[firstCounter] == intArray[secondCounter]){

					//チェックカウンタを0に戻す
					checkCounter = 0;

					//乱数代入を再試行
					break;
				}

				//同じ値ではない場合
				else {

					//チェックカウンタを1にする
					checkCounter = 1;
				}
			}

			//全走査を終了したうえでチェックカウンタが 1(以前の要素が全て違う値)であればwhileループを抜け、次の要素に進む
		} while (checkCounter == 0);


		//配列を走査表示
		cout << intArray[firstCounter] << '\n';
	}
}
