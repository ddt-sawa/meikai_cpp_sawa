/*
 * 8-2.cpp
 *
 *  Created on: 2018/06/25
 *      Author: ddt
 */

 /*演習8-2 以下のように初期化された文字列sを空文字列にするコードを示せ。
 char s[] = "ABC";
  */

#include<iostream>

using namespace std;

int main()
{
	//配列を初期化
	char characterArray[] = "ABC";

	//配列内を全てナル文字にするため、文字列が入っている要素にナル文字を代入するループ
	for (int firstCounter = 0; firstCounter < 3; ++firstCounter) {

		//ナル文字を代入
		characterArray[firstCounter] = '\0';
	}

	//全要素を表示して空文字列であることを確認するループ
	for (int firstCounter = 0; firstCounter < 4; firstCounter++) {

		//要素を表示（ナル文字なので表示されない）
		cout << "characterArray[" << firstCounter << "] = " << characterArray[firstCounter] << '\n';
	}
}

