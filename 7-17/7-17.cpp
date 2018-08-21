/*
 * 7-17.cpp
 *
 *  Created on: 2018/06/25
 *      Author: ddt
 */

/* 演習7-17 ポインタpが指すオブジェクトの先頭nバイトにvを代入する関数mem_setを作成せよ。
 * void mem_set(void* p, int n, unsigned char v)
 */

#include<iostream>

using namespace std;

//配列の要素数
const int arraySize = 5;

/**
* ポインタが指すオブジェクトの先頭から、入力したバイト数先に文字の値を代入する
* @param argumentPointer ポインタ, argumentInteger整数, argumentCharacter 文字
* @author Sawa
* @since 7.19
*/
void memorySet(void* argumentPointer, int argumentInteger, unsigned char argumentCharacter)
{
	//char型の大きさは1バイトであるため、void型ポインタをchar型ポインタに変換
	char* inputString = reinterpret_cast<char*>(argumentPointer);

	//ポインタの位置を整数値ぶん先頭からずらし、適当な文字を代入する
	*(inputString + argumentInteger) = argumentCharacter;

}
int main()
{
	//int型配列を宣言し、初期化
	int intArray[arraySize] = {0};

	//int型配列の先頭から何バイト離れた位置に値を代入するかを決める整数
	int inputInteger = 2;

	//代入する適当な値
	unsigned char inputCharacter = 'Z';

	//関数の呼び出し
	memorySet(intArray, inputInteger, inputCharacter);

	//文字情報を代入されたint型配列が、どのようになっているかを調べるループ
	for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter) {

		//配列を走査表示
		cout << intArray[firstCounter];
	}
}
