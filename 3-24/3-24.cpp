/*
 * 3-24.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */


/*演習3-24 合計だけでなく平均も求めるように、List3-17を書き換えたプログラムを作成せよ。
 * なお、読み込んだ負の数の工数は平均を求める際の分母から除外すること
 */
#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "整数を加算します。\n";
	cout << "何個加算しますか : ";
	cin >> n;

	//平均を求めるためsumをdouble型変数に変更
	double sum = 0;
	double ave = 0;

	for (int i = 1; i <= n; i++){
		int t;
		cout << "整数 : ";
		cin >> t;
		if (t < 0){
			cout << "負の数は加算しません。\n";
			//入力回数を1減らす
			i--;
			continue;
		}
		sum += t;
		ave = sum / i;
	}
    cout << "合計は" << sum << "です。\n";
    cout << "平均は" << ave << "です。\n";
}
