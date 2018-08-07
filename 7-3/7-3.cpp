/*
 * 7-3.cpp
 *
 *  Created on: 2018/06/25
 *      Author: ddt
 */

/*演習7-3 List6-16(p.222)の関数sortを、参照渡しではなく、ポインタの
 * 値渡しによって行うように変更したプログラムを作成せよ。
 */

#include<iostream>

using namespace std;

/**
* 2整数の値を交換する
* @param *firstInteger 整数a, *secondInteger 整数b 
* @author Sawa
* @since 7.17
*/
void swapInteger(int *firstInteger, int *secondInteger)
{
	//aを保存
	int temporaryInteger = *firstInteger;

	//bをaに代入
	*firstInteger = *secondInteger;

	//保存していたaをbに代入
	*secondInteger = temporaryInteger;
}

/**
* 3整数の値を昇順に並び替える
* @param *firstInteger 整数a, *secondInteger 整数b, *thirdInteger 整数c
* @author Sawa
* @since 7.17
*/
void sortInteger(int* firstInteger, int* secondInteger, int* thirdInteger)
{
	//aがbより大きい場合　
	if (*firstInteger > *secondInteger) {

		//値を入れ替える
		swapInteger(&(*firstInteger), &(*secondInteger));
	}
	//bがcより大きい場合　
	if (*secondInteger > *thirdInteger) {

		//値を入れ替える
		swapInteger(&(*secondInteger), &(*thirdInteger));
	}
	//aに残った値がbに残った値より大きい場合　
	if (*firstInteger > *secondInteger) {

		//値を入れ替える
		swapInteger(&(*firstInteger), &(*secondInteger));
	}
}

int main()
{
	//整数の宣言
	int firstInteger, secondInteger, thirdInteger;

	//1つ目の整数値入力を促す
	cout << "整数a : ";

	//入力
	cin >> firstInteger;

	//2つ目の整数値入力を促す
	cout << "整数b : "; 
	
	//入力
	cin >> secondInteger;

	//3つ目の整数値入力を促す
	cout << "整数c : "; 
	
	//入力
	cin >> thirdInteger;

	//sort関数を呼び出し、3整数を昇順にソートする
	sortInteger(&firstInteger, &secondInteger, &thirdInteger);

	//3整数を昇順に並び替えたことを告知
	cout << "整数a,b,cを昇順に並び替えました。\n";

	//最小値を表示
	cout << "整数aの値は" << firstInteger << "です。\n";

	//中央値を表示
	cout << "整数bの値は" << secondInteger << "です。\n";

	//最大値を表示
	cout << "整数cの値は" << thirdInteger << "です。\n";
}
