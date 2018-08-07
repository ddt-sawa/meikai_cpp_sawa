/*
 * 8-13.cpp
 *
 *  Created on: 2018/06/26
 *      Author: ddt
 */

 /*演習8-13 文字列sに含まれる最も先頭に位置する文字cへのポインタを返す関数strchr_ptrを作成せよ。
  * char* strchr_ptr(const char* s, char c)
  * 文字列sが"ABSZXYX"で文字cが'X'であれば、返却するのは&s[4]である。
  * なお、文字cが文字列sに含まれない場合はNULLを返却すること。 */

#include<iostream>

using namespace std;

/**
* 配列の要素に指定文字を発見した場合、最も先頭に位置する要素へのポインタを返却する。指定文字が見つからなかった場合NULLポインタを返却する
* @param characterArray 文字列の配列, keyCharacter 指定文字
* @return returnPointer 配列の要素へのポインタ (指定文字が見つからない場合NULLポインタ)
* @author Sawa
* @since 7.23
*/
const char* checkCharacter(const char* characterArray, char keyCharacter)
{
	//返却値
	char *returnPointer = nullptr;

	//配列の要素に指定文字が含まれているかどうかを調べるループ
	for (int firstCounter = 0; characterArray[firstCounter]; ++firstCounter) {

		//指定文字と同じ値を検出した場合
		if (characterArray[firstCounter] == keyCharacter) {

			//その要素へのポインタを返却
			return &characterArray[firstCounter];
		}
	}
	//指定文字が見つからなかった場合NULLポインタを返却
	return returnPointer;
}

int main()
{
	//文字列の配列の要素数
	const int arrayCapacity = 50;

	//文字列の配列を初期化
	char characterArray[arrayCapacity] = { 0 };

	//文字列の入力を促す
	cout << "文字列を入力してください。\n";

	//入力
	cin >> characterArray;

	//表示する値の説明
	cout << "文字列の配列の中に指定文字が含まれていた場合、指定文字と同じ値を持つ要素の中で、最も先頭にある要素のポインタからの文字列を表示します。\n";

	//指定文字
	char keyCharacter;

	//指定文字の入力を促す
	cout << "指定文字を入力してください。";

	//入力
	cin >> keyCharacter;

	//返却されたポインタからの文字列を表示
	cout << checkCharacter(characterArray, keyCharacter);
}
