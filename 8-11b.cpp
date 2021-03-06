﻿/*演習8-11 p312で学習したstrcmp関数及びstrncmp関数と同等な関数を作成せよ。
* b.strncmp関数の作成
*/

#include<iostream>

using namespace std;

/**
* 文字列1と文字列2の文字を走査比較し、文字の大きさに差が生じたor比較要素がなくなったor制限文字数に達した場合、最後に比較した文字の大きさの差を返却する
* @param firstArray 文字列1, secondArray 文字列2, liminNumber 制限文字数
* @return returnDifference 文字の大きさの差
* @author Sawa
* @since 7.23
*/
int compareString(const char* firstArray, const char* secondArray, size_t limitNumber)
{
	//文字の大きさの差
	int returnDifference = 0;

	//両文字列の大小関係を比較するループ(どちらかの文字列がナル文字に入るor差が生じるor制限文字に達するまでループ)
	for (int firstCounter = 0; firstArray[firstCounter] && secondArray[firstCounter] && !returnDifference && firstCounter <limitNumber; ++firstCounter) {

		//unsigned char型の値として文字を比較
		returnDifference = static_cast<unsigned char>(firstArray[firstCounter]) - static_cast<unsigned char>(secondArray[firstCounter]);
	}
	//文字の大きさの差を返却
	return returnDifference;
}

int main()
{
	//文字列1
	char firstString[] = "ABCD";

	//文字列2
	char secondString[] = "EFG";

	//制限文字数
	int limitNumber;

	//制限文字数の入力
	cin >> limitNumber;

	//文字列を比較した値を返却
	cout << compareString(firstString, secondString, limitNumber);
}
