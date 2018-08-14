/*
* 11-2.cpp
*
*  Created on: 2018/07/02
*      Author: ddt
*/

/*演習11-2 クラスDate第2版に抽出子を追加せよ
*/

//現在の日付を取得するため<time.h>ヘッダをインクルード
#include<time.h>
//文字列ストリームを操作するため<sstream>ヘッダをインクルード
#include<sstream>
#include<iostream>
//ユーザー定義ヘッダをインクルード
#include "11-2.h"

using namespace std;

/**
* DateClass型データメンバを現在の日付に初期化するデフォルトコンストラクタ
* @author Sawa
* @since 7.25
*/
DateClass::DateClass() {

	//現在の日付を取得
	time_t currentDate = time(NULL);

	//取得した日付を格納する構造体を宣言
	struct tm exactTime;

	//取得した日付を構造体に格納
	localtime_s(&exactTime, &currentDate);

	//年を初期化
	classYear = exactTime.tm_year + 1900;

	//月を初期化
	classMonth = exactTime.tm_mon + 1;

	//日を初期化
	classDay = exactTime.tm_mday;
}

/**
* DateClass型のデータメンバを入力値またはデフォルト仮引数で初期化するコンストラクタ
* @param inputYear 年, inputMonth 月, inputDay 日
* @return DateClass型の値 入力した日付
* @author Sawa
* @since 7.25
*/
DateClass::DateClass(int inputYear, int inputMonth, int inputDay)
{
	//年を初期化
	classYear = inputYear;

	//月を初期化
	classMonth = inputMonth;

	//日を初期化
	classDay = inputDay;
}

/**
* 受け取ったDateClass型日付に対して、その前日の日付を返すメンバ関数
* @return DateClass型の値 前日の日付
* @author Sawa
* @since 7.25
*/
DateClass DateClass::calculatePrecedingDay() const
{
	//月ごとの日数を表す配列
	int dayMax[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	//操作用のDateClass型情報を保存
	DateClass temporaryDate = *this;

	//現在の日数が朔日ではない場合
	if (temporaryDate.classDay > 1) {

		//日数を一つ減らす
		--temporaryDate.classDay;
	}
	//現在の日数が朔日の場合
	else {
		//月数をデクリメントし、その値が1より小さい(0月)の場合
		if (--temporaryDate.classMonth < 1) {

			//年数をデクリメント
			--temporaryDate.classYear;

			//月数を12月に設定
			temporaryDate.classMonth = 12;
		}
		//日数を月の最大値に設定
		temporaryDate.classDay = dayMax[temporaryDate.classMonth - 1];
	}
	//前日の日付を返却
	return temporaryDate;
}

/**
* DateClass型の日付に年月日などの文字を加え、文字列として返却する
* @return 文字列
* @author Sawa
* @since 7.25
*/
string DateClass::getString() const
{
	//文字列ストリームを宣言
	ostringstream firstString;

	//文字列ストリームに日付を挿入
	firstString << classYear << "年" << classMonth << "月" << classDay << "日";

	//文字列ストリームを文字列にして返却
	return firstString.str();
}

/**
* 出力ストリームにDateClass型の文字列表現を挿入する演算子関数
* @param firstString 出力ストリーム, argumentDate 日付
* @return ostream型への参照 DateClass型の日付を挿入した出力ストリーム
* @author Sawa
* @since 7.25
*/
ostream& operator<<(ostream& firstString, const DateClass& argumentDate)
{
	//DateClass型を文字列に直し、出力ストリームに挿入する
	return firstString << argumentDate.getString();
}
int main()
{
	//表示する値の説明
	cout << "今日の日付と前日の日付を表示します。\n";

	//文字列表現での本日の日付
	string stringDate = "2018/7/25";

	//文字列ストリームを宣言し本日の日付を接続先とする
	istringstream inputStringDate(stringDate);

	int inputYear;    //年
	int inputMonth;   //月
	int inputDay;     //日
	char unusedSlash; //除去すべきスラッシュ

					  //文字列ストリームからスラッシュ文字を除き、年月日の整数値を抽出
	inputStringDate >> inputYear >> unusedSlash >> inputMonth >> unusedSlash >> inputDay;

	//本日の日付
	DateClass userDate(inputYear, inputMonth, inputDay);

	//本日の日付を表示
	cout << "今日は" << userDate << "です。\n";

	//昨日の日付を表示
	cout << "昨日は" << userDate.calculatePrecedingDay() << "です。\n";
}
