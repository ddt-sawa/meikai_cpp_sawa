/*
 * 7-10.cpp
 *
 *  Created on: 2018/06/25
 *      Author: ddt
 */

/*演習7-10 n行5列のint型2次元配列aの各行の最大値を、要素数nの1次元配列mに格納する関数maxlineを作成せよ。
 * void maxline(int a[][5], int m[], int n)
 * たとえば、aに受け取った3行5列の構成要素が{{1,2,5,4,8}, {6,7,4,2,3}, {3,0,5,9,1}}であれば、
 * mに{8,7,9}を格納すること。
 */

#include<iostream>

using namespace std;

/**
* 多次元配列の各行における最大値を1次元配列の要素として格納する
* @param intArray[][5] 多次元配列, storeArray[] 1次元配列, arrayNumber 要素数
* @author Sawa
* @since 7.17
*/
void getMaxLine(int intArray[][5], int storeArray[], int arrayNumber)
{   
	//多次元配列における各行の最大値を1次元配列に格納するループ
	for (int firstCounter = 0; firstCounter < arrayNumber; ++firstCounter){

		//各行における最大値を仮に先頭要素とする
		int maxLine = intArray[firstCounter][0];

		//各行における最大値をそれぞれ求めるループ
		for (int secondCounter = 0; secondCounter < 5; ++secondCounter){

			//現段階における仮最大値より大きい値が見つかった場合
			if (maxLine < intArray[firstCounter][secondCounter]) {

				//その値を仮最大値とする
				maxLine = intArray[firstCounter][secondCounter];
			}
		}
		//1次元配列に各行の最大値を格納する
		storeArray[firstCounter] = maxLine;
	}

}

int main()
{
    //多次元配列の行数及び1次元配列の要素数
	const int arraySize = 3;

	//多次元配列
	int intArray[arraySize][5]; 
	
	//多次元配列の各行における最大値を格納する1次元配列
	int storeArray[arraySize];

	//多次元配列の行を参照するループ
	for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter){

		//多次元配列の列を参照するループ
		for (int secondCounter = 0; secondCounter < 5; ++secondCounter){

			//要素入力を促す
		cout << "a[" << firstCounter << "][" << secondCounter << "] : ";

		//要素を入力
		cin >> intArray[firstCounter][secondCounter];
		}
	}
    //getMaxLine関数を呼び出し、多次元配列の各行における最大値を1次元配列に格納する
	getMaxLine(intArray, storeArray, arraySize);

	//最大値を格納した1次元配列の要素を走査表示するループ
	for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter) {

		// 要素を表示
		cout << "m[" << firstCounter << "] = " << storeArray[firstCounter] << '\n';
	}
}
