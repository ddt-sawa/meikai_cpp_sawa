/*
 * 6-8.cpp
 *
 *  Created on: 2018/06/22
 *      Author: syuka
 */

/*演習6-8 List 6-8の関数put_starsを、その内部でList6-9の関数
 * put_ncharを呼び出すことで表示を行うように書き換えたプログラムを作成せよ。
 */

#include<iostream>

using namespace std;


/**
*putStars関数に送られた現在表示中の段目ぶん表示文字を出力する
* @param currentStep 現在表示中の段目 stepCharacter 表示文字
* @author Sawa
* @since 7.17
*/
void putCharacter(int currentStep, char stepCharacter)
{
	//現在の段目ぶん表示文字を出力するループ文
	for (int currentSymbol = 0; currentSymbol < currentStep; ++currentSymbol) {

		//表示文字を出力
		cout << stepCharacter;
	}
}


/**
*putCharacter関数を段数ぶん呼び出し、現在の段目と表示文字を渡す
* @param　stepNumber 表示する三角形の段数 stepCharacter 表示文字
* @author Sawa
* @since 7.17
*/

void putStars(int stepNumber, char stepCharacter)
{
	//段数ぶんputCharacter関数を呼び出すループ文
	for (int currentStep = 1; currentStep <= stepNumber; ++currentStep){

		//putCharacter関数を呼び出し、現在表示中の段目と表示文字を渡す
		putCharacter(currentStep, stepCharacter);

		//表示段目を変えるため改行
		cout << "\n";
	}
}



int main()
{
	//左下に直角が来る三角形を表示することを告知
	cout << "文字で構成される左下直角の三角形を表示します。\n";

	//段数の宣言
	int stepNumber;

	//段数入力を促す
	cout << "段数は : ";

	//段数入力
	cin >> stepNumber;

	//表示文字の宣言
	char stepCharacter;

	//表示文字の入力を促す
	cout << "表示したい文字は : ";

	//表示文字入力
	cin >> stepCharacter;

	//putStars関数に段数と表示文字を渡す
	putStars(stepNumber, stepCharacter);
}

