/*
 * 3-22.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習3-23 合計だけでなく平均も求めるように、List3-15およびList3-16を
 * 書き換えたプログラムをそれぞれ作成せよ。
 * a.List3-16の書き換え
 */

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "整数を加算します。\n";
	cout << "何個加算しますか : ";
	cin >> n;

	//平均を求めるため、int型変数ではなくdouble型変数を初期化
    double sum = 0;

    //平均をdouble型変数aveで表す
    double ave;

    for (int i = 1; i <= n; i++){
    	int t;
    	cout << "整数 (0で終了) : ";
    	cin >> t;
    	if (t == 0) break;
    	sum += t;
    	ave = sum / i;
    }
    cout << "合計は" << sum << "です。\n";
    cout << "平均は" << ave << "です。\n";
}
