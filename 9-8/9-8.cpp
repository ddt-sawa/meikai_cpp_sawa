/*
 * 9-8.cpp
 *
 *  Created on: 2018/06/28
 *      Author: ddt
 */

 //演習9-8 前問を、名前空間メンバの宣言と定義を分離したプログラムとして作成せよ。


#include<iostream>

using namespace std;

//英語でメッセージを表示する名前空間を宣言
namespace NameSpaceEnglish {

	extern int integerValue;  //整数x
	void printIntegerValue(); //英語で整数xに関するメッセージを表示
	void printHello();        //英語で挨拶文を表示

}

//名前空間NameSpaceEnglishにおける整数x
int NameSpaceEnglish::integerValue = 1;

/**
* 英語で整数xに関するメッセージを表示
* @author Sawa
* @since 7.24
*/
void NameSpaceEnglish::printIntegerValue()
{
	cout << "The value of x is " << NameSpaceEnglish::integerValue << ".\n";
}

/**
* 英語で挨拶文を表示
* @author Sawa
* @since 7.24
*/
void NameSpaceEnglish::printHello()
{
	cout << "Hello!\n";
}


//日本語でメッセージを表示する名前空間を定義
namespace NameSpaceJapanese {

	extern int integerValue;   //整数x
	void printIntegerValue();  //日本語で整数xに関するメッセージを表示
	void printHello();         //日本語で挨拶文を表示

	namespace NameSpaceOsaka {
		void printIntegerValue(); //大阪弁で整数xに関するメッセージを表示
		void printHello();        //大阪弁で挨拶文を表示
	}
}

//名前空間NameSpaceJapaneseにおける整数x
int NameSpaceJapanese::integerValue = 2;

/**
* 日本語で整数xに関するメッセージを表示
* @author Sawa
* @since 7.24
*/
void NameSpaceJapanese::printIntegerValue()
{
	cout << "変数xの値は" << NameSpaceJapanese::integerValue << "です。\n";
}

/**
* 日本語で挨拶文を表示
* @author Sawa
* @since 7.24
*/
void NameSpaceJapanese::printHello()
{
	cout << "こんにちは！\n";

}

/**
* 大阪弁で整数xに関するメッセージを表示
* @author Sawa
* @since 7.24
*/
void NameSpaceJapanese::NameSpaceOsaka::printIntegerValue()
{
	cout << "変数xの値は" << NameSpaceJapanese::integerValue << "でっせ。\n";
}

/**
* 大阪弁で挨拶文を表示
* @author Sawa
* @since 7.24
*/
void NameSpaceJapanese::NameSpaceOsaka::printHello()
{
	cout << "もうかってまっか？\n";
}

int main()
{
	//名前空間NameSpaceEnglishにおける、

	cout << "English::x = " << NameSpaceEnglish::integerValue << '\n'; //整数xを表示

	NameSpaceEnglish::printIntegerValue();    //整数xに関するメッセージを表示

	NameSpaceEnglish::printHello();  //挨拶を表示


	//名前空間NameSpaceJapaneseにおける、

	cout << "Japanese::x = " << NameSpaceJapanese::integerValue << '\n'; //整数xを表示

	NameSpaceJapanese::printIntegerValue();   //整数xに関するメッセージを表示

	NameSpaceJapanese::printHello();  //挨拶を表示


	//名前空間NameSpaceOsakaにおける、

	NameSpaceJapanese::NameSpaceOsaka::printIntegerValue(); //整数xに関するメッセージを表示

	NameSpaceJapanese::NameSpaceOsaka::printHello();   //挨拶を表示
}
