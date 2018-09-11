/*
* 13-1.cpp
*
*  Created on: 2018/07/04
*      Author: ddt
*/

/*演習13-1 日付クラスDate第4版に対して、以下の演算子関数を追加した日付クラスを作成せよ。
*
*  二つの日付が等しいかどうかを判定する等価演算子==
*  二つの日付が等しくないかどうかを判定する等価演算子=!
*  二つの日付の大小関係を判定する関係演算子 > >= < <= (より新しい日付のほうを大きいと判定すること)
*  二つの日付の減算を行う(何日離れているかを求める)減算演算子-
*  （左オペランドから右オペランドを引くこと。左右のオペランドの日付が等しければ0を返し、
*  左オペランドのほうが新しい日付であれば、日付の差を正の値として返し、
*  より古い日付であれば、日付の差を負の値として返すこと）
*  日付を翌日の日付に更新する増分演算子++(前置および後置)
*  日付を前日の日付に更新する減分演算子--(前置および後置)
*  日付をn日進めた日付に更新する複合代入演算子+=
*  日付をn日戻した日付に更新する複合代入演算子-=
*  日付のn日後の日付を求める加算演算子+
*  日付のn日前の日付を求める減算演算子-
*  */

//ostringstreamを使用するため、<sstream>ヘッダをインクルード
#include<sstream>
#include<iostream>
//ユーザー組み込み型ヘッダをインクルード
#include"13-1_MemberDefinition1.h"

using namespace std;

