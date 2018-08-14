/*
* 11-2.h
*
*  Created on: 2018/07/02
*      Author: ddt
*/


/*演習11-2 クラスDate第2版に抽出子を追加せよ
*/

//stringクラステンプレートを使用するため、<string>ヘッダをインクルード
#include<string>
#include<iostream>

//日付の情報を表すDateClassクラスを定義
class DateClass {

	int classYear;  //年
	int classMonth; //月
	int classDay;   //日

public:
	//デフォルトコンストラクタを宣言
	DateClass();
	//コンストラクタを宣言 
	DateClass(int inputYear, int inputMonth = 1, int inputDay = 1);

	/**
	* DateClass型データメンバの『年』を取得するゲッタ
	* @return classYear
	* @author Sawa
	* @since 7.25
	*/
	int getYear()  const { return classYear; }

	/**
	* DateClass型データメンバの『月』を取得するゲッタ
	* @return classMonth
	* @author Sawa
	* @since 7.25
	*/
	int getMonth() const { return classMonth; }

	/**
	* DateClass型データメンバの『日』を取得するゲッタ
	* @return classDay
	* @author Sawa
	* @since 7.25
	*/
	int getDay() const { return classDay; }

	//受け取ったDateClass型日付に対して、その前日の日付を返すメンバ関数
	DateClass calculatePrecedingDay() const;

	//DateClass型日付に年月日などの文字を追加した文字列を返却するメンバ関数
	std::string getString() const;
};

//挿入子の多重定義を行う宣言
std::ostream& operator<<(std::ostream& firstString, const DateClass& firstDate);


