/*
 * 3-11.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/* 演習3-11 1からnまでの和を求めるList3-9(p.98)をfor文で実現せよ*/

#include<iostream>

using namespace std;

int main()
{
	//ｎと合計を示すsumの宣言
	 int n;

	 int sum = 0;

	 cout << "1からnまでの和を求めます。\n";
	 cin >> n;

	 // sumに1～nまでの和を代入する
	 for(int i = 1; i <= n; i++)
		 sum += i;

     cout << "1から" << n << "までの和は" << sum << "です。\n";
}
