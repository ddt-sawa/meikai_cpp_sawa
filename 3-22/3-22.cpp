/*
 * 3-22.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習3-22 n段の下向き数字ピラミッドを表示する関数を作成せよ。
 * （右図は4段の例）。第i行目には1 % 10によって得られる
 * 数字を表示すること。
 */

#include<iostream>

using namespace std;

int main()
{
	//ピラミッドの段数を入力
    int n;
    cout << "段数 : ";
	cin >> n;

	//以下の処理をn回繰り返す
    for (int i = 1 ; i <= n; i++){

    	//i-1個の空白文字を置く
    	for(int j = 1; j <= (i - 1); j++)
    		cout << ' ';

        //(n - i)*2+1個の数字を置く
    	for(int j = 1; j <= (n - i) * 2 + 1; j++)
    		//置く数字の計算
    		cout << i % 10;

    	cout << '\n';
    }
 }
