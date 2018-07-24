/*
 * 5-10.cpp
 *
 *  Created on: 2018/06/22
 *      Author: syuka
 */

/* 演習5-10 4行3列の行列と3行4列の積を求めるプログラムを作成せよ。
 * 各構成要素の値はキーボードから読み込むこと。
 */

#include<iomanip>
#include<iostream>


using namespace std;

int main()
{
	//配列aの行数
	const int firstArrayLine = 4;

	//配列aの列数
	const int firstArrayRow = 3;

	//4行3列の配列a
	int firstArray[firstArrayLine][firstArrayRow];

	//3行4列の配列b
	int secondArray[firstArrayRow][firstArrayLine];

	//積を格納する配列c
	int answerArray[firstArrayLine][firstArrayLine] = {0};

	//配列aの要素入力を促す
	cout << "4行3列の配列を入力してください。\n";

	//配列aに要素を入力するループ文
	for(int firstCounter = 0; firstCounter < firstArrayLine; ++firstCounter){

		//列ごとの要素を入力するループ文
		for(int secondCounter = 0; secondCounter < firstArrayRow; ++secondCounter) {

			//値入力
			cin >> firstArray[firstCounter][secondCounter];
		}
	}

	//配列bの要素入力を促す
	cout << "3行4列の配列を入力してください。\n";

	//配列bに要素を入力するループ文
	for(int firstCounter = 0; firstCounter < firstArrayRow; ++firstCounter){

		//列ごとの要素を入力するループ文
		for(int secondCounter = 0; secondCounter < firstArrayLine; ++secondCounter) {

			//値入力
			cin >> secondArray[firstCounter][secondCounter];
		}
	}

	//配列の積を計算するループ文

	//回答となる積の行を指定
	for (int firstCounter = 0; firstCounter < firstArrayLine; ++firstCounter){

		//回答となる積の列を指定
		for(int secondCounter = 0; secondCounter < firstArrayLine; ++secondCounter){

			//積の計算をするために、配列aの同じ行の要素、配列bの同じ行の要素を掛け合わせるループ文
			for (int thirdCounter= 0; thirdCounter < firstArrayRow; ++thirdCounter) {

				//配列aの行の要素×配列bの列の要素を順番に足していく
				answerArray[firstCounter][secondCounter] += (firstArray[firstCounter][thirdCounter] * secondArray[thirdCounter][secondCounter]);
			}

			//計算した積を表示
			cout << setw(3) << answerArray[firstCounter][secondCounter];
		}

		//積を表示する行数を変える改行
		cout << '\n';
	}
}
