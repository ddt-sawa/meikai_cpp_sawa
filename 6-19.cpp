/*
 * 6-19.cpp
 *
 *  Created on: 2018/06/24
 *      Author: syuka
 */

/*演習6-19 List6-21の関数rを、不正な添え字に対して安全に動作するものに書き換えよ。
 *静的記憶域期間をもつint型の変数を関数内部で定義して、idxが0以上a_size未満でなければ、
 *その変数への参照を返却すること
 */

#include<iostream>

using namespace std;

//配列の要素数
const int arraySize = 5;

/**
*引数として受け取った配列の要素への参照を返却する
* @param arrayIndex 配列の要素
* @return intArray[arrayIndex] 配列の要素への参照, (safetyValue 添え字が不正だった場合)
* @author Sawa
* @since 7.17
*/
int& returnArray(int arrayIndex)
{
	//不正な添え字を受け取った場合に返却する数値
	static int safetyValue;

	//添え字が0未満もしくは要素数以上だった場合
	if (arrayIndex < 0 || arrayIndex > arraySize) {

		//仮の数値(0)を返す
		return safetyValue;
	}

	//配列の宣言
	static int intArray[arraySize];

	//添え字によって指定された配列の要素への参照を返却
	return intArray[arrayIndex];
}


int main()
{
	//関数内の配列要素に値を走査代入するループ
	for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter) {

		//添え字と同じ値を要素に代入
		returnArray(firstCounter) = firstCounter;
	}

	//関数内の配列要素を走査表示するループ
	for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter) {

		//関数を呼び出して、配列要素を表示
		cout << "returnArray(" << firstCounter << ") = " << returnArray(firstCounter) << '\n';
	}
}