//月ごとの基本日数（閏年除く）
int DateClass::dayMax[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


/**
* その月における日数を返却
* @param userYear 年, userMonth 月
* @return int型の値 日数
* @author Sawa
* @since 7.26
*/
int DateClass::dayofMonth(int userYear, int userMonth)
{
	//その年・月における実際の日数（閏年2月の場合+1）
	return dayMax[userMonth - 1] + (leapYear(userYear) && userMonth == 2);
}

/**
* int型の値をDateClass型に変換するコンストラクタ
* @param inputNumber 日
* @author Sawa
* @since 7.26
*/
DateClass::DateClass(int inputNumber) : userYear(0), userMonth(0), userDay(inputNumber) {}


/**
* DateClass型のコンストラクタ
* @param inputYear 年, inputMonth 月, inputDay 日
* @author Sawa
* @since 7.26
*/
DateClass::DateClass(int inputYear, int inputMonth, int inputDay) : userYear(inputYear), userMonth(inputMonth), userDay(inputDay) {}

/**
* その年が閏年かどうかを返却
* @param theYear 年
* @return bool型の値
* @author Sawa
* @since 7.26
*/
bool DateClass::leapYear(int theYear)
{
	//閏年であればTrue、そうでなければFalseを返却
	return theYear % 4 == 0 && theYear % 100 != 0 || theYear % 400 == 0;
}

/**
* 年内経過日数を返却
* @return progressDays 年内経過日数
* @author Sawa
* @since 7.26
*/
int DateClass::dayofYear() const
{
	//年内経過日数に現在の日にちを代入
	int progressDays = userDay;

	//それ以前の月の日数を年内経過日数に加えるループ
	for (int firstCounter = 1; firstCounter < userMonth; ++firstCounter) {

		//年内経過日数に月の日数を加える
		progressDays += dayofMonth(userYear, 1);
	}
	//年内経過日数を返却
	return progressDays;
}

/**
* 日付を前日の日付に更新
* @param userDate 日付
* @return userDate 更新した日付への参照
* @author Sawa
* @since 7.26
*/
DateClass& DateClass::precedingDay()
{
	//日にちが朔日ではない場合
	if (userDay > 1) {

		//日にちをデクリメント
		--userDay;
	}

	//日にちが朔日の場合
	else {
		//月をデクリメントし、その値が1月の場合
		if (--userMonth < 1)
		{
			//年をデクリメント
			--userYear;

			//月を12月に設定
			userMonth = 12;
		}
		//日にちを月の日数に設定
		userDay = dayofMonth(userYear, userMonth);
	}

	//前日の日付を返却
	return *this;
}

/**
* 日付を翌日の日付に更新
* @param userDate 日付
* @return userDate 更新した日付への参照
* @author Sawa
* @since 7.26
*/
DateClass& DateClass::followingDay() {

	//日にちが月終わりではない場合
	if (userDay < dayofMonth(userYear, userMonth)) {

		//日にちをインクリメント
		++userDay;
	}

	//日にちが月終わりの場合
	else {

		//月をインクリメントし、その値が13月の場合
		if (++userMonth > 12) {

			//年をインクリメント
			++userYear;

			//月を1月に設定
			userMonth = 1;
		}
		//日にちを1日に設定
		userDay = 1;
	}

	//更新した日付への参照を返却
	return *this;
}

/**
* DateClass型のオブジェクトに年月日を加えた文字列を返却する
* @return string型の値　DateClass型の文字列表現
* @author Sawa
* @since 7.25
*/
string DateClass::getString() const
{
	//文字列ストリームを宣言
	ostringstream userString;

	//DateClass型のオブジェクトに年月日を加えた文字列を文字列ストリームに挿入
	userString << userYear << "年" << userMonth << "月" << userDay << "日";

	//文字列ストリームの情報を文字列にして返却
	return userString.str();
}

/**
* 日付の曜日に対応した整数を返却する
* @return int型の値 0-6(日-土に対応)
* @author Sawa
* @since 7.25
*/
int DateClass::dayofWeek() const
{
	///曜日計算用に年を保存
	int weekYear = userYear;

	//曜日計算用に月を保存
	int weekMonth = userMonth;

	//1月あるいは2月の場合
	if (weekMonth == 1 || weekMonth == 2) {

		//計算用の年をデクリメント
		--weekYear;

		//計算用の月に12を加算代入
		weekMonth += 12;
	}

	//ツェラーの公式に基づいて、曜日に対応する整数を返却
	return (weekYear + weekYear / 4 - weekYear / 100 + weekYear / 400 + (13 * weekMonth + 8) / 5 + userDay) % 7;
}

//以下、追加した演算子関数

/**
* 二つの日付が等しいかを判断する演算子関数==
* @param firstDate secondDate 日付
* @return bool型の値
* @author Sawa
* @since 7.26
*/
bool operator==(const DateClass& firstDate, const DateClass& secondDate) {
	//日付が等しければTrue、そうでなければFalseを返却
	return firstDate.userYear == secondDate.userYear && firstDate.userMonth == secondDate.userMonth && firstDate.userDay == secondDate.userDay;
}

/**
* 二つの日付が等くないかを判断する演算子関数!=
* @param firstDate secondDate 日付
* @return bool型の値
* @author Sawa
* @since 7.26
*/
bool operator!=(const DateClass& firstDate, const DateClass& secondDate) {
	//日付が等しければFalse、そうでなければTrueを返却
	return !(firstDate.userYear == secondDate.userYear && firstDate.userMonth == secondDate.userMonth && firstDate.userDay == secondDate.userDay);
}

/**
* 第一日付が第二日付より大きいかどうかを判断する演算子関数>
* @param firstDate secondDate 日付
* @return bool型の値
* @author Sawa
* @since 7.26
*/
bool operator>(const DateClass& firstDate, const DateClass& secondDate) {

	//日付の年数が異なる場合
	if (firstDate.userYear != secondDate.userYear) {

		//年数の大小を比較
		return firstDate.userYear > secondDate.userYear;
	}

	//そうでなく、日付の月数が異なる場合
	else if (firstDate.userMonth != secondDate.userMonth) {

		//月数の大小を比較
		return firstDate.userMonth > secondDate.userMonth;
	}

	//そうでない場合
	else {

		//日にちの大小を比較
		return firstDate.userDay > secondDate.userDay;
	}
}

/**
* 第一日付が第二日付以上かどうかを判断する演算子関数>=
* @param firstDate secondDate 日付
* @return bool型の値
* @author Sawa
* @since 7.26
*/
bool operator>=(const DateClass& firstDate, const DateClass& secondDate) {

	//日付の年数が異なる場合
	if (firstDate.userYear != secondDate.userYear) {

		//年数の大小を比較
		return firstDate.userYear > secondDate.userYear;
	}

	//そうでなく、日付の月数が異なる場合
	else if (firstDate.userMonth != secondDate.userMonth) {

		//月数の大小を比較
		return firstDate.userMonth > secondDate.userMonth;
	}

	//そうでない場合
	else {

		//日にちの大小等価を比較
		return firstDate.userDay >= secondDate.userDay;
	}
}

/**
* 第一日付が第二日付より小さいかどうかを判断する演算子関数>
* @param firstDate secondDate 日付
* @return bool型の値
* @author Sawa
* @since 7.26
*/
bool operator<(const DateClass& firstDate, const DateClass& secondDate) {

	//日付の年数が異なる場合
	if (firstDate.userYear != secondDate.userYear) {

		//年数の大小を比較
		return firstDate.userYear < secondDate.userYear;
	}

	//そうでなく、日付の月数が異なる場合
	else if (firstDate.userMonth != secondDate.userMonth) {

		//月数の大小を比較
		return firstDate.userMonth < secondDate.userMonth;
	}

	//そうでない場合
	else {

		//日にちの大小を比較
		return firstDate.userDay < secondDate.userDay;
	}
}

/**
* 第一日付が第二日付以下かどうかを判断する演算子関数<=
* @param firstDate secondDate 日付
* @return bool型の値
* @author Sawa
* @since 7.26
*/
bool operator<=(const DateClass& firstDate, const DateClass& secondDate) {

	//日付の年数が異なる場合
	if (firstDate.userYear != secondDate.userYear) {

		//年数の大小を比較
		return firstDate.userYear < secondDate.userYear;
	}

	//そうでなく、日付の月数が異なる場合
	else if (firstDate.userMonth != secondDate.userMonth) {

		//月数の大小を比較
		return firstDate.userMonth < secondDate.userMonth;
	}

	//そうでない場合
	else {

		//日にちの大小等価を比較
		return firstDate.userDay <= secondDate.userDay;
	}
}

/**
* 日付が何日離れているかを返却する演算子関数-
* @param firstClass, secondClass 日付
* @return differenceofDate 日数差
* @author Sawa
* @since 7.26
*/
long DateClass::operator-(const DateClass& inputDate) const
{
	//合計日数差
	long differenceofDate = 0;

	//自身の年内経過日数
	long selfValue = this->dayofYear();

	//引数の年内経過日数
	long inputValue = inputDate.dayofYear();

	//両日付の年数が等しい場合
	if (userYear == inputDate.userYear) {

		//年内経過日数の差が合計日数差となる
		differenceofDate = selfValue - inputValue;
	}

	//そうでなく、自身の年数の方が大きい場合の場合
	else if (userYear > inputDate.userYear) {

		//合計日数差に、引数のその年における残り日数を加算し、さらに自身の年内経過日数を加算する
		differenceofDate = returnMaximumDay(inputDate.userYear) - inputValue + selfValue;

		//両日付の年数差-1（既に1年分は前行で計算しているため）を日数差に換算するループ
		for (int firstCounter = inputDate.userYear + 1; firstCounter < userYear; ++firstCounter) {

			//年数差を日数差に変換し、合計日数差に加算代入する
			differenceofDate += returnMaximumDay(firstCounter);
		}
	}
	//そうでなく、引数の年数の方が大きい場合の場合
	else {
		//合計日数差に、引数のその年における残り日数を加算し、さらに自身の年内経過日数を加算する
		differenceofDate = -(returnMaximumDay(userYear) + inputValue - selfValue);

		//両日付の年数差-1（既に1年分は前行で計算しているため）を日数差に換算するループ
		for (int firstCounter = userYear + 1; firstCounter < inputDate.userYear; ++firstCounter) {

			//年数差を日数差に変換し、合計日数差に加算代入する
			differenceofDate += returnMaximumDay(firstCounter);
		}
	}
	//合計日数差を返却する
	return differenceofDate;
}

/**
* 日付を翌日に更新する前置増分演算子関数++
* @return 更新した日付への参照
* @author Sawa
* @since 7.26
*/
DateClass& DateClass::operator++()
{
	//日付を翌日に更新する関数に委託
	return followingDay();
}

/**
* 日付を翌日に更新する後置増分演算子関数++
* @param int型のダミー値
* @return 更新した日付への参照
* @author Sawa
* @since 7.26
*/
DateClass& DateClass::operator++(int)
{
	//日付を翌日に更新する関数に委託
	return followingDay();
}

/**
* 日付を前日に更新する前置増分演算子関数--
* @return 更新した日付への参照
* @author Sawa
* @since 7.26
*/
DateClass& DateClass::operator--() {

	//日付を前日に更新する関数に委託
	return precedingDay();
}

/**
* 日付を前日に更新する後置増分演算子関数--
* @param int型のダミー値
* @return 更新した日付への参照
* @author Sawa
* @since 7.26
*/
DateClass& DateClass::operator--(int) {

	//日付を前日に更新する関数に委託
	return precedingDay();
}

/**
* 日付を入力日数ぶん進める演算子関数+=
* @param inputNumberPlus
* @return 進めた日付への参照
* @author Sawa
* @since 7.26
*/
DateClass& DateClass::operator+=(int inputNumberPlus) {

	//翌日の日付に更新する関数を、進めたい日付ぶん呼び出すループ
	for (int firstCounter = 0; firstCounter < inputNumberPlus; firstCounter++) {

		//翌日の日付に更新
		followingDay();
	}
	//進めた日付への参照を返却
	return *this;
}

/**
* 日付を入力日数ぶん戻す演算子関数-=
* @param inputNumberMinus
* @return 戻した日付への参照
* @author Sawa
* @since 7.26
*/
DateClass& DateClass::operator-=(int inputNumberMinus)
{
	//前日の日付に更新する関数を、戻したい日付ぶん呼び出すループ
	for (int firstCounter = 0; firstCounter < inputNumberMinus; firstCounter++) {

		//前日の日付に更新
		precedingDay();
	}
	//戻した日付への参照を返却
	return *this;
}

/**
* 日付に入力日数を加えた値を返却する演算子関数+
* @param inputNumberPlut
* @return 戻した日付への参照
* @author Sawa
* @since 7.26
*/
DateClass DateClass::operator+(int inputNumberPlus)
{
	//計算用の値を保存
	DateClass copyClass = *this;

	//演算子関数+=に委託
	return copyClass += inputNumberPlus;
}

/**
* 日付に入力日数を引いた値を返却する演算子関数-
* @param inputNumberMinus
* @return 戻した日付への参照
* @author Sawa
* @since 7.26
*/
DateClass DateClass::operator-(int inputNumberMinus)
{
	//計算用の値を保存
	DateClass copyClass = *this;

	//演算子関数+=に委託
	return copyClass -= inputNumberMinus;
}

/**
* その年の日数を返却
* @param inputYear 年
* @return 日数
* @author Sawa
* @since 7.26
*/
long DateClass::returnMaximumDay(int inputYear)
{
	//閏年なら366を、そうでなければ365を返却する
	return 365 + leapYear(inputYear);
}

/**
* 出力ストリームにDateClass型の文字列表現を挿入
* @param userString 出力ストリーム, userDate DateClass型オブジェクト
* @return ostream型 TimeClass型オブジェクトの文字列表現を挿入した出力ストリームへの参照
* @author Sawa
* @since 7.26
*/
ostream& operator<<(ostream& userString, const DateClass& userDate)
{
	//DateClass型オブジェクトの文字列表現を挿入した出力ストリームへの参照を返却
	return userString << userDate.getString();
}
