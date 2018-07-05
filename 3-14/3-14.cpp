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
	//記号数
	int symbolNumber;

	//記号数の入力を促す
	cout << "何個*を表示しますか : ";
	cin >> symbolNumber;

	//記号数が1以上の場合
	if (symbolNumber >= 1){

	//記号を表示するループ文(最初の改行を避けるため、i = 1からインクリメント)
	    for (int i = 1; i <= symbolNumber; i++){

	    	//記号を表示
		    cout << '*';

		    //5の倍数個の時改行

	        if ((i % 5) == 0) {
        	cout << '\n';
	        }
	    }
	    //改行
	    cout << '\n';
	}
}
