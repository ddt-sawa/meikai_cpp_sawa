/*
 * 12-2.h
 *
 *  Created on: 2018/07/03
 *      Author: ddt
 */

/*演習12-2 クラスBoolean(TruthClassに変更)に対して、v(userValueに変更)がFalseであれば
 * bool型のtrueを、Trueであればbool型のfalseを返却する演算子関数!を追加せよ
 */

#ifndef ___Boolean
#define ___Boolean

#include<iostream>

class TruthClass {
public:
	//truthValue型の列挙子を設定
	enum TruthValue {False, True};

private:
	//データメンバを宣言
	TruthValue userValue;

public:

	/**
	* データメンバにFalseを代入するデフォルトコンストラクタ
	* @author Sawa
	* @since 7.25
	*/
	TruthClass() : userValue(False) {}

	/**
	* 0が入力された場合Falseを、それ以外の整数値が入力された場合Trueをデータメンバに代入する変換コンストラクタ
	* @integerValue 整数値
	* @author Sawa
	* @since 7.25
	*/
	TruthClass(int integerValue) : userValue(integerValue == 0 ? False : True) {}

	/**
	* TruthValue型のデータメンバをint型に変換する変換関数
	* @return userValue Trueか 
	* @author Sawa
	* @since 7.25
	*/
	//日付           : 7/3
	operator int() const {return userValue;}


	/**
	* TruthValue型変数をconst char*型変数に変換する
	* @return const char*型　"False"or"True"
	* @author Sawa
	* @since 7.26
	*/
	operator const char*() const {return userValue == False ? "False" : "True";}

	/**
	* TruthClass型オブジェクトに論理否定演算子!を適用可能にし、データメンバがTrueならFalseを、FalseならTrueを返却する
	* @return bool型の値 "False"or "True"
	* @author Sawa
	* @since 7.26
	*/
	bool operator!() const {return userValue == False ? True : False;}

};//クラス定義終了

  /**
  * 出力ストリームにTruthClass型をconst char*型に変換した文字列表現を挿入する演算子関数
  * @param userString 出力ストリーム, userTruth TruthClass型オブジェクトへの参照 
  * @return ostream型への参照 文字列表現を挿入した出力ストリーム
  * @author Sawa
  * @since 7.25
  */
inline std::ostream& operator<<(std::ostream& userString, TruthClass& userTruth) {

	//TruthClass型からconst char*型への変換関数を呼び出し、出力ストリームに挿入
	return userString << static_cast<const char*>(userTruth);
}


#endif /* 12_2_H_ */
