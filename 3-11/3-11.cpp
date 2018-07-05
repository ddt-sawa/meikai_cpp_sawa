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
	 //nの値
	 int countNumber;

	 //1からnまでの和
	 int entireSum = 0;

	 //nの入力を促す
	 cout << "1からnまでの和を求めます。 n : ";
	 cin >> countNumber;

	 // 1からnまでの値を
	 for(int i = 1; i <= countNumber; i++)

		 //entireSumに加える
		 entireSum += i;

	 //結果を表示
     cout << "1から" << countNumber << "までの和は" << entireSum << "です。\n";
}
