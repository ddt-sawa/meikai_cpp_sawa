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

/**
*『こんにちは。』を表示
* @author Sawa
* @since 7.17
*/
void sayHello()
{
	//挨拶表示
	cout << "こんにちは。\n";
}

int main()
{
	//sayHello関数を呼び出し、挨拶を表示
	sayHello();
}


