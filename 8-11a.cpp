/*
* 8-11.cpp
*
*  Created on: 2018/06/26
*      Author: ddt
*/

/*演習8-11 p312で学習したstrcmp関数及びstrncmp関数と同等な関数を作成せよ。
* a.strcmp関数の作成
*/

#include<iostream>

using namespace std;

//配列の容量を多めに宣言
const int arrayCapacity = 100;

/**
* 第一引数と第二引数の文字列の大小関係を比較し、第一引数の方が大きければ1を、小さければ-1を、等しければ0を返却する
* @param firstArray secondArray 文字列
* @return returnInteger( -1, 0, 1)
* @author Sawa
* @since 7.23
*/
int compareCharacterArray(const char* firstArray, const char* secondArray)
{
	//返却値
	int returnInteger = 0;

	//両文字列の全ての要素の大小関係を比較するループ
	for (int firstCounter = 0; firstArray[firstCounter] != 0 || secondArray[firstCounter] != 0; ++firstCounter) {

		//第一引数の要素の方が大きかった場合
		if (firstArray[firstCounter] > secondArray[firstCounter]) {

			//返却値に1を代入
			returnInteger = 1;
		}

		//第二引数の要素の方が大きかった場合
		else if (firstArray[firstCounter] < secondArray[firstCounter]) {

			//返却値に-1を代入
			returnInteger = -1;
		}
	}
	//値を返却
	return returnInteger;
}

int main()
{
	//第一引数となる文字配列を初期化
	char firstArray[arrayCapacity] = { 0 };

	//文字列の入力を促す
	cout << "文字列1を入力してください : ";

	//文字列を入力
	cin >> firstArray;

	//第二引数となる文字配列を初期化
	char secondArray[arrayCapacity] = { 0 };

	//文字列の入力を促す
	cout << "文字列2を入力してください : ";

	//文字列を入力
	cin >> secondArray;

	//返却された値を表示
	cout << compareCharacterArray(firstArray, secondArray);
}