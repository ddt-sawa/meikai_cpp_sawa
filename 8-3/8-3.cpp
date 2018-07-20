/*
 * 8-3.cpp
 *
 *  Created on: 2018/06/25
 *      Author: ddt
 */

/*演習8-3 文字列中の大文字を小文字に変換した上で表示する関数put_lowerを作成せよ。
 * void put_ lower(const char s[]);
 */

//tolower関数を使うため、<cctype>ヘッダをインクルード
#include<cctype>
#include<iostream>

using namespace std;

/**
* 文字列中の大文字を子文字に変換する
* @param characterArray 文字列
* @author Sawa
* @since 7.20
*/
void putLower(const char characterArray[])
{
	//受け取った文字列中の大文字を小文字に変換するループ
	for (int firstCounter = 0; characterArray[firstCounter]; firstCounter++) {
		//要素の大文字を小文字に変換
		cout << static_cast<char>(tolower(characterArray[firstCounter]));
	}
}

int main()
{
	//文字列配列を初期化
	char characterArray[36] = { 0 };

	//大文字を含んだ文字列の入力を促す
	cout << "文字列中の大文字を小文字にして表示します。 　文字列 : ";

	//入力
	cin >> characterArray;

	//配列中の大文字を小文字に変換して表示
	putLower(characterArray);
}

