/*
* 11-3.h
*
*  Created on: 2018/06/30
*      Author: ddt
*/

/*演習11-3 演習11-1(p.389)で作成した時刻クラスに挿入子と抽出子を追加せよ*/

#include<string>
#include<sstream>
#include<iostream>

class TimeClass {
	int classHour;   //時
	int classMinute; //分
	int classSecond; //秒


public:
	//コンストラクタの宣言
	TimeClass(int inputHour, int inputMinute, int inputSecond);

	int getHour();     //時を取得するゲッタの宣言
	int getMinute();   //分を取得するゲッタの宣言
	int getSecond();   //秒を取得するゲッタの宣言
	std::string getString() const;
};

/**
* TimeClassのデータメンバを初期化(コンストラクタ)
* @param inputHour 時, inputMinute 分, inputSecond 秒
* @return TimeClass型の変数
* @author Sawa
* @since 7.25
*/
TimeClass::TimeClass(int inputHour, int inputMinute, int inputSecond)
{
	classHour = inputHour;       //時を初期化
	classMinute = inputMinute;   //分を初期化
	classSecond = inputSecond;   //秒を初期化
}

/**
* TimeClassデータメンバの『時』を取得するゲッタ
* @return classHour 時
* @author Sawa
* @since 7.25
*/
int TimeClass::getHour() { return classHour; }

/**
* TimeClassデータメンバの『分』を取得するゲッタ
* @return classMinute 分
* @author Sawa
* @since 7.25
*/
int TimeClass::getMinute() { return classMinute; }

/**
* TimeClassデータメンバの『秒』を取得するゲッタ
* @return classSecond 秒
* @author Sawa
* @since 7.25
*/
int TimeClass::getSecond() { return classSecond; }

/**
* TimeClass型のオブジェクトに時分秒を加えた文字列を返却する
* @return string型の値　TimeClass型の文字列表現
* @author Sawa
* @since 7.26
*/
std::string TimeClass::getString() const
{
	//文字列ストリームを宣言
	std::ostringstream userString;

	//TimeClass型のオブジェクトに時分秒を加えた文字列を文字列ストリームに挿入
	userString << this->classHour << "時" << this->classMinute << "分" << this->classSecond << "秒";

	//文字列ストリームの情報を文字列にして返却
	return userString.str();
}

/**
* 出力ストリームにTimeClass型の文字列表現を挿入
* @param userString 出力ストリーム, userTime TimeClass型オブジェクト
* @return ostream型 TimeClass型オブジェクトの文字列表現を挿入した出力ストリームへの参照
* @author Sawa
* @since 7.26
*/
std::ostream& operator<<(std::ostream& userString, const TimeClass& userTime)
{
	//TimeClass型オブジェクトの文字列表現を挿入した出力ストリームへの参照を返却
	return userString << userTime.getString();
}

