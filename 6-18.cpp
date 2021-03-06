/*
 * 6-18.cpp
 *
 *  Created on: 2018/06/24
 *      Author: syuka
 */

 /*演習6-18 0以上9以下の乱数を返却する関数rand1を作成せよ。
 複数回呼び出された場合に、連続して同じ値を返さないようにすること。*/


#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

//前回の乱数を、代入する乱数がとりえない値である-1で初期化
int backNumber = -1;

/**
* 0-9の乱数を返却する。複数回呼び出された場合、乱数の値を連続させない
* @return randomNumber 乱数
* @author Sawa
* @since 7.17
*/
int returnRandomNumber()
{
	//今回の乱数を宣言
	int randomNumber;

	//前回の乱数と被らない値が出るまで、今回の乱数を再設定するループ
	do {
		//今回の乱数を設定
		randomNumber = rand() % 10;

		//backNumberの値が-1の場合
		if (backNumber == -1) {

			//この関数を呼び出すのは初回であり、参照する前回の値が存在しないのでループを抜ける
			break;
		}
		//前回の乱数と異なる値が代入された場合、ループを抜ける
	} while (backNumber == randomNumber);

	//前回の乱数に今回の乱数の値を保存
	backNumber = randomNumber;

	//乱数を返却
	return randomNumber;
}

int main()
{

	//表示する値の概要を告知
	cout << "0-9までの乱数を、連続しないように表示します。\n";

	//乱数テーブルの準備
	srand(time(NULL));

	//表示する乱数の個数(関数を呼び出す回数)
	int integerNumber;

	//個数入力を促す
	cout << "表示する乱数の個数 : ";

	//個数入力
	cin >> integerNumber;

	//表示する乱数の個数ぶん、関数を呼び出すためのループ
	for (int firstCounter = 0; firstCounter < integerNumber; ++firstCounter) {

		//関数を呼び出し、乱数を表示
		cout << returnRandomNumber() << '\n';
	}
}
