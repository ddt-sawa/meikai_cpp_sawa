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
	//int型整数nの宣言
    int n;

    //nの入力を促す
    cout << "整数値 : ";

    //nに整数値を読み込む
    cin >> n;

    //nが正の場合
    if (n > 0)
    	cout << "その値は正です。\n";

    //nが負の場合
    else if (n < 0)
    	cout << "その値は負です。\n";

    //nがゼロで、else ではなくelse ifを用いた場合
    else if (n == 0)
    	cout << "その値は0です。\n";
}

//コンパイルエラーは表示されない
