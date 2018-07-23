/*
* 8-8.cpp
*
*  Created on: 2018/06/26
*      Author: ddt
*/

/*演習8-8 文字列s内の文字を末尾から先頭へと逆順に表示する関数put_revを作成せよ。
* void put_rev(const char* s);
* たとえば、文字列sが"abc"であれば、「cba」と表示する。
*/


#include<iostream>

using namespace std;

//配列の容量を多めに設定
const int elementCapacity = 100;

/**
* 受け取った文字列の配列を逆順に表示
* @param characterArray 文字列の配列
* @author Sawa
* @since 7.23
*/
void printReverseArray(const char* characterArray)
{
	//文字列の要素数を初期化
	int elementNumber = 0;

	//文字列の要素数を取得するためのループ
	for (int firstArray = 0; characterArray[firstArray]; ++firstArray) {

		//配列中の文字数ぶん要素数をインクリメント
		++elementNumber;
	}

	//表示する値の説明
	cout << "反転した文字列は、\n";

	//取得した要素数に従い、配列を逆順に走査表示するループ
	for (; elementNumber > 0; --elementNumber) {

		//要素を表示
		cout << characterArray[elementNumber - 1];
	}
	//語尾
	cout << "です。\n";
}
int main()
{
	//文字列の配列を初期化
	char characterArray[elementCapacity] = { 0 };

	//文字列の入力を促す
	cout << "反転表示したい文字列を入力してください。\n";

	//文字列の入力
	cin >> characterArray;

	//反転した文字列を表示
	printReverseArray(characterArray);
}
