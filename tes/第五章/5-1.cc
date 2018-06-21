/*
 * 5-1.cc
 *
 *  Created on: 2018/06/21
 *      Author: syuka
 */

/*演習5-1 要素型がint型で要素数が5の配列の要素に対して、先頭から
 * 順に5,4,3,2,1を代入して表示するプログラムを作成せよ。
 */

#include<iostream>

using namespace std;

int main()
{
     //int型配列aの要素に値を代入
	const int n = 5;
	int a[n] = {5, 4, 3, 2, 1};

	//走査して表示
	 for(int i = 0; i < n; i++)
		 cout << a[i] << "\n";
}
