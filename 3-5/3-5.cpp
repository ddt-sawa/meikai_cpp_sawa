/*
 * 3-5.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習3-5 読み込んだ値が1未満であれば改行文字を出力しないようにList3-6(p.92)
 * を書き換えたプログラムを作成せよ。*/

#include<iostream>

using namespace std;

int main()
{
	//記号数個数
	int symbolValue;

	//記号数入力
	cout << "何個*を表示しますか : ";  cin >> symbolValue;

	//記号数が1以上のとき
	if (symbolValue > 0){

	    //繰り返しを制御する整数iを初期化
	    int i = 0;

	    //記号数ぶんだけ以下の処理を繰り返す
	    while (i < symbolValue) {

	    	//記号を1つ表示
		    cout << '*';

		    //試行回数を制御する整数iをインクリメント
		    i++;
	    }
	    // 記号数が1以上の場合のみ改行を行う
    cout << '\n';

    }

}
