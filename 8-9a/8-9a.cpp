 /*演習8-9 p308で学習したstrcpy関数及びstrncpy関数と同等な関数を作成せよ。
* a.strcpy関数の作成
*/

#include<iostream>

using namespace std;

/**
* 文字列2を、文字列1にコピーする
* @param firstString 文字列1, secondString 文字列2
* @return firstString コピーを終えた文字列1
* @author Sawa
* @since 7.23
*/
char* copyString(char* firstString, const char* secondString)
{
	//カウンタ変数
	int firstCounter = 0;

	//配列の文字を走査コピーするループ
	for (; secondString[firstCounter]; firstCounter++) {

		//文字をコピー
		firstString[firstCounter] = secondString[firstCounter];
	}
	//ナル文字を代入
	firstString[firstCounter] = secondString[firstCounter];

	//文字列1の先頭要素へのポインタを返却
	return firstString;
}

int main()
{
	//文字列1
	char firstString[] = "ABCD";

	//コピー元の文字列配列を初期化
	char secondString[] = "EFG";

	//コピーした文字列を表示
	cout << "コピーした文字列は " << copyString(firstString, secondString) << " です。\n";
}
