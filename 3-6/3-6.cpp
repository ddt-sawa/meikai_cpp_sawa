/*
 * 3-6.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習3-6 読み込んだ値の個数だけ記号文字を表示するプログラムを作成せよ。
 * +と-を交互に表示すること。*/

#include<iostream>

using namespace std;

int main()
{
	//記号数(+-)
	int symbolNumber;

	//記号数の入力を促す
	cout << "何個表示しますか : ";

	//記号数入力
	cin >> symbolNumber;

    //入力値が正の整数である場合
    if (symbolNumber > 0){

    	//繰り返しを制御する変数iを0で初期化
    	int i = 0;

    	//記号数ぶん以下の処理を行う
    	while (i < symbolNumber){

    		//偶数回目は-を表示
    		if (i % 2) {cout << "-";}

    		//奇数回目は+を表示
    		else {cout << "+";}
            //iをインクリメントし、記号数に達するまで繰り返し
    		i++;
    	}

    }
}
