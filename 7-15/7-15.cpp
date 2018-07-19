/*
 * 7-15.cpp
 *
 *  Created on: 2018/06/25
 *      Author: ddt
 */

/*演習7-15 double型のオブジェクトを生成して0.0で初期化するプログラムを作成せよ。
 */

//fixed,setprecision操作子を使うため、<iomanip>ヘッダをインクルード
#include<iomanip>
#include<iostream>

using namespace std;

int main()
{
	//double型オブジェクトを生成し、0.0で初期化
	double* temporaryValue = new double(0.0);

	//値を有効数字1桁で表示
	cout << fixed << setprecision(1) << *temporaryValue;

    //オブジェクトを消去
	delete temporaryValue;
}

