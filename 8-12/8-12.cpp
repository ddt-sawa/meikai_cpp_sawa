/*
 * 8-12.cpp
 *
 *  Created on: 2018/06/26
 *      Author: ddt
 */

 /*演習8-12 文字列sに含まれる最も先頭に位置する文字cの添字を返す関数strchr_idxを作成せよ。
  * int strchr_idx(const char* s, char c)
  * 文字列sが"ABSZXYX"で文字cがXであれば、返却するのは4である。なお、文字cが文字列sに
  * 含まれない場合は-1を返却すること。
  *  */

#include<iostream>

using namespace std;

/**
* 配列の要素に指定文字を発見した場合、最も先頭に位置する要素の添字を返却する。指定文字が見つからなかった場合-1を返却する
* @param characterArray 文字列の配列, keyCharacter 指定文字
* @return returnInteger 配列の添字 (指定文字が見つからない場合-1)
* @author Sawa
* @since 7.23
*/
int checkCharacter(const char* characterArray, char keyCharacter)
{
	//返却値
	int returnInteger = -1;

	//配列の要素に指定文字が含まれているかどうかを調べるループ
	for (int firstCounter = 0; characterArray[firstCounter]; ++firstCounter) {

		//指定文字と同じ値を検出した場合
		if (characterArray[firstCounter] == keyCharacter) {

			//添字を返却値に代入
			returnInteger = firstCounter;

			//返却
			return returnInteger;
		}
	}
	//指定文字が見つからなかった場合-1を返却
	return returnInteger;
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
	cout << "文字列の配列の中に指定文字が含まれていた場合、指定文字と同じ値を持つ要素の中で、最も先頭にある要素の添字を表示します。\n";

	//指定文字
	char keyCharacter;

	//指定文字の入力を促す
	cout << "指定文字を入力してください。";

	//入力
	cin >> keyCharacter;

	//添字を表示
	cout << checkCharacter(characterArray, keyCharacter) << "です。\n";
}
