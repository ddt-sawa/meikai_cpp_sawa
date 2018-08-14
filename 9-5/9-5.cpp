/*
 * 9-5.cpp
 *
 *  Created on: 2018/06/27
 *      Author: ddt
 */

 /*演習9-5 配列の全要素の最小値を求める関数テンプレートを作成せよ。
  * template <class Type> Type minof(const Type x[], int n)
  * なお、最も小さい文字列を求められるようにするために、
  * const char* 型に明示的に特殊化したものをあわせて作成すること。
  */

  //strcmp関数を使うので、<cstring>ヘッダをインクルード
#include<cstring>
#include<iostream>

using namespace std;

/**
* 配列の全要素における最小値を返却する(テンプレート関数)
* @param argumentArray 配列, argumentNumber 配列要素数
* @return DataClass型 minimumValue 最小値
* @author Sawa
* @since 7.24
*/
template <class DataClass> DataClass returnMinimumValue(DataClass argumentArray[], int argumentNumber)
{
	//配列内先頭要素の値を仮最小値と設定する
	DataClass minimumValue = argumentArray[0];

	//配列中の要素を走査し、最小値を調べるためのループ文
	for (int firstCounter = 1; firstCounter < argumentNumber; ++firstCounter) {

		//現在検討中の要素が仮最小値よりも小さかった場合
		if (argumentArray[firstCounter] < minimumValue) {

			//検討中の要素を仮最小値に設定
			minimumValue = argumentArray[firstCounter];
		}
	}
	//最後まで残った仮最小値を最小値とし、返却する
	return minimumValue;
}

/**
* const char型配列の全要素における最小値を返却する(テンプレート関数)
* @param argumentArray 配列, argumentNumber 配列要素数
* @return minimumValue 最小値
* @author Sawa
* @since 7.24
*/
template <> const char* returnMinimumValue<const char*>(const char* argumentArray[], int argumentNumber)
{
	//配列内先頭要素の文字列を仮最小値と設定する
	const char* minimumValue = argumentArray[0];

	//配列中の要素を走査し、最小値を調べるためのループ文
	for (int firstCounter = 1; firstCounter < argumentNumber; ++firstCounter) {

		//現在検討中の要素が仮最小値よりも小さかった場合
		if (strcmp(argumentArray[firstCounter], minimumValue) < 0) {

			//検討中の要素を仮最小値に設定
			minimumValue = argumentArray[firstCounter];
		}
	}
	//最後まで残った仮最小値を最小値とし、返却する
	return minimumValue;
}

int main()
{
	//配列の要素数
	const int arrayNumber = 3;

	//int型配列の初期化
	int intArray[arrayNumber] = { 3, 2, 4 };

	//double型配列の初期化
	double doubleArray[arrayNumber] = { 2.5, 3, 4.9 };

	//const char*型配列の初期化
	const char* characterArray[arrayNumber] = { "ABC", "AAB", "AAA" };

	//int型配列の最小値を表示(3)
	cout << returnMinimumValue(intArray, arrayNumber) << '\n';

	//double型配列の最小値を表示(2.5)
	cout << returnMinimumValue(doubleArray, arrayNumber) << '\n';

	//const char*型配列の最小値を表示(AAA)
	cout << returnMinimumValue<const char*>(characterArray, arrayNumber) << '\n';
}
