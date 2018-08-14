/*
* 12-3.h
*
*  Created on: 2018/07/03
*      Author: ddt
*/


/*演習12-3(p.403)で作成した時刻クラスに、各種の演算子関数を追加せよ。仕様などは自分で考えること。*/

#include<string>
#include<sstream>
#include<iostream>


//データメンバとして時刻の3要素を持つTimeClassクラス
class TimeClass {

	int userHour;     //時
	int userMinute;   //分
	int userSecond;   //秒


public:
	/**
	* データメンバを入力値で初期化するコンストラクタ
	* @param inputHour 入力時数, inputMinute 入力分数, inputSecond 入力秒数
	* @author Sawa
	* @since 7.26
	*/
	TimeClass(int inputHour, int inputMinute, int inputSecond) : userHour(inputHour), userMinute(inputMinute), userSecond(inputSecond) {}

	/**
	* TimeClass型オブジェクトが等しいかどうかを判断する演算子関数==
	* @param firstTime secondTime TimeClass型オブジェクト
	* @return bool型の値
	* @author Sawa
	* @since 7.26
	*/
	friend bool operator==(const TimeClass& firstTime, const TimeClass& secondTime)
	{
		//時刻が等しい場合
		if (firstTime.userHour == secondTime.userHour && firstTime.userMinute == secondTime.userMinute && firstTime.userSecond == secondTime.userSecond) {
			//trueを返却
			return true;
		}
		//時刻が等しくない場合falseを返却
		return false;
	}

	/**
	* TimeClass型オブジェクトが等しくないかどうかを判断する演算子関数!=
	* @param firstTime secondTime TimeClass型オブジェクト
	* @return bool型の値
	* @author Sawa
	* @since 7.26
	*/
	friend bool operator!=(const TimeClass& firstTime, const TimeClass& secondTime)
	{
		//演算子関数==を適用して得た値を反転して返却
		return !(firstTime == secondTime);
	}

	/**
	* TimeClass型オブジェクトに時分秒などの文字を加え、文字列として返却する
	* @return 文字列
	* @author Sawa
	* @since 7.26
	*/
	std::string getString() const
	{
		std::ostringstream userString;
		userString << userHour << "時" << userMinute << "分" << userSecond << "秒";
		return userString.str();
	}



	/**
	* TimeClass型オブジェクトに入力秒数を加算代入する演算子関数+=
	* @param inputSecond 入力秒数
	* @return TimeClass型オブジェクト
	* @author Sawa
	* @since 7.26
	*/
	TimeClass& operator+=(int inputSecond)
	{
		//現在の秒数に入力秒数を加算代入
		userSecond += inputSecond;

		//現在の秒数が59以下になるまでループ
		while (userSecond >= 60) {

			//現在の分数をインクリメントし、その値が60以上になった場合
			if (++userMinute >= 60) {

				//現在の時数をインクリメントし、その値が24以上になった場合
				if (++userHour >= 24) {

					//現在の時数を0に設定
					userHour = 0;
				}
				//現在の分数を0に設定
				userMinute = 0;
			}
			//現在の秒数に60を減算代入
			userSecond -= 60;
		}
		//自身への参照を返却
		return *this;
	}

	/**
	* 時刻をインクリメントする後置増分演算子関数++
	* @return TimeClass型のオブジェクトへの参照
	* @author Sawa
	* @since 7.26
	*/
	TimeClass& operator++()
	{
		//加算代入演算子に委託する
		return *this += 1;
	}

	/**
	* 時刻をインクリメントする後置増分演算子関数++
	* @param int型のダミー数値
	* @return TimeClass型のオブジェクトへの参照
	* @author Sawa
	* @since 7.26
	*/
	TimeClass& operator++(int)
	{
		//加算代入演算子に委託する
		return *this += 1;
	}

	/**
	* 時刻を入力秒数だけ進めた時刻を返却する演算子関数+
	* @param userTime 時刻, inputTime 進めたい時間
	* @return TimeClass型のオブジェクト
	* @author Sawa
	* @since 7.26
	*/
	friend TimeClass operator+(const TimeClass& userTime, int inputSecond)
	{
		//計算用に値を保存
		TimeClass temporaryTime = userTime;
		//加算代入演算子に委託する
		return temporaryTime += inputSecond;
	}

	/**
	* TimeClass型オブジェクトに入力秒数を減算代入する演算子関数-=
	* @param inputSecond 入力秒数
	* @return TimeClass型オブジェクト
	* @author Sawa
	* @since 7.26
	*/
	TimeClass& operator-=(int inputSecond)
	{
		//現在の秒数に入力秒数を減算代入
		userSecond -= inputSecond;

		//現在の秒数が0以上になるまでループ
		while (userSecond < 0) {

			//現在の分数をデクリメントし、その値が0より小さくなった場合、
			if (--userMinute < 0) {

				//現在の時数をデクリメントし、その値が0より小さくなった場合、
				if (--userHour == -1) {

					//現在の時数を23に設定
					userHour = 23;
				}
				//現在の分数を59に設定
				userMinute = 59;
			}
			//現在の秒数に60を加算代入
			userSecond += 60;
		}
		//自身への参照を返却
		return *this;
	}

	/**
	* 時刻を入力秒数だけ戻した時刻を返却する演算子関数-
	* @param userTime 時刻, inputTime 戻したい時間
	* @return TimeClass型のオブジェクト
	* @author Sawa
	* @since 7.26
	*/
	friend TimeClass operator-(TimeClass& userTime, int inputSecond)
	{
		//計算用に値をコピーする
		TimeClass temporaryTime = userTime;
		//減算代入演算子に委託する
		return temporaryTime -= inputSecond;
	}

	/**
	* 時刻をデクリメントする前置減分演算子関数--
	* @return TimeClass型のオブジェクトへの参照
	* @author Sawa
	* @since 7.26
	*/
	TimeClass& operator--()
	{
		//減算代入演算子に委託する
		return *this -= 1;
	}

	/**
	* 時刻をデクリメントする後置減分演算子関数--
	* @param int型のダミー数値
	* @return TimeClass型のオブジェクトへの参照
	* @author Sawa
	* @since 7.26
	*/
	TimeClass& operator--(int)
	{
		//減算代入演算子に委託する
		return *this -= 1;
	}
};



/**
* 出力ストリームにTimeClass型の文字列表現を挿入する演算子関数<<
* @param userString 出力ストリーム, userTime 時刻
* @return ostream型への参照 TimeClass型の日付を挿入した出力ストリーム
* @author Sawa
* @since 7.25
*/
inline std::ostream& operator<<(std::ostream& userString, const TimeClass& userTime)
{
	//DateClass型を文字列に直し、出力ストリームに挿入する
	return userString << userTime.getString();
}
