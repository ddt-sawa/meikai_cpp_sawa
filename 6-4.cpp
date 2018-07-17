/*
 * 6-4.cpp
 *
 *  Created on: 2018/06/22
 *      Author: syuka
 */

/*演習6-4 半径rの円の面積を求めて返却する関数circ_areaを作成せよ。円周率は3.14とする。
 * double circ_area(double r);
 * これ以降の問題では、作成する関数の関数宣言を示します。
 */

#include<iostream>

using namespace std;


/**
*円の面積を返却する
* @param circleRadius 半径
* @return circleArea　面積
* @author Sawa
* @since 7.17
*/
double returnCircleArea(double circleRadius)
{

	//円周率を3.14とする
	const double PI = 3.14;

	//円の面積を計算
	double circleArea = circleRadius * circleRadius * PI;

	//円の面積を返却
	return circleArea;
}

int main()
{
	//円の半径を宣言
	double circleRadius;

	//半径入力を促す
	cout << "円の面積を表示します。" << "半径 : ";

	//半径入力
	cin >> circleRadius;

	//関数に半径の値を渡し、円の面積を表示
	cout << returnCircleArea(circleRadius) << "です。\n";
}


