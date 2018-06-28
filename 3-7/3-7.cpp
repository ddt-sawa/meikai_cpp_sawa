/*
 * 3-7.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習3-7 右に示すように、正の整数値を読み込んで、
 * その桁数を出力するプログラムを作成せよ。。*/

#include<iostream>

using namespace std;

int main()
{
	//入力する正の整数値を表すint型変数nの宣言
	int n;

	//nに正の整数が与えられるまで以下の処理を繰り返す
    do{

	//nの入力を促す
	    cout << "正の整数値 : ";

	//nに入力された値を読み込む
	    cin >> n;

    }while (n <= 0);

	//桁数を表すint型変数iを初期化
	int i = 0;

	//整数値が存在する限り、nを10で割り桁数のカウント増やし続ける
	while (n >= 1){
		n /= 10;
		i++;
	}
cout << "その値は" << i << "桁です。\n";
}
