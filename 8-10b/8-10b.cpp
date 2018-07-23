/*
 * 8-10.cpp
 *
 *  Created on: 2018/06/26
 *      Author: ddt
 */

 /*演習8-10 p310で学習したstrcat関数及びstrncat関数と同等な関数を作成せよ。
  * b.strncat関数の作成
  */

#include<iostream>

using namespace std;

//配列の容量を多めに宣言
const int arrayCapacity = 100;

/**
* 第二引数が指す文字列を、指定された文字数+ナル文字ぶん第一引数の末尾に連結する。第二引数の文字数が制限文字未満の場合、ナル文字までを連結する
* @param firstArray 連結先の文字配列, secondArray 連結する文字配列, limitNumber 連結する文字制限
* @return firstArray 連結した配列の先頭要素へのポインタ
* @author Sawa
* @since 7.23
*/
char* connectCharacterArray(char* firstArray, const char* secondArray, int limitNumber)
{
	//追加先配列の文字数
	int firstArrayNumber = 0;

	//追加先配列の文字数を調べるループ
	for (int firstCounter = 0; firstArray[firstCounter]; ++firstCounter) {

		//文字数のぶんだけ値をインクリメント
		++firstArrayNumber;
	}

	//追加する配列の文字数
	int secondArrayNumber = 0;

	//追加する配列の文字数を調べるループ
	for (int firstCounter = 0; secondArray[firstCounter]; ++firstCounter) {

		//文字数のぶんだけ値をインクリメント
		++secondArrayNumber;
	}

	//追加する配列の文字数が制限文字数より大きい場合
	if (secondArrayNumber > limitNumber) {


		//制限文字ぶんだけ配列の要素を追加するループ
		for (int firstCounter = 0; firstCounter < limitNumber; ++firstCounter) {

			//追加先配列の先頭のナル文字から順番に要素を代入
			firstArray[firstArrayNumber + firstCounter] = secondArray[firstCounter];
		}

		//末尾にナル文字を代入
		firstArray[firstArrayNumber + limitNumber] = '\0';

	}

	else {

		//文字列の全要素を追加するループ
		for (int firstCounter = 0; firstCounter < secondArrayNumber; ++firstCounter) {

			//追加先配列の先頭のナル文字から順番に要素を代入
			firstArray[firstArrayNumber + firstCounter] = secondArray[firstCounter];
		}

		//末尾にナル文字を代入
		firstArray[firstArrayNumber + secondArrayNumber] = '\0';
	}

	//連結した配列の先頭要素へのポインタを返却
	return firstArray;
}

int main()
{
	//連結先の文字配列を初期化
	char firstArray[arrayCapacity] = { 0 };

	//文字列の入力を促す
	cout << "文字列1を入力してください : ";

	//文字列を入力
	cin >> firstArray;

	//連結する文字配列を初期化
	char secondArray[arrayCapacity] = { 0 };

	//文字列の入力を促す
	cout << "文字列2を入力してください : ";

	//文字列を入力
	cin >> secondArray;

	//連結する文字制限数
	int limitNumber = 0;

	//制限文字数の入力を促す
	cout << "連結する最大の文字数を入力してください : ";

	//制限文字数の入力
	cin >> limitNumber;

	//連結した文字列を表示
	cout << "連結した文字列は " << connectCharacterArray(firstArray, secondArray, limitNumber) << " です。\n";
}



