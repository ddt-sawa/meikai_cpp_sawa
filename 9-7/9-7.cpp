/*
 * 9-7.cpp
 *
 *  Created on: 2018/06/28
 *      Author: ddt
 */

 /*演習9-7 名前空間Japaneseの中に大阪弁を表す名前空間OsakaをList9-15に追加したプログラムを
  * 作成せよ。追加した名前空間の中に『変数xの値は1でっせ。』と表示する関数print_xと、
  * 『もうかってまっか？』を表示する関数helloを定義すること。（変数xは定義しない）
  */


#include<iostream>

using namespace std;

//英語でメッセージを表示する名前空間を定義
namespace NameSpaceEnglish {

	//名前空間NameSpaceEnglishにおける整数x
	int intergerValue = 1;

	/**
	* 英語で整数xに関するメッセージを表示
	* @author Sawa
	* @since 7.24
	*/
	void printIntegerValue()
	{
		cout << "The value of x is " << intergerValue << ".\n";
	}

	/**
	* 英語で挨拶文を表示
	* @author Sawa
	* @since 7.24
	*/
	void printHello()
	{
		cout << "Hello!\n";
	}
}
//日本語でメッセージを表示する名前空間を定義
namespace NameSpaceJapanese {

	//名前空間NameSpaceJapaneseにおける整数x
	int intergerValue = 2;

	/**
	* 日本語で整数xに関するメッセージを表示
	* @author Sawa
	* @since 7.24
	*/
	void printIntergerValue()
	{
		cout << "変数xの値は" << intergerValue << "です。\n";
	}

	/**
	* 日本語で挨拶文を表示
	* @author Sawa
	* @since 7.24
	*/
	void printHello()
	{
		cout << "こんにちは！\n";

	}

	//日本語大阪弁でメッセージを表示する名前空間を定義
	namespace NameSpaceOsaka {

		/**
		* 大阪弁で整数xに関するメッセージを表示
		* @author Sawa
		* @since 7.24
		*/
		void printIntergerValue()
		{
			cout << "変数xの値は" << intergerValue << "でっせ。\n";
		}

		/**
		* 大阪弁で挨拶文を表示
		* @author Sawa
		* @since 7.24
		*/
		void printHello()
		{
			cout << "もうかってまっか？\n";
		}
	}
}

int main()
{
	//名前空間NameSpaceEnglishにおける、

	cout << "English::x = " << NameSpaceEnglish::intergerValue << '\n'; //整数xを表示

	NameSpaceEnglish::printIntegerValue();    //整数xに関するメッセージを表示

	NameSpaceEnglish::printHello();  //挨拶を表示


    //名前空間NameSpaceJapaneseにおける、
	
	cout << "Japanese::x = " << NameSpaceJapanese::intergerValue << '\n'; //整数xを表示

	NameSpaceJapanese::printIntergerValue();   //整数xに関するメッセージを表示

	NameSpaceJapanese::printHello();  //挨拶を表示


	//名前空間NameSpaceOsakaにおける、

	NameSpaceJapanese::NameSpaceOsaka::printIntergerValue(); //整数xに関するメッセージを表示

	NameSpaceJapanese::NameSpaceOsaka::printHello();   //挨拶を表示
}
