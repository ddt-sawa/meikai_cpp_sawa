/*
 * 5-6.cc
 *
 *  Created on: 2018/06/21
 *      Author: syuka
 */

/*演習5-6 要素型がint型で要素数が15の配列の全要素に0-10の乱数を
 * 代入して、右のように棒グラフで値を表示するプログラムを作成せよ。
 * 棒グラフは記号文字'*'を横方向に並べたものとする。
 */

//setw関数を使うため、<iomanip>ヘッダをインクルード
#include<iomanip>
#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	//配列の要素数
	const int arrayNumber = 15;

	//配列宣言
	int intArray[arrayNumber];

	//乱数テーブルの準備
	srand(time(NULL));

	//配列に表示する記号数を走査代入するためのループ文
	for (int firstCounter = 0; firstCounter < arrayNumber; firstCounter++){

		//表示する記号数として0-10の乱数を設定する
		int symbolNumber  = rand() % 11;

		//配列に記号数を走査代入する
		intArray[firstCounter] = symbolNumber;


		//レイアウトを整えるため、配列の添え字を2列かつ右寄せで表示する
	    cout << "intArray["  << setw(2) << right << firstCounter << internal  <<"]" <<  " : ";

	    //棒グラフ状に記号を表示するループ文
	    for (int secondCounter = 0; secondCounter < symbolNumber; secondCounter++) {

	    	//記号を表示
	    	cout << '*';
	    }
        //次の棒グラフ表示に移るため、改行
	    cout << "\n";
	}
}
