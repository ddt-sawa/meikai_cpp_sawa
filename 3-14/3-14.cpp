/*
 * 3-14.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習3-14 3-8を書き換えて、5個表示するごとに改行するプログラムを作成せよ*/

#include<iostream>

using namespace std;

int main()
{
	//表示するアスタリスクの個数を訪ねる
	int n;
	cout << "何個*を表示しますか : ";
	cin >> n;

	//n >= 1の時にのみ以下の処理を行う
	if (n >= 1){

	//n回アスタリスクを表示する
	    for (int i = 1; i <= n; i++){
		    cout << '*';
        //5の倍数回の時改行
	    if (!(i % 5))
        	cout << '\n';
	    }
	    //if文のブロックに含まれているため、n < 1の時改行されない
	    cout << '\n';
	}
}
