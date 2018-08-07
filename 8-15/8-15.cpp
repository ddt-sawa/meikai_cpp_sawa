/*
 * 8-15.cpp
 *
 *  Created on: 2018/06/26
 *      Author: ddt
 */

 /*演習8-15 文字列s1の中に含まれる最も先頭に位置する文字列s2の先頭文字へのポインタを返す関数
  * str_matchを作成せよ。
  * char* str_match(char* s1, char* s2)
  * たとえば、受け取った文字列s1が"abcabcdef"でs2が"abcd"であれば、
  * 返却するのは&s1[3]の値である。文字列s2がs1に含まれない場合はNULLを返却すること。
  */

  //strlen関数を使うため、cstringをインクルード
#include<cstring>
#include<iostream>

using namespace std;

//文字列が指定文字列と等しいことを表すチェッカ(0=等しくない, 1=等しい)
int clearCounter = 0;

/**
* 文字列内に指定文字列を発見した場合、最も先頭に位置する文字列の先頭文字へのポインタを返却する。指定文字が見つからなかった場合NULLポインタを返却する
* @param sourceArray 探索する文字列, keyArray 指定文字列
* @return  char*型の値 文字列の先頭要素へのポインタ (指定文字が見つからない場合NULLポインタ)
* @author Sawa
* @since 7.23
*/
char* searchString(char* sourceArray, char* keyArray)
{
	//返却値
	char* returnPointer = nullptr;

	//指定文字列の長さ
	int keyArrayLength = strlen(keyArray);

	//文字配列の中に指定文字列があるかどうかを探索するループ
	for (int firstCounter = 0; sourceArray[firstCounter]; ++firstCounter) {

		//走査中、指定文字列の先頭文字を検出した場合
		if (sourceArray[firstCounter] == keyArray[0]) {

			//現在走査中の文字列が指定文字と等しいことを記録
			clearCounter = 1;

			//後の文字列が一致しているかを確認するループ
			for (int secondCounter = 0; secondCounter < keyArrayLength; ++secondCounter) {

				//違う文字を検出した場合
				if (sourceArray[firstCounter + secondCounter] != keyArray[secondCounter]) {

					//走査中の文字列が指定文字列と等しくないことを記録
					clearCounter = 0;

					//次の要素から走査を再開
					break;
				}
			}
		}
		//文字列内に指定文字列が完全に含まれていた場合
		if (clearCounter == 1) {

			//先頭文字へのポインタを返却する
			return &sourceArray[firstCounter];
		}
	}
	//文字列中に指定文字列が検出されなかった場合、NULLポインタを返却する
	return returnPointer;
}

int main()
{
	//文字列の容量
	const int arrayCapacity = 50;

	//文字列の初期化
	char sourceArray[arrayCapacity] = { 0 };

	//指定文字列の初期化
	char keyArray[arrayCapacity] = { 0 };

	//表示する値の説明
	cout << "文字列1の中に文字列2が含まれていた場合、最初に出てきた文字列2の先頭文字から文字列1を表示します。\n";

	//文字列の入力を促す
	cout << "文字列1を入力してください。\n";

	//文字列を入力
	cin >> sourceArray;

	//指定文字列の入力を促す
	cout << "文字列2を入力してください。\n";

	//指定文字列の入力
	cin >> keyArray;

	//返却されたポインタから文字列を表示する
	cout << searchString(sourceArray, keyArray);
}
