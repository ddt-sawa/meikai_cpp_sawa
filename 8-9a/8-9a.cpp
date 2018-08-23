 /*演習8-9 p308で学習したstrcpy関数及びstrncpy関数と同等な関数を作成せよ。
  * a.strcpy関数の作成
  */

#include<iostream>

using namespace std;

//配列の容量を多めに宣言
const int arrayCapacity = 30;

/**
* 第二引数の文字列を、第一引数にコピーする
* @param firstString コピー先の文字列, secondString コピー元の文字列
* @return firstString コピーを終えた第一引数
* @author Sawa
* @since 7.23
*/
char* copyString(char* firstString, const char* secondString)
{
	//コピー元文字列の長さ
	int secondStringLength = 0;

	//文字列の長さを取得するループ
	for (; secondString[secondStringLength]; ++secondStringLength);

	//配列の要素を走査コピーするループ
	for (int firstCounter = 0; firstCounter < secondStringLength; ++firstCounter) {

		//コピー先配列にコピー元配列の要素を代入
		firstString[firstCounter] = secondString[firstCounter];
	}
	//コピーした文字列の末尾にナル文字を代入
	firstString[secondStringLength] = secondString[secondStringLength];

	//コピー先配列の先頭要素へのポインタを返却
	return firstString;
}

int main()
{
	//文字列1
	char firstString[arrayCapacity];

	//文字列1の入力を促す
	cout << "文字列1を入力してください : ";

	//文字列1の入力
	cin >> firstString;

	//コピー元の文字列配列を初期化
	 char secondString[arrayCapacity];

	//文字列の入力を促す
	cout << "文字列2を入力してください : ";

	//文字列の入力
	cin >> secondString;

	//コピーした文字列を表示
	cout << "コピーした文字列は " << copyString(firstString, secondString) << " です。\n";
}

