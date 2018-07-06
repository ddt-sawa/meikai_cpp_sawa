/*
 * 4-1.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習4-1 全ての文字について、数字/英大文字/英小文字/記号文字などの文字種が分かる
 * 一覧表を出力するプログラムを作成せよ。
 */

//文字種テスト関数呼び出しを行うため、<cctype>ヘッダをインクルード
#include<cctype>
#include<iostream>

using namespace std;

int main()
{
	//調べたい文字
	char characterValue;

	//文字入力を促す
	cout << "文字種を調べたい文字を入力してください。";

	//文字入力
	cin >> characterValue;

	//文字種テスト関数の呼び出しを行い、引っかかった文字種の表示を行う。
	if(iscntrl(characterValue)) cout <<  "制御文字です\n";
	else if(isdigit(characterValue)) cout <<  "10進数字です\n";
	else if(islower(characterValue)) cout <<  "英小文字です\n";
	else if(isprint(characterValue)) cout <<  "空白文字です\n";
	else if(ispunct(characterValue)) cout <<  "空白類文字です\n";
	else if(isupper(characterValue)) cout << "英大文字です\n";
	else if(isxdigit(characterValue)) cout <<  "16進数字です\n";

}
