/*
* 13-1.h
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

#ifndef ___DateClass
#define ___DateClass

#include<string>
#include<iostream>

//日付情報を格納するDateClassを定義
class DateClass {
public:
	//変換コンストラクタ
	DateClass(int inputNumber);

	//コンストラクタ
	DateClass(int inputYear, int inputMonth, int inputDay);

	/**
	* その年が閏年かどうかを判断する静的メンバ関数
	* @param theYear その年
	* @return bool型の値
	* @author Sawa
	* @since 7.26
	*/
	static bool leapYear(int theYear);

	/**
	* 年を取得するゲッタ
	* @return userYear 年
	* @author Sawa
	* @since 7.26
	*/
	int getYear() const { return userYear; }

	/**
	* 月を取得するゲッタ
	* @return userMonth 月
	* @author Sawa
	* @since 7.26
	*/
	int getMonth() const { return userMonth; }

	/**
	* 日を取得するゲッタ
	* @return userDay 日
	* @author Sawa
	* @since 7.26
	*/
	int getDay() const { return userDay; }

	/**
	* その年が閏年かどうかを判断するメンバ関数
	* @return bool型の値
	* @author Sawa
	* @since 7.26
	*/
	bool leapYear() const { return leapYear(userYear); }

	/**
	* 日付を一つ戻す
	* @param userDate 日付
	* @return userDate 戻した日付
	* @author Sawa
	* @since 7.26
	*/
	DateClass& precedingDay();

	/**
	* 日付を一つ進める
	* @param userDate 日付
	* @return userDate 進めた日付
	* @author Sawa
	* @since 7.26
	*/
	DateClass& followingDay();

	//年内の経過日数を返却
	int dayofYear() const;

	//曜日を返却
	int dayofWeek() const;

	//DateClassの値に"年月日"を追加して表示する
	std::string getString() const;

	//以下、追加した演算子関数

	/**
	* 二つの日付が等しいかを判断する演算子関数==
	* @param firstDate secondDate 日付
	* @return bool型の値
	* @author Sawa
	* @since 7.26
	*/
	friend bool operator==(const DateClass& firstDate, const DateClass& secondDate);

	/**
	* 二つの日付が等くないかを判断する演算子関数!=
	* @param firstDate secondDate 日付
	* @return bool型の値
	* @author Sawa
	* @since 7.26
	*/
	friend bool operator!=(const DateClass& firstDate, const DateClass& secondDate);

	/**
	* 第一日付が第二日付より大きいかどうかを判断する演算子関数>
	* @param firstDate secondDate 日付
	* @return bool型の値
	* @author Sawa
	* @since 7.26
	*/
	friend bool operator>(const DateClass& firstDate, const DateClass& secondDate);

	/**
	* 第一日付が第二日付以上かどうかを判断する演算子関数>=
	* @param firstDate secondDate 日付
	* @return bool型の値
	* @author Sawa
	* @since 7.26
	*/
	friend bool operator>=(const DateClass& firstDate, const DateClass& secondDate);

	/**
	* 第一日付が第二日付より小さいかどうかを判断する演算子関数>
	* @param firstDate secondDate 日付
	* @return bool型の値
	* @author Sawa
	* @since 7.26
	*/
	friend bool operator<(const DateClass& firstDate, const DateClass& secondDate);

	/**
	* 第一日付が第二日付以下かどうかを判断する演算子関数<=
	* @param firstDate secondDate 日付
	* @return bool型の値
	* @author Sawa
	* @since 7.26
	*/
	friend bool operator<=(const DateClass& firstDate, const DateClass& secondDate);
	/**
	* 日付が何日離れているかを返却する演算子関数-
	* @param firstClass, secondClass 日付
	* @return differenceofDate 日数差
	* @author Sawa
	* @since 7.26
	*/
	long operator-(const DateClass& inputDate) const;

	/**
	* 日付を翌日に更新する前置増分演算子関数++
	* @return 更新した日付への参照
	* @author Sawa
	* @since 7.26
	*/
	DateClass& operator++();

	/**
	* 日付を翌日に更新する後置増分演算子関数++
	* @param int型のダミー値
	* @return 更新した日付への参照
	* @author Sawa
	* @since 7.26
	*/
	DateClass& operator++(int);

	/**
	* 日付を前日に更新する前置増分演算子関数--
	* @return 更新した日付への参照
	* @author Sawa
	* @since 7.26
	*/
	DateClass& operator--();

	/**
	* 日付を前日に更新する後置増分演算子関数--
	* @param int型のダミー値
	* @return 更新した日付への参照
	* @author Sawa
	* @since 7.26
	*/
	DateClass& operator--(int);

	/**
	* 日付を入力日数ぶん進める演算子関数+=
	* @param inputNumberPlus
	* @return 進めた日付への参照
	* @author Sawa
	* @since 7.26
	*/
	DateClass& operator+=(int inputNumberPlus);

	/**
	* 日付を入力日数ぶん戻す演算子関数-=
	* @param inputNumberMinus
	* @return 戻した日付への参照
	* @author Sawa
	* @since 7.26
	*/
	DateClass& operator-=(int inputNumberMinus);

	/**
	* 日付に入力日数を加えた値を返却する演算子関数+
	* @param inputNumberPlut
	* @return 戻した日付への参照
	* @author Sawa
	* @since 7.26
	*/
	DateClass operator+(int inputNumberPlus);

	/**
	* 日付に入力日数を引いた値を返却する演算子関数-
	* @param inputNumberMinus
	* @return 戻した日付への参照
	* @author Sawa
	* @since 7.26
	*/
	DateClass operator-(int inputNumberMinus);

	/**
	* その年の日数を返却
	* @param inputYear 年
	* @return 日数
	* @author Sawa
	* @since 7.26
	*/
	static long returnMaximumDay(int inputYear);

private:
	int userYear;     //年
	int userMonth;    //月
	int userDay;      //日

	//月ごとの最大の日数を静的メンバとして宣言
	static int dayMax[];

	//その年・月における日数（閏年を加味）を求める静的メンバ関数
	static int dayofMonth(int userYear, int userMonth);
};
//出力ストリームにDateClass型の文字列表現を挿入
std::ostream& operator<<(std::ostream& dateString, const DateClass& dateClass);

#endif