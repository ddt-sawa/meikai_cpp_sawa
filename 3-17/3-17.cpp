/*
 * 3-17.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習3-17 季節を求めるList3-1(p82)の月の読み込みにおいて、1-12以外の値が入力された場合は、
再入力させるように変更したプログラムを作成せよ。(do文の中にdo文が入る二重ループとなる)*/

//string型を使うため、<string>ヘッダをインクルード
#include<string>
#include<iostream>

using namespace std;

int main()
{
	//もう一回初めから行うかどうかを選択するstring変数retryを宣言
	string retry;

	//入力した季節を求めるコード
	do {
		//月を表すint型変数の宣言
		int month;
	    // 1-12以外の月が入力された場合再入力を行う
		do {
	        cout << "季節を求めます。\n何月ですか : ";
	        cin >> month;
	     } while(month < 1 || month >12);

		//3-5月の場合"春"
	    if (month >= 3 && month <= 5)
		    cout << "それは春です。\n";
	    //6-8月の場合"夏"
	    else if (month >= 6 && month <= 8)
		    cout << "それは夏です。\n";
	    //9-11月の場合"秋"
	    else if (month >=9 && month <= 11)
	    	cout << "それは秋です。\n";
	    //12,1,2月の場合"冬"
	    else if (month == 12 || month == 1 || month ==2)
	    	cout << "それは冬です。\n";

	    //もう一度初めから行うかたずねる
	    cout << "もう一度？ Y・・・Yes / N・・・No : ";

	    //retryに'Y','y'が入力された場合初めから、それ以外なら終了
	    cin >> retry;
	} while (retry == "Y" || retry == "y");
}

