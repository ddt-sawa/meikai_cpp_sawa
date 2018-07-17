/*
 * 7-2.cpp
 *
 *  Created on: 2018/06/25
 *      Author: ddt
 */

/*演習7-2 List6-15(p.220)の関数swapを、参照渡しではなく、ポインタの値渡しによって行う
 * ように変更したプログラムを作成せよ。
 */

#include<iostream>

using namespace std;


/**
* 2引数の値を交換する
* @param firstInteger, secondInteger 整数
* @author Sawa
* @since 7.17
*/
void swap(int* firstInteger, int* secondInteger)
{
	//1つ目の整数値を保存
	int temporaryInteger = *firstInteger;

	//2つ目の整数値を1つ目の整数に代入
	*firstInteger = *secondInteger;

	//保存しておいた1つ目の整数値を2つ目の整数に代入
	*secondInteger = temporaryInteger;
}

int main()
{
	//整数の宣言
	int firstInteger, secondInteger;

	//1つめの整数入力を促す
	cout << "整数a : "; 
	
	//入力
	cin >> firstInteger;

	//2つ目の整数入力を促す
	cout << "整数b : "; 
	
	//入力
	cin >> secondInteger;

	//関数を呼び出し、ポインタの値渡しを行う
	swap(&firstInteger, &secondInteger);

	//値の交換を告知
	cout << "整数aとbの値を交換しました。\n";

	//入れ替えた値を表示(元2つ目の整数)
	cout << "整数aの値は" << firstInteger << "です。\n";

	//入れ替えた値を表示(元1つ目の整数)
	cout << "整数bの値は" << secondInteger << "です。\n";
}
