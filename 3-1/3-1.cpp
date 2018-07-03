/*
 * 3-1.cc
 *
 *  Created on: 2018/06/19
 *      Author: syuka
 */

/*演習3-1 読み込んだ整数値の符号を判定するList2-5(p44)を、好きなだけ何度でも
 * 入力・表示を繰り返せるようにしたプログラムを作成せよ。*/

//stringクラスを使うため、<string>ヘッダをインクルード
#include<string>
#include<iostream>

using namespace std;

int main()
{
    //再試行を行うかどうかを判定する文字列の宣言
	string userRetry;

    //入力者が望む回数、符号判定を繰り返す
    do {

    	// 符号を判定したい整数の宣言
    	int firstNumber;

    	//整数の入力
    	cout << "整数値 : ";  cin >> firstNumber;

    	//整数が正の場合
    	if (firstNumber > 0){

    		//値が正であることを表示
    		cout << "その値は正です\n";
    	}

    	//整数が負の場合
    	else if (firstNumber < 0){

    		//値が負であることを表示
    		cout << "その値は負です\n";
    	}

    	//整数が0の場合
    	else{

    		//値が0であることを表示
    		cout << "その値は0です。\n";
    	}

    	//再試行するかを訪ねる
    	cout << "もう一度？ Y・・・Yes / N・・・No";

    	//YesorNoの入力
    	cin >> userRetry;

	//'Y','y'が入力された場合再試行
    }while(userRetry == "Y" || userRetry == "y");
}
