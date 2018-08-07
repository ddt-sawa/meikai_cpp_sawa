/*
 * 8-6.cpp
 *
 *  Created on: 2018/06/26
 *      Author: ddt
 */

 /*演習8-6 文字列sに含まれる文字cの個数を返す関数strch_cntを作成せよ。
  * int strch_cnt(const char* s, char c);
  * たとえば、文字列sが"abcabca"で文字cが'a'であれば、返却するのは3である。
  * 文字cが含まれない場合は0を返すこと。
  */

#include<iostream>

using namespace std;

/**
* 文字列の配列に含まれる指定文字の個数を返却する
* @param characterArray 文字列の配列, keyCharacter 指定文字
* @return characterNumber 個数
* @author Sawa
* @since 7.23
*/
int returnCharacterNumber(const char* characterArray, char keyCharacter)
{
	//文字列に含まれる指定文字の個数
	int characterNumber = 0;

	//文字列の配列を走査するためのループ
	for (int firstCounter = 0; characterArray[firstCounter]; ++firstCounter) {

		//配列中に指定文字を見つけた場合
		if (characterArray[firstCounter] == keyCharacter)

			//指定文字の個数をインクリメント
			++characterNumber;
	}

	//指定文字の個数を返却
	return characterNumber;
}

int main()
{
	//配列の要素数
	const int arraySize = 50;

	//文字列の配列を初期化
	char characterArray[arraySize] = {0}; 
	
	//文字列の入力を促す
	cout << "文字列を入力してください。\n"; 
	
	//入力
	cin >> characterArray;

	//配列中に含まれている個数を調べたい指定文字
	char keyCharacter;

	//指定文字の入力を促す
	cout << "文字列中の個数を調べたい文字を入力してください。\n"; 
	
	//入力
	cin >> keyCharacter;

	//文字列中の指定文字の個数を表示
	cout << "文字列中に" << keyCharacter << "は" << returnCharacterNumber(characterArray, keyCharacter) << "個あります。\n";
}
