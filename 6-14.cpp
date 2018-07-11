/*
 * 6-14.cpp
 *
 *  Created on: 2018/06/23
 *      Author: syuka
 */


/*6-14 a,bを昇順に並び替える関数sortを作成せよ*/

#include<iostream>

using namespace std;


//関数名         : sortInteger
//仕様           : 受け取った2整数を昇順に並び替える
//引数           : int型変数firstInteger、secondInteger
//返り値         : なし
//作成者         : sawa
//日付           : 7/11
void sortInteger(int& firstInteger, int& secondInteger)
{

	//第一引数が第二引数より小さかった場合
	if (firstInteger <= secondInteger){

		//引数の値を入れ替える
		int temporaryInteger = firstInteger; //第一引数の値保存
		firstInteger = secondInteger;        //第一引数に第二引数の値を代入
		secondInteger = temporaryInteger ;   //第二引数に第一引数の値を代入
	}
}
int main()
{
	//表示する値の概要を告知
	cout << "aとbの値を昇順に並び替えます。\n";

	//整数a
	int firstInteger;

	//整数aの入力を促す
	cout<< "aの値 : ";

	//整数aの入力
	cin >> firstInteger;

	//整数b
	int secondInteger;

	//整数bの入力を促す
	cout << "bの値 : ";

	//整数bの入力
	cin >> secondInteger;

	//sortInteger関数を呼び出し、2整数を昇順にソートする
	sortInteger(firstInteger, secondInteger);

	//昇順にソートした結果を表示
	cout << "ソートした結果、a = " << firstInteger << "、b = " << secondInteger << "です。\n";
}

