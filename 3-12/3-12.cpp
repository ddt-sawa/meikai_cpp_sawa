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
	//nと合計を示すsumの宣言
	 int n;
	 int sum = 0;

	//nの入力催促と入力
	 cout << "nの値 : \n";
	 cin >> n;

	 // 1-nまでの値をsumに代入
	 for(int i = 1; i <= n; i++){

		 // 数値の後ろに'+'を表示し、最後尾(n)だけ'='を表示する
		 cout << i;
		 if (i < n)
			 cout << " + ";
		 else
			 cout << " = ";

		 sum += i;
	 }
	 //合計値の出力
     cout << sum << "\n";
}


