/*
 * 6-10.cpp
 *
 *  Created on: 2018/06/22
 *      Author: syuka
 */

/*演習6-10「正の整数値 : 」と表示して、キーボードから正の整数値を読み込んで、
 * その値を返却する関数read_pintを作成せよ。0や負の値が入力されたら
 * 再入力させること。右の例であれば15を返却する。
 * int read_pint();
 *
 */


#include<iostream>

using namespace std;

/**
*関数内で入力した正の整数値を返却する
* @return positiveInteger　正の整数値
* @author Sawa
* @since 7.17
*/
int printInt()
{
    //返却する正の整数値を宣言
	int positiveInteger;

	//正の整数値が入力されるまでループ
	do{
		//正の整数値入力を促す
		cout << "正の整数値 : ";

	    //整数入力
	    cin >> positiveInteger;

	    //入力された値が正でなければ再試行
      }while (positiveInteger <= 0);

	//入力された正の整数値を返却
    return positiveInteger;
}

int main()
{
//printInt関数を呼び出し、返却された正の整数値を表示
cout << printInt() << "です。\n";
}


