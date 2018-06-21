/*
 * 4-1.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習4-1 全ての文字について、数字/英大文字/英小文字/記号文字などの文字種が分かる
 * 一覧表を出力するプログラムを作成せよ。
 */

#include<cctype>
#include<climits>
#include<iostream>

using namespace std;

int main()
{
	char c;
	cout << "文字を入力してください.。";
	cin >>c;

	if(iscntrl(c)) cout <<  "制御文字です\n";
	else if(isdigit(c)) cout <<  "10進数字です\n";
	else if(isgraph(c)) cout <<  "空白を除く表示文字です\n";
	else if(islower(c)) cout <<  "英小文字です\n";
	else if(isprint(c)) cout <<  "空白文字です\n";
	else if(ispunct(c)) cout <<  "空白類文字です\n";
	else if(isupper(c)) cout << "英大文字です\n";
	else if(isxdigit(c)) cout <<  "16進数字です\n";

}
