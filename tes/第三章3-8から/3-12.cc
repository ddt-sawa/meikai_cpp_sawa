/*
 * 3-12.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/* 演習3-12 全問のプログラムを書き換えて、右のように式として表示する
 * プログラムを作成せよ*/

#include<iostream>

using namespace std;

int main()
{
	//ｎと合計を示すsumの宣言
	 int n;

	 int sum = 0;

	 cout << "nの値 : \n";
	 cin >> n;

	 // sumに1～nまでの和を代入する
	 for(int i = 1; i <= n; i++){

		 // iの後ろに+を表示し、最後だけ=を表示する
		 cout << i;
		 if (i < n)
			 cout << " + ";
		 else
			 cout << " = ";

		 sum += i;
	 }
     cout << sum << "\n";
}


