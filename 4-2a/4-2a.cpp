/*
 * 4-2.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習4-2以下のプログラムを作成せよ。
 a.int型の最小値から最大値までの全整数値を8進数、10進数、16進数で表示。
 */

//INT_MINを使用するため、<climits>ヘッダをインクルード
#include<climits>
#include<iostream>

using namespace std;

int main()
{
	//int型の最小値から最大値まで表示
    for (int i = INT_MIN; ; i++){

    	//8進数で表示
    	cout << oct << i << '\n';
    	//10進数で表示
        cout << dec << i << '\n';
        //16進数で表示
        cout << hex << i << '\n';
       }

}
