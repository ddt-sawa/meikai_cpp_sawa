/*
 * 8-17.cpp
 *
 *  Created on: 2018/06/27
 *      Author: ddt
 */

 /*演習8-17 二つの文字列s1とs2の内容をそっくり入れ替える関数swap_stringを作成せよ。
  * void swap_string(char* s1, char* s2);
  * たとえば、配列pとqに文字列"ABCDEF"と"XYZ"が格納されていて。swap_string(p,q)と
  * 呼び出した場合、関数から戻ってきたときの配列pの文字列は"XYZ"となって、配列qの文字列は
  * "ABCDEF"となる。
  */

//strcpy関数を使用するため、<cstring>ヘッダをインクルード
#include<cstring>
#include<iostream>

using namespace std;

//文字列配列の容量
const int arrayCapacity = 50;

/**
* 2つの文字列の要素を入れ替える
* @param firstArray secondArray 交換する文字列
* @author Sawa
* @since 7.23
*/
void swapString(char* firstArray, char* secondArray)
{
	//第一引数の要素を一時保存する配列を宣言
	char copyArray[arrayCapacity] = { 0 };

	//第一引数の全要素を一時保存
	strcpy(copyArray, firstArray);

	//第二引数の全要素を第一引数の全要素に代入
	strcpy(firstArray, secondArray);

	//一時保存していた第一引数の全要素を第二引数に代入
	strcpy(secondArray, copyArray);
}

int main()
{
	//表示する値の説明
	cout << "文字列1と文字列2を交換して表示します。\n";

	//文字列1の初期化
	char firstArray[arrayCapacity] = { 0 };

	//文字列1の入力を促す
	cout << "文字列1を入力してください。\n";

	//文字列1を入力
	cin >> firstArray;

	//文字列2の初期化
	char secondArray[arrayCapacity] = { 0 };

	//文字列2の入力を促す
	cout << "文字列2を入力してください。\n";

	//文字列2の入力
	cin >> secondArray;

	//2つの文字列を交換する
	swapString(firstArray, secondArray);

	//交換済みの文字列1を表示
	cout << "交換した文字列1は" << firstArray << " です。\n";

	//交換済みの文字列2を表示
	cout << "交換した文字列1は" << secondArray << " です。\n";

}
