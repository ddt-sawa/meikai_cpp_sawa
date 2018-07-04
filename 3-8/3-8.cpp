/*
 * 3-8.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/* 演習3-8 読み込んだ値が1未満であれば改行文字を出力しないように、List3-10(p.100)
 * を書き換えたプログラムを作成せよ。
 */

#include<iostream>

using namespace std;

int main()
{
	//記号数
	int symbolNumber;

	//記号数入力を促す
	cout << "何個*を表示しますか : ";

	//記号数入力
	cin >> symbolNumber;

	//記号数が1以上の場合
	if (symbolNumber >= 1){

	//以下の処理を記号数ぶん繰り返す
	    for (int i = 0; i < symbolNumber; i++) {
		    cout << '*';
		    {

	    //記号数が1以上の場合のみ改行
	    cout << '\n';
	}
}
