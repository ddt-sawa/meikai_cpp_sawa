/*
* 12-1.h
*
*  Created on: 2018/07/02
*      Author: ddt
*/


/*演習12-1 前置演算子と後置演算子は行うことがほぼ同じであるため、似たようなコードが各演算子関数に
* 散らばっている(たとえば、増分演算子中のif文は前置版と後置版で同一であるし、減分演算子中の
* if分も前置版と後置版で同一である)。
* 前置演算子関数から後置演算子関数を呼び出すか、もしくは後置演算子関数から前置演算子関数を
* 呼び出すかのいずれかに変更せよ。なお、どちらの実現が好ましいのかも検討すること。
*/

/*後置増分演算子は自らの値をコピーする手間がかかり高コストであるため、
後置増分子関数から前置増分子関数を呼び出すように変更する。*/


#ifndef ___CounterClass
#define ___CounterClass

#include<climits>


//クラスCounterClassの宣言
class CounterClass {

	//カウントに使う整数
	int userCount;

public:

	/**
	* カウントに使う整数を0で初期化するデフォルトコンストラクタ
	* @author Sawa
	* @since 7.25
	*/
	CounterClass() : userCount(0) {}

	/**
	* ConterClass型オブジェクトをunsigned型に変換するメンバ関数
	* @return userCount カウントに使う整数
	* @author Sawa
	* @since 7.25
	*/
	operator unsigned() const { return userCount; }

	/**
	* ConterClass型オブジェクトに論理否定演算子を適用できるようにするメンバ演算子関数
	* @return bool型の値 カウントに使う整数が0であればtrueを、そうでなければfalseを返す
	* @author Sawa
	* @since 7.25
	*/
	bool operator!() const { return userCount == 0; }

	/**
	* CounterClass型オブジェクトに前置増分演算子を適用できるようにするメンバ演算子関数
	* @return 増分した自身への参照
	* @author Sawa
	* @since 7.25
	*/
	CounterClass& operator++() {

		//データメンバがunsigned型で表現できる最大値より小さい場合
		if (userCount < UINT_MAX) {

			//データメンバをインクリメント
			++userCount;
		}
		//自身への参照を返す
		return *this;
	}

	/**
	* CounterClass型オブジェクトに後置増分演算子を適用できるようにするメンバ演算子関数
	* @return 増分した自身
	* @author Sawa
	* @since 7.25
	*/
	CounterClass operator++(int) {

		//課題に従い、前置増分演算子関数を呼び出す
		return operator++();
	}

	/**
	* CounterClass型オブジェクトに前置減分演算子を適用できるようにするメンバ演算子関数
	* @return 減分した自身への参照
	* @author Sawa
	* @since 7.25
	*/
	CounterClass& operator--() {

		//データメンバがunsigned型で表現できる最小値(0)より大きい場合
		if (userCount > 0) {
			//データメンバをデクリメント
			userCount--;
		}
		//自身への参照を返す
		return *this;
	}

	/**
	* CounterClass型オブジェクトに後置減分演算子を適用できるようにするメンバ演算子関数
	* @return 減分した自身
	* @author Sawa
	* @since 7.25
	*/
	CounterClass operator--(int) {

		//課題に従い、前置増分演算子関数を呼び出す
		return operator--();
	}

};

#endif 
