/*
 * 11-1.cpp
 *
 *  Created on: 2018/06/30
 *      Author: ddt
 */

/*演習11-1 時・分・秒のデータメンバで構成される時刻クラスを作成せよ。コンストラクタやメンバ関数については、自由に設計すること。*/

#include<iostream>
//ユーザ定義型のヘッダをインクルード
#include "11-1.h"

using namespace std;

int main()
{
	//TimeClass型のデータメンバに時・分・秒を代入
	TimeClass firstClass(16, 13, 30);

	//時・分・秒を表示
	cout << firstClass.getHour() << "時" << firstClass.getMinute() << "分" << firstClass.getSecond() << "秒\n";
}

