/*
 * 3-22.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習3-22 n段の下向き数字ピラミッドを表示する関数を作成せよ。
 * （右図は4段の例）。第i行目にはi % 10によって得られる
 * 数字を表示すること。
 */

#include<iostream>

using namespace std;

int main()
{
	//ピラミッドの段数
    int stepNumber;

    //段数入力を促す
    cout << "段数 : ";

    //段数入力
	cin >> stepNumber;

	//ピラミッド上に記号を配置するためのループ文
    for (int firstCounter = 1 ; firstCounter <= stepNumber; firstCounter++){

    	//段目 - 1個の空白文字を置く
    	for(int secondCounter = 1; secondCounter <= (firstCounter - 1); secondCounter++) {
    		cout << ' ';
    	}

        //(段数 - 段目)*2+1個の数字を置く
    	for(int thirdNumber = 1; thirdNumber <= (stepNumber - firstCounter) * 2 + 1; thirdNumber++) {
    		//置く数字(段目 % 10)を計算
    		cout << firstCounter % 10;
    	}

    	//段数を変えるため改行
    	cout << '\n';
    }
 }
