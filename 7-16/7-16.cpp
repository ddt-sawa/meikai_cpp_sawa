/*
 * 7-16.cpp
 *
 *  Created on: 2018/06/25
 *      Author: ddt
 */

 /*演習7-16 double型の配列を動的に生成するプログラムを作成せよ。要素数はキーボードから読み込むこと。
  * また、生成に失敗した場合の処理も行なうこと。
  */

//bad_allocを使うため、<new>ヘッダをインクルード
#include<new>
#include<iostream>

using namespace std;

int main()
{
	//配列の要素数
	int arraySize;

	//要素数入力を促す
	cout << "要素数 : ";

	//入力
	cin >> arraySize;

	//例外処理の準備
	try {

		//double型配列を生成する
		double* dinamicArray = new double[arraySize];
	}

	//配列の生成に失敗した場合
	catch (bad_alloc) {

		//例外を補足したことを告知
		cout << "配列の生成に失敗しましたのでプログラムを中断します。\n";

		//強制終了
		abort();
	}
}
