/*
 * 4-4.cc
 *
 *  Created on: 2018/06/21
 *      Author: syuka
 */

/*演習4-4 文字リテラルと整数リテラルに対してsizeof演算子を適用した値を
 * 表示するプログラムを作成せよ。実行結果に対する考察を行うこと。*/

#include<iostream>
#include<climits>

using namespace std;

int main()
{

	//整数リテラルにsizeof演算子を適用
	cout << "整数リテラル " << sizeof(5) << '\n';


	//文字リテラルにsizeof演算子を適用
	cout << "文字リテラル " << sizeof('a') << '\n';
}

//この処理系における整数リテラルのバイト数は4であり、文字リテラルのバイト数は1であることが分かった
