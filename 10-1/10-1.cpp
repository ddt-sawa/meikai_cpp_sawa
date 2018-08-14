/*
 * 10-1.cpp
 *
 *  Created on: 2018/06/28
 *      Author: ddt
 */

//演習10-1 名前・身長・体重などをメンバとしてもつ《人間クラス》を自由に定義せよ。

#include<iostream>
#include<string>
using namespace std;


//HumanClass定義
class HumanClass {
	///--- データメンバ ---///
	string userName;      //名前
	string userSex;       //性別
	double userHeight;    //身長
	double userWeight;    //体重

public:
	///--- コンストラクタ ---///
    HumanClass(string inputName, string inputSex, double inputHeight, double inputWeight){
    	userName = inputName;      //名前
    	userSex = inputSex;        //性別
    	userHeight = inputHeight;  //身長
    	userWeight = inputWeight;  //体重
    }


	/**
	* データメンバの名前を返却
	* @return userName 名前
	* @author Sawa
	* @since 7.24
	*/
    string getName(){return userName;}

	/**
	* データメンバの性別を返却
	* @return userSex 性別
	* @author Sawa
	* @since 7.24
	*/
    string getSex(){return userSex;}

	/**
	* データメンバの身長を返却
	* @return userHeight 身長
	* @author Sawa
	* @since 7.24
	*/
    double getHeight(){return userHeight;}

	/**
	* データメンバの体重を返却
	* @return userWeight 体重
	* @author Sawa
	* @since 7.24
	*/
    double getWeight(){return userWeight;}

};

int main()
{
	//個人情報の宣言
	string inputName;   //名前
	string inputSex;    //性別
	double inputHeight; //身長
	double inputWeight; //体重

	cout << "名前 : "; cin >> inputName;    //名前入力
	cout << "性別 : "; cin >> inputSex;     //性別入力
	cout << "身長 : "; cin >> inputHeight;  //身長入力
	cout << "体重 : "; cin >> inputWeight;  //体重入力

	//クラスを初期化
    HumanClass firstPerson(inputName, inputSex, inputHeight, inputWeight);

	//個人情報表示
	cout << "名前" << firstPerson.getName() << '\n';     //名前表示
	cout << "性別" << firstPerson.getSex() << '\n';      //性別表示
	cout << "身長" << firstPerson.getHeight() << "cm\n"; //身長表示
	cout << "体重" << firstPerson.getWeight() << "kg\n"; //体重表示

}
