/*
 * 3-8.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/* 読み込んだ値が1未満であれば改行文字を出力しないように、List3-10(p.100)
 * を書き換えたプログラムを作成せよ。
 */

#include<iostream>

using namespace std;

int main()
{
	//表示するアスタリスクの個数を訪ねる
	int n;

	cout << "何個*を表示しますか : ";
	cin >> n;

	//n > 1の時にのみ以下の処理を行う
	if (n >= 1){

	//n回アスタリスクを表示する
	    for (int i = 0; i < n; i++)
		    cout << '*';

	    //if文のブロックに含まれているため、n < 1の時改行されない
	    cout << '\n';
	}
}
