/*
 * 6-12.cpp
 *
 *  Created on: 2018/06/23
 *      Author: syuka
 */

/*演習6-12 b以上a以下の全整数の和を求める関数sumを作成せよ。なお、
 * bに対する実引数が省略されて呼び出された場合は、bを1とみなして合計を求めること。
 */

#include<iostream>

using namespace std;

//関数名         : returnSum
//仕様           : 第二引数以上第一引数以下の全整数の総和を返却する、第二引数の値が指定されなかった場合、第二引数は1とする
//引数           : int型変数firstArgument(第一引数)、secondArgument(第二引数)
//返り値         : 総和(entireSum)
//作成者         : sawa
//日付           : 7/11
int returnSum(int firstArgument,int secondArgument = 1)
{
	//第二引数以上第一引数以下の全整数の総和を0で初期化
    int entireSum = 0;

    //総和を計算するループ
    for (int counterVariable = secondArgument; counterVariable < firstArgument;  ++counterVariable) {

    	//総和に整数値を代入
    	entireSum += counterVariable;
    }

//総和を返却
    return entireSum;
}

int main()
{
	//表示する値の概要を告知
	cout << "b以上a以下の全整数の総和を求めます。\n";

	//整数a
	int firstArgument;

	//aの入力を促す
    cout << "aの値 : ";

    //aの入力
    cin >> firstArgument;

    //整数b
    int secondArgument;

    //bの入力を促す
    cout << "bの値 : ";

    //bの入力
    cin  >> secondArgument;

    //sum関数へ引数を渡し、返却値となる総和を表示
    cout << "合計値は" << returnSum(firstArgument, secondArgument) << "です。\n";
}
