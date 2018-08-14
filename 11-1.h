/*
 * 11-1.h
 *
 *  Created on: 2018/06/30
 *      Author: ddt
 */

/*演習11-1 時・分・秒のデータメンバで構成される時刻クラスを作成せよ。コンストラクタやメンバ関数については、自由に設計すること。*/

class TimeClass{
	int classHour;   //時
	int classMinute; //分
	int classSecond; //秒


public:
	//コンストラクタの宣言
	TimeClass(int inputHour, int inputMinute, int inputSecond);

	int getHour();     //時を取得するゲッタの宣言
	int getMinute();   //分を取得するゲッタの宣言
	int getSecond();   //秒を取得するゲッタの宣言
};

/**
* TimeClassのデータメンバを初期化(コンストラクタ)
* @param inputHour 時, inputMinute 分, inputSecond 秒
* @return TimeClass型の変数
* @author Sawa
* @since 7.25
*/
TimeClass::TimeClass (int inputHour, int inputMinute, int inputSecond)
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
int TimeClass::getHour() {return classHour;}

/**
* TimeClassデータメンバの『分』を取得するゲッタ
* @return classMinute 分
* @author Sawa
* @since 7.25
*/
int TimeClass::getMinute() {return classMinute;}

/**
* TimeClassデータメンバの『秒』を取得するゲッタ
* @return classSecond 秒
* @author Sawa
* @since 7.25
*/
int TimeClass::getSecond() {return classSecond;}
