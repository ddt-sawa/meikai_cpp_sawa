/*演習11-6 演習10-1(p.377)で作成した人間クラスに誕生日を格納するデータメンバ、
それを返却するメンバ関数を追加せよ。*/

#ifndef ___DateClass
#define ___DateClass

#include<string>
//現在の日付を取得するため、<time.h>ヘッダをインクルード
#include<time.h>
//出力ストリームを使用するため、<sstream>ヘッダをインクルード
#include<sstream>
#include<iostream>

//日付の情報を表すDateClassクラスを定義
class DateClass {
	int classYear; //年
	int classMonth;//月
	int classDay;  //日

public:
	/**
	* DateClass型データメンバを現在の日付に初期化するデフォルトコンストラクタ
	* @author Sawa
	* @since 7.25
	*/
	DateClass() {

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
	DateClass(int userYear, int userMonth, int userDay)
	{
		//年を初期化
		this->classYear = userYear;
		//月を初期化
		this->classMonth = userMonth;
		//日を初期化
		this->classDay = userDay;
	}

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
	int getDay()   const { return classDay; }


	/**
	* DateClass型の日付に年月日などの文字を加え、文字列として返却する
	* @return 文字列
	* @author Sawa
	* @since 7.25
	*/
	std::string getString() const
	{
		//文字列ストリームを宣言
		std::ostringstream firstString;

		//文字列ストリームに日付を挿入
		firstString << classYear << "年" << classMonth << "月" << classDay << "日";

		//文字列ストリームを文字列にして返却
		return firstString.str();
	}

};
/**
* 出力ストリームにDateClass型の文字列表現を挿入する演算子関数
* @param firstString 出力ストリーム, argumentDate 日付
* @return ostream型への参照 DateClass型の日付を挿入した出力ストリーム
* @author Sawa
* @since 7.25
*/
std::ostream& operator<<(std::ostream& firstString, const DateClass& firstDate)
{
	//DateClass型を文字列に直し、出力ストリームに挿入する
	return firstString << firstDate.getString();
}

#endif