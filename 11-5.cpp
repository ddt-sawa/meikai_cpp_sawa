/*
* 11-5.cpp
*
*  Created on: 2018/07/02
*      Author: ddt
*/

/*演習11-5 日付（年・月・日)を読み込んで、その曜日を求めて返却するプログラムを
* 作成せよ。クラスDate第3版を利用すること。
*/

#include<time.h>
#include<sstream>
#include<iostream>
#include "11-5.h"

using namespace std;

//曜日を格納した配列
const char* dayofWeek[] = { "日", "月", "火", "水", "木", "金", "土" };

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
DateClass::DateClass(int userYear, int userMonth, int userDay)
{
	//年を初期化
	this->classYear = userYear;
	//月を初期化
	this->classMonth = userMonth;
	//日を初期化
	this->classDay = userDay;
}
/**
* 受け取ったDateClass型日付に対して、その前日の日付を返すメンバ関数
* @return DateClass型の値 前日の日付
* @author Sawa
* @since 7.25
*/
DateClass DateClass::calculatePrecedingday() const
{
	//月ごとの日数を表す配列
	int dayMax[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	//操作用のDateClass型情報を保存
	DateClass temporaryDay = *this;

	//現在の日数が朔日ではない場合
	if (temporaryDay.classDay > 1) {

		//日数を一つ減らす
		--temporaryDay.classDay;
	}
	//現在の日数が朔日の場合
	else {
		//月数をデクリメントし、その値が1より小さい(0月)の場合
		if (--temporaryDay.classMonth < 1) {

			//年数をデクリメント
			--temporaryDay.classYear;

			//月数を12月に設定
			temporaryDay.classMonth = 12;
		}
		//日数を月の最大値に設定
		temporaryDay.classDay = dayMax[temporaryDay.classMonth - 1];
	}
	//前日の日付を返却
	return temporaryDay;
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
ostream& operator<<(ostream& firstString, const DateClass& firstDate)
{
	//DateClass型を文字列に直し、出力ストリームに挿入する
	return firstString << firstDate.getString();
}

/**
* 日付に応じて曜日を表す整数を返却
* @return int型の値 (0-6が日-土に対応)
* @author Sawa
* @since 7.25
*/
int DateClass::checkDayofWeek() const
{
	//年を計算用に保存
	int temporaryYear = classYear;

	//月を計算用に保存
	int temporaryMonth = classMonth;

	//1月及び2月の場合
	if (temporaryMonth == 1 || temporaryMonth == 2) {

		//計算用年数をデクリメント
		--temporaryYear;

		//計算用月数を12増やす
		temporaryMonth += 12;
	}

	//ツェラーの公式に基づいて、日付に対応する曜日(整数値)を返却
	return (temporaryYear + temporaryYear / 4 - temporaryYear / 100 + temporaryYear / 400 + (13 * temporaryMonth + 8) / 5 + classDay) % 7;
}

int main()
{
	//年
	int inputYear;

	//年の入力を促す
	cout << "西暦を入力してください。";

	//入力
	cin >> inputYear;

	//月
	int inputMonth;

	//月の入力を促す
	cout << "月を入力してください。";

	//入力
	cin >> inputMonth;

	//日
	int inputDay;

	//日の入力を促す
	cout << "日を入力してください。";

	//入力
	cin >> inputDay;

	//DateClass型のオブジェクトを初期化
	DateClass userDate(inputYear, inputMonth, inputDay);

	//入力された日付の曜日を表示
	cout << dayofWeek[userDate.checkDayofWeek()] << "曜日です。\n";
}
