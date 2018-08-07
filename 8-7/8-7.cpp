/*
 * 8-7.cpp
 *
 *  Created on: 2018/06/26
 *      Author: ddt
 */

 /*演習8-7 文字列sに含まれる数字文字'0','1',・・・'9'の個数をカウントして、各文字の個数を
  * c[1],c[2],・・・c[9]に格納する関数count_digitsを作成せよ。
  * void count_digits(const char* s, int c[]);
  * たとえば、文字列sが"W140S500L88"であれば、c[0]に3を、c[1],c[4],c[5]に1を、c[8]に2を
  * 格納し、それ以外の要素には0を格納する。
  */


#include<iostream>

using namespace std;

/**
* 文字列の配列に含まれる数字文字の個数をカウントし、別の配列の同じ添字の要素に格納する
* @param characterArray 文字列の配列, storeArray 個数を格納する配列
* @author Sawa
* @since 7.23
*/
void countDigits(const char* characterArray, int storeArray[])
{
	//検出した数字文字を、別の配列の同じ添字の要素に格納するループ
	for (int firstCounter = 0; firstCounter < 10; ++firstCounter) {

		//0-9までの数字文字が文字列の配列に含まれているかを走査するループ
		for (int secondCounter = 0; characterArray[secondCounter]; ++secondCounter) {

			//文字列の配列に数字文字を検出した場合(char型の数値とint型の内部数値をあわせるため、数字文字'0'の値を引いている)
			if ((characterArray[secondCounter] - '0') == firstCounter) {

				//同じ添え字の要素をインクリメント
				++storeArray[firstCounter];
			}
		}
	}
}

int main()
{
	//配列の要素数
	const int arraySize = 100;

	//文字列の配列の初期化
	char characterArray[arraySize] = { 0 };

	//表示する値の説明を行い、文字列の入力を促す
	cout << "入力された文字列に含まれる数字文字の個数をカウントして、別の配列の同じ添字の要素として表示します。\n";

	//文字列を入力
	cin >> characterArray;

	//数字文字の個数を格納する配列の要素数
	const int storeArraySize = 10;

	//数字文字の個数を格納する配列を初期化
	int storeArray[storeArraySize] = { 0 };

	//文字列の配列中における、数字文字の個数を格納
	countDigits(characterArray, storeArray);

	//数字文字の個数を表示するループ
	for (int firstCounter = 0; firstCounter < storeArraySize; ++firstCounter) {

		//個数を配列の要素として表示
		cout << "c[" << firstCounter << "] = " << storeArray[firstCounter] << '\n';
	}
}
