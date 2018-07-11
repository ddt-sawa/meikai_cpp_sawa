/*
 * 3-17.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習3-17 季節を求めるList3-1(p82)の月の読み込みにおいて、1-12以外の値が入力された場合は、
再入力させるように変更したプログラムを作成せよ。(do文の中にdo文が入る二重ループとなる)*/

//stringテンプレートクラスを使うため、<string>ヘッダをインクルード
#include<string>
#include<iostream>

using namespace std;

int main()
{
	//再試行を決める文字列を宣言
	string userRetry;

	//入力した月の季節を求めるループ文
	do {
		//月を宣言
		int thisMonth;

		// 1-12以外の値が入力された場合再入力を行うループ文
		do {

			//月の入力を促す
			cout << "季節を求めます。\n何月ですか : ";

			//入力
			cin >> thisMonth;

			//入力値が1-12の場合ループを抜ける
		}while(thisMonth < 1 || thisMonth > 12);

		//3-5月の場合"春"
		if (thisMonth >= 3 && thisMonth <= 5) {
			cout << "それは春です。\n";
		}

		//6-8月の場合"夏"
		else if (thisMonth >= 6 && thisMonth <= 8) {
			cout << "それは夏です。\n";
		}

		//9-11月の場合"秋"
		else if (thisMonth >=9 && thisMonth <= 11) {
			cout << "それは秋です。\n";
		}

		//12,1,2月の場合"冬"
		else if (thisMonth == 12 || thisMonth == 1 || thisMonth ==2) {
			cout << "それは冬です。\n";
		}

		//再試行するか尋ねる
		cout << "もう一度？ Y・・・Yes / N・・・No : ";

		//文字入力
		cin >> userRetry;

		//'Y','y'が入力された場合再試行、それ以外なら終了
	} while (userRetry == "Y" || userRetry == "y");
}

