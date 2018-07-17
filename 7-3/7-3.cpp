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
* 2実引数の値を交換する
* @param *firstArgument, *secondArgument 実引数へのポインタ
* @author Sawa
* @since 7.17
*/
void swap(int *firstArgument, int *secondArgument)
{
	int temporaryInteger = *firstArgument;
	*firstArgument = *secondArgument;
	*secondArgument = temporaryInteger;
}

/**
* 3実引数の値を昇順に並び替える
* @param *firstInteger, *secondInteger, *thirdInteger 実引数へのポインタ
* @author Sawa
* @since 7.17
*/
void sort(int* firstInteger, int* secondInteger, int* thirdInteger)
{
	//第一引数が第二引数より大きい場合、　swap関数を呼び出し値を入れ替える
	if (*firstInteger > *secondInteger) swap(&(*firstInteger), &(*secondInteger));
	//第二引数が第三引数より大きい場合、　swap関数を呼び出し値を入れ替える
	if (*secondInteger > *thirdInteger) swap(&(*secondInteger), &(*thirdInteger));
	//第一引数に残った値が第二引数に残った値より大きい場合、　swap関数を呼び出し値を入れ替える
	if (*firstInteger > *secondInteger) swap(&(*firstInteger), &(*secondInteger));
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
	sort(&firstInteger, &secondInteger, &thirdInteger);

	//3整数を昇順に並び替えたことを告知
	cout << "整数a,b,cを昇順に並び替えました。\n";

	//最小値を表示
	cout << "整数aの値は" << firstInteger << "です。\n";

	//中央値を表示
	cout << "整数bの値は" << secondInteger << "です。\n";

	//最大値を表示
	cout << "整数cの値は" << thirdInteger << "です。\n";

}
