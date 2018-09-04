 /*演習8-9 p308で学習したstrcpy関数及びstrncpy関数と同等な関数を作成せよ。
 * b.strncpy関数の作成
 */

#include<iostream>

using namespace std;

/**
* 第二引数の文字列を、第一引数に指定した文字数までコピーする。コピー元の文字列が指定文字数より短い場合、残りをナル文字で埋め尽くす
* @param firstString コピー先の文字列, secondString コピー元の文字列, limitNumber 指定文字数
* @return firstString コピーを終えた第一引数
* @author Sawa
* @since 7.23
*/
char* copyString(char* firstString, const char* secondString, size_t limitNumber)
{
	//コピー元文字列の長さ
	int secondStringLength = 0;

	//コピー元文字列の長さを取得
	for (; secondString[secondStringLength]; ++secondStringLength);

	//コピー元文字列の長さが指定文字数以上の場合
	if (secondStringLength >= limitNumber) {

		//指定文字数までをコピーするループ
		for (int firstCounter = 0; firstCounter < limitNumber; ++firstCounter) {

			//コピー先の要素にコピー元の要素を代入
			firstString[firstCounter] = secondString[firstCounter];
		}
	}
	//コピー元文字列の長さが指定文字未満の場合
	else {

		//コピー元文字列の文字数までをコピーするループ
		for (int firstCounter = 0; firstCounter <= secondStringLength; ++firstCounter) {

			//コピー先の要素にコピー元の要素を代入
			firstString[firstCounter] = secondString[firstCounter];
		}
		//指定文字に達するまで末尾にナル文字を埋め込むループ
		for (int firstCounter = 1; firstCounter <= limitNumber - secondStringLength; ++firstCounter) {

			//コピー元の文字数以降の要素にナル文字を代入
			firstString[firstCounter + secondStringLength] = '\0';
		}
	}
	//コピー先の文字配列の先頭要素へのポインタを返却
	return firstString;
}

int main()
{
	//文字列1
	char firstString[] = "ABCD";

	//コピー元の文字列配列を初期化
	char secondString[] = "EFG";

	//指定文字数
	int limitNumber = 0;

	//指定文字数入力
	cin >> limitNumber;

	//コピーした文字列を表示
	cout << "コピーした文字列は " << copyString(firstString, secondString, limitNumber) << " です。\n";
}




