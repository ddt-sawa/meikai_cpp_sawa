/*
* 12-3.cpp
*
*  Created on: 2018/07/03
*      Author: ddt
*/


/*演習12-3(p.403)で作成した時刻クラスに、各種の演算子関数を追加せよ。仕様などは自分で考えること。*/

#include<iostream>
//ユーザ定義型のヘッダをインクルード
#include "12-3.h"

using namespace std;


int main()
{
	//TimeClass型オブジェクトに0時0分0秒を代入
	TimeClass userTime(0, 0, 0);

	//比較用TimeClass型オブジェクト
	TimeClass comparisionTime(0, 0, 1);

	cout << (userTime == comparisionTime) << '\n';  //0

	cout << (userTime != comparisionTime) << '\n';  //1

	cout << (--userTime) << '\n';                   //23時59分59秒

	cout << (++userTime) << '\n';                   //0時0分0秒

	cout << (userTime--) << '\n';                   //23時59分59秒

	cout << (userTime++) << '\n';                   //0時0分0秒

	cout << (userTime + 2) << '\n';                 //0時0分2秒

	cout << (userTime - 2) << '\n';                 //23時59分58秒

	cout << (userTime -= 2) << '\n';                //23時59分58秒

	cout << (userTime += 2) << '\n';                //0時0分0秒
}
