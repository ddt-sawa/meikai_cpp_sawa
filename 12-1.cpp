/*
* 12-1.cpp
*
*  Created on: 2018/07/02
*      Author: ddt
*/

/*演習12-1 前置演算子と後置演算子は行うことがほぼ同じであるため、似たようなコードが各演算子関数に
* 散らばっている(たとえば、増分演算子中のif文は前置版と後置版で同一であるし、減分演算子中のif文も前置版と後置版で同一である)。
* 前置演算子関数から後置演算子関数を呼び出すか、もしくは後置演算子関数から前置演算子関数を
* 呼び出すかのいずれかに変更せよ。なお、どちらの実現が好ましいのかも検討すること。
*/

#include<iostream>
//演算子関数の定義を含んだヘッダをインクルード
#include"12-1.h"

using namespace std;

int main()
{
	//カウントアップ・ダウンの回数を宣言
	int countNumber = 0;

	//カウントアップ・ダウンに用いるCounterClass型オブジェクトを二つ初期化
	CounterClass firstClass; CounterClass secondClass;

	//カウントアップの回数を尋ねる
	cout << "カウントアップの回数 : ";

	//カウントアップの回数を入力
	cin >> countNumber;

	//入力した回数分カウントアップを繰り返すループ
	for (int firstCounter = 0; firstCounter < countNumber; ++firstCounter) {

		//後置演算子の処理が前置演算子の処理と同様に行われていることを確認
		cout << firstClass++ << ' ' << ++secondClass << '\n';
	}

	//カウントダウンの回数を尋ねる
	cout << "カウントダウンの回数 : ";

	//カウントダウンの回数を入力
	cin >> countNumber;

	//入力した回数分カウントダウンを繰り返す
	for (int firstCounter = 0; firstCounter < countNumber; ++firstCounter) {

		//後置演算子の処理が前置演算子の処理と同様に行われていることを確認
		cout << firstClass-- << ' ' << --secondClass << '\n';
	}

}

