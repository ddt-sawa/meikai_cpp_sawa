/*
 * 12-2.cpp
 *
 *  Created on: 2018/07/03
 *      Author: ddt
 */

 /*演習12-2 クラスBoolean(TruthClassに変更)に対して、v(userValueに変更)がFalseであれば
 * bool型のtrueを、Trueであればbool型のfalseを返却する演算子関数!を追加せよ
 */

#include<iostream>
#include"12-2.h"

using namespace std;

/**
* 2引数に論理演算子を適用した評価値を、TruthClass型オブジェクトとして返却する
* @param firstInteger secondInteger 整数
* @return TruthClass型オブジェクト
* @author Sawa
* @since 7.26
*/
TruthClass checkEqual(int firstInteger, int secondInteger)
{
	return firstInteger == secondInteger;
}

int main()
{
	//データメンバに代入する値
	int integerValue = 1;

	//データメンバがTrueになるよう値を代入
	TruthClass firstTruth(integerValue); 

	//論理否定演算子を適用した値を表示 Falseを確認
	cout << (static_cast<const char*>(TruthClass(!firstTruth)));    
}

