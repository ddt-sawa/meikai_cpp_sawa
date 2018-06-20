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
	//アスタリスク記号の数を表すint型変数nの宣言
	int n;

	//nの入力を促す
	cout << "何個*を表示しますか : ";

	//nに整数値を読み込む
	cin >> n;

	if (n > 0){

	    //繰り返しの回数を制御するint型変数iを初期化
	    int i = 0;

	    //n回while文を繰り返し、n個*を表示する
	    while (i < n) {
		    cout << '*';
		    i++;
	    }
    cout << '\n';
    }
}
