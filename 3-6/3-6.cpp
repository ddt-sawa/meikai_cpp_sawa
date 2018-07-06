/*
 * 3-6.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習3-6 読み込んだ値の個数だけ記号文字を表示するプログラムを作成せよ。
 * +と-を交互に表示すること。*/

#include<iostream>

using namespace std;

int main()
{
	//記号数(+-)
	int symbolNumber;

	//記号数の入力を促す
	cout << "何個表示しますか : ";

	//記号数入力
	cin >> symbolNumber;

	    //入力した記号数に達するまで記号を表示するループ文
    	for (int counterValiable = 1; counterValiable <= symbolNumber; counterValiable++) {

    		//表示が奇数回目の場合
    		if (counterValiable % 2 == 1) {
    			//'+'を表示
    			cout << '+';
    		}

    		//表示が偶数回目の場合
    		else {
    			//'-'を表示
    			cout << '-';
    		}

        }

    //改行
   	cout << '\n';
}
