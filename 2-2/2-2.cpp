/*
 * 2-2.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習2-2 List2-5の最後のelseを、else if (n == 0) に変更すると
 どうなるかを検討せよ*/

#include<iostream>

using namespace std;

int main()
{
	//符号を調べたい整数値の宣言
    int firstNumber;

    //整数値の入力を促す
    cout << "整数値 : ";

    //整数値を読み込む
    cin >> firstNumber;

    //整数値が正の場合
    if (firstNumber > 0) {
    	cout << "その値は正です。\n";
    }

    //整数値が負の場合
    else if (firstNumber < 0){
    	cout << "その値は負です。\n";
    }

    //整数値が0で、問題文によりelseではなくelse ifを用いた場合
    else if (firstNumber == 0) {
    	cout << "その値は0です。\n";
    }
}

//コンパイルエラーは表示されない。
