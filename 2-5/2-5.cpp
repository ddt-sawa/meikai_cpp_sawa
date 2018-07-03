/*
 * 2-5.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習2-5 正の整数値を読み込んで、それを3で割った値に応じて
 * 『その値は3で割り切れます。』『その値を3で割った剰余は1です。』『その値を3で割った剰余は2です』
 * のいずれかを表示するプログラムを作成せよ。
 * 正でない値を読み込んだ場合は、『正でない値が入力されました。』と表示すること。*/

#include<iostream>

using namespace std;

int main()
{
	 //int型変数xの宣言
	 int x;

	 //xの入力を促す
	 cout << "整数値 : ";

	 //入力されたxの値を読み込む
	 cin >> x;

	 //xが正の場合
	 if (x > 0)

		 //xが3で割り切れる場合
		 if (x % 3 == 0)
			 cout << "その値は3で割り切れます。\n";

	     //xが3で割ると1余る場合
		 else if (x % 3 == 1)
			 cout << "その値を3で割った剰余は1です。\n";

	     //xが3で割ると2余る場合
		 else
			 cout << "その値を3で割った剰余は2です。\n";

	 //xが負及び0の場合
	 else
		 cout << "正でない値が入力されました。\n";
}

