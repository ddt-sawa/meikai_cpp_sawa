/*
 * 1-13.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習1-13 以下に示すプログラムを作成せよ
  c.2桁の正の整数値（すなわち10以上99以下の値）をランダムに生成して表示 */

#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	// 乱数の種を設定
	srand(time(NULL));

	// 10～99の乱数を生成
	int lucky = rand() % 90 + 10;

	// 生成した乱数を表示
	cout << "ランダムな値は" << lucky << "です。\n";
}
