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
	//整数の個数を入力
	int n;
	cout << "整数を加算します。\n";
	cout << "何個加算しますか : ";
	cin >> n;

	//平均を求めるため、int型変数ではなくdouble型変数を初期化
    double sum = 0;

    //平均をdouble型変数aveで表す
    double ave;

    //n回整数入力を繰り返す
    for (int i = 0; i < n; i++){
    	int t;
    	cout << "整数 (0で終了) : ";
    	cin >> t;
    	//0が入力された場合終了
    	if (t == 0) break;
    	//合計に入力値を加算
    	sum += t;
    	//平均を計算
    	ave = sum / i;
    }
    //合計を表示
    cout << "合計は" << sum << "です。\n";
    //平均を表示
    cout << "平均は" << ave << "です。\n";
}
