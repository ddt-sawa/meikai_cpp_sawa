/*
 * 3-21.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習3-21　n段のピラミッドを表示するプログラムを作成せよ(右図は4段の例)
 * 第i行目には(i - 1) * 2 + 1個の"*"を表示すること(最終行である第n行目には
 * (n - 1) * 2 + 1個の'*'記号を表示することになる)
 */

#include<iostream>

using namespace std;

int main()
{
	//整数値を入力させ、読み込む
    int n;
    cout << "段数 : ";
	cin >> n;

	//以下の処理をn回繰り返す
    for (int i = 1 ; i <= n; i++){

    	//n-1個の空白文字を置く
    	for(int j = 1; j <= (n - i); j++)
    		cout << ' ';

        //(i-1)*2+1個のアスタリスクを置く
    	for(int j = 1; j <= (i - 1) * 2 + 1; j++)
    		cout << '*';

    	//n-1個の空白文字を置く
    	for(int j = 1; j <= (n - i); j++)
    		cout << ' ';

    	cout << '\n';
    }
}
