/*演習14-3 簡易的な文字列クラスStringを作成せよ。以下のコードを参考にして、
コンストラクタ・デストラクタ・各メンバ関数を、自分で設計すること。*/

#ifndef ___MemberDefinition
#define ___MemberDefinition

#include<iostream>

//ユーザー定義したヘッダをインクルード
#include"14-3_StringClass.h"

using namespace std;

/**
* const char*型オブジェクトをStringClass型に変換する変換コンストラクタ
* @param  characterArray 文字列
* @author Sawa
* @since 7.26
*/
StringClass::StringClass(const char* characterArray) {

	//文字列の長さを取得
	for (stringLength = 0; characterArray[stringLength]; ++stringLength);

	//新たに作成した文字列配列の先頭要素へのポインタをデータメンバに代入
	stringPointer = new char[stringLength];

	//文字列配列に文字列をコピーするループ
	for (int firstCounter = 0; firstCounter < stringLength; ++firstCounter) {

		//文字をコピー
		*(stringPointer + firstCounter) = *(characterArray + firstCounter);
	}
}

/**
* StringClassクラスのコピーコンストラクタ
* @param inputString 文字列
* @author Sawa
* @since 7.26
*/
StringClass::StringClass(const StringClass& inputString)
{
	//自己初期化でない場合
	if (&inputString != this) {

		//文字列の長さがコピー先とコピー元で異なる場合
		if (stringLength != inputString.stringLength) {

			//データメンバにコピー元文字列の長さを代入
			stringLength = inputString.stringLength;

			//データメンバに作成した文字配列の先頭要素へのポインタを代入
			stringPointer = new char[stringLength];
		}

		//作成した文字列配列に文字列をコピーするループ
		for (int firstCounter = 0; firstCounter < stringLength; ++firstCounter) {

			//文字をコピー
			*(stringPointer + firstCounter) = *(inputString.stringPointer + firstCounter);
		}
	}
	//自己初期化の場合
	else {
		//要素数0
		stringLength = 0;

		//nullポインタを指す
		stringPointer = nullptr;
	}
}

/**
* StringClass型オブジェクトを破棄するデストラクタ
* @author Sawa
* @since 7.26
*/
StringClass::~StringClass() { delete[] stringPointer; }

/**
* StringClass型のデータメンバである要素数を取得するゲッタ
* @return stringLength 文字配列の要素数
* @author Sawa
* @since 7.27
*/
int StringClass::getLength() { return stringLength; }

/**
* StringClass型のデータメンバである文字列へのポインタを取得するゲッタ
* @return stringPointer 文字列へのポインタ
* @author Sawa
* @since 7.27
*/
char* StringClass::getPointer() { return stringPointer; }

/**
* StringClass型のオブジェクトを文字列にして返却する
* @return string型の値　StringClass型の文字列表現
* @author Sawa
* @since 7.27
*/
string StringClass::getString() const
{
	//文字列ストリームを宣言
	ostringstream userString;

	//StringClass型のオブジェクトを文字列ストリームに挿入するためのループ
	for (int firstCounter = 0; firstCounter < stringLength; ++firstCounter) {

		//要素数ぶんだけ、char型の文字をストリームに挿入
		userString << stringPointer[firstCounter];
	}
	//文字列ストリームの情報を文字列にして返却
	return userString.str();
}

/**
* 文字列1の最後尾に文字列2を追加した合体文字列を表示する演算子関数+
* firstString 文字列1 secondString 文字列2
* @return StringClass型オブジェクト 合体文字列　
* @author Sawa
* @since 7.27
*/
StringClass operator+(StringClass& firstString, StringClass& secondString)
{
	//合体文字列の長さ
	int unionStringLength = firstString.stringLength + secondString.stringLength;

	//合体文字列を格納する文字配列を確保
	char* unionStringPointer = new char[unionStringLength + 1]();

	//文字列1を格納するループ
	for (int firstCounter = 0; firstCounter < firstString.stringLength; ++firstCounter) {

		//ポインタをインクリメントして文字を格納
		*(unionStringPointer + firstCounter) = *(firstString.stringPointer + firstCounter);
	}

	//文字列2を追加するループ
	for (int firstCounter = 0; firstCounter < secondString.stringLength; ++firstCounter) {

		//文字列1の最後尾から文字列2を追加
		*(unionStringPointer + firstString.stringLength + firstCounter) = *(secondString.stringPointer + firstCounter);
	}
	//StringClassオブジェクトを作成し、返却
	return StringClass(unionStringPointer);
}

/**
* StrigClass型の文字列を代入する演算子関数=
* inputString 文字列
* @return 自身への参照　
* @author Sawa
* @since 7.27
*/
StringClass& StringClass::operator=(const StringClass& inputString)
{
	//自己代入でない場合
	if (&inputString != this) {

		//代入前後の要素数が異なる場合
		if (stringLength != inputString.stringLength) {

			//代入先の配列を破棄
			delete[] stringPointer;

			//代入先の要素数を代入元の要素数に設定
			stringLength = inputString.stringLength;

			//代入先配列の領域を確保
			stringPointer = new char[stringLength];
		}
	}
	//文字列をコピーするループ
	for (int firstCounter = 0; firstCounter < inputString.stringLength; ++firstCounter) {

		//文字を代入
		*(stringPointer + firstCounter) = *(inputString.stringPointer + firstCounter);
	}
	//自身への参照を返却
	return *this;
}

/**
* 出力ストリームにStringClass型の文字列表現を挿入
* @param userString 出力ストリーム, inputString StringClass型オブジェクト
* @return ostream型 TimeClass型オブジェクトの文字列表現を挿入した出力ストリームへの参照
* @author Sawa
* @since 7.27
*/
ostream& operator<<(ostream& userString, const StringClass& inputString)
{
	//StringClass型オブジェクトの文字列表現を挿入した出力ストリームへの参照を返却
	return userString << inputString.getString();
}

#endif