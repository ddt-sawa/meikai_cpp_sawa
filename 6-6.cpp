/*
 * 6-6.cpp
 *
 *  Created on: 2018/06/22
 *      Author: syuka
 */

/*演習6-6 『こんにちは。』と表示する関数helloを作成せよ。
 * void hello();
 */


#include<iostream>

using namespace std;

//関数名         : hello
//仕様           :『こんにちは。』をコンソール上に表示する
//引数           : なし
//返り値         : なし
//作成者         : sawa
//日付           : 7/11
void sayHello()
{
	cout << "こんにちは。\n";
}

int main()
{
	//sayHello関数を呼び出し、挨拶を表示
	sayHello();
}


