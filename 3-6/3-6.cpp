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
	//+-の個数を表すint型変数nの宣言
	int n;

	//nの入力を促す
	cout << "何個表示しますか : ";

	//nに整数値を読み込む
	cin >> n;

    //nが正の整数であるなら、以下の処理を行う
    if (n > 0){

    	int i = 0;

    	//n個記号を表示をする
    	while (i < n){

    		//偶数回目は-を表示
    		if (i % 2)
    			cout << "-";

    		//奇数回目は+を表示
    		else
    			cout << "+";
            //iをインクリメント
    		i++;
    	}

    }
}
