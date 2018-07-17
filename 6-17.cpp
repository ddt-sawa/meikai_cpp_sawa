/*
 * 6-17.cpp
 *
 *  Created on: 2018/06/24
 *      Author: syuka
 */


/*演習6-17 呼び出された回数を表示する関数put_coutnを作成せよ。
 * void put_count();
 */
#include<iostream>

using namespace std;

//静的記憶域期間を持たせるため、関数が呼び出された回数を関数外で宣言
int putCountCounter = 0;

/**
*自身が呼び出された回数を表示する
* @author Sawa
* @since 7.17
*/
void putCount()
{
	//自身が呼び出された回数を表示
	cout << "putCountが呼び出されたのは " << ++putCountCounter << "回目です。\n";
}

int main()
{

	//関数を呼び出す回数
	int integerNumber;

	//関数を呼び出す回数の入力を促す
	cout << "関数を呼び出す回数 : ";

	//入力
	cin >> integerNumber;

	//関数を入力された回数ぶん呼び出すループ
	for(int firstCounter = 0; firstCounter < integerNumber; ++firstCounter) {
		//関数呼び出し
		putCount();
	}
}
