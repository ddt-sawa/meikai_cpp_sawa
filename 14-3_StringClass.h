/*演習14-3 簡易的な文字列クラスStringを作成せよ。以下のコードを参考にして、
コンストラクタ・デストラクタ・各メンバ関数を、自分で設計すること。*/


#ifndef ___String
#define ___String

//出力ストリームの操作を行うため、<sstream>ヘッダをインクルード
#include<sstream>
#include<iostream>

//簡易的文字列クラスStringClassを定義
class StringClass {

	int stringLength;     //文字列の長さ
	char* stringPointer;  //文字列の先頭へのポインタ

public:
    //変換コンストラクタ宣言
	StringClass(const char*);

	//コピーコンストラクタ宣言
	StringClass(const StringClass&);

	//デストラクタ
	~StringClass();

	//文字列の長さのゲッタを宣言
	int getLength();

	//文字列のポインタのゲッタを宣言
	char* getPointer();

	//Stringclass型オブジェクトを文字列表現に直す
	std::string getString() const;

	//StringClass型オブジェクトの代入を可能にする演算子関数=
	StringClass& operator=(const StringClass& inputString);

	//StringClass型オブジェクトの加算(文字列を繋げる)を可能にする演算子関数+
	friend StringClass operator+(StringClass& firstString, StringClass& secondString);
};

//StringClass型オブジェクトを出力できるようにする演算子関数<<
std::ostream& operator<<(std::ostream& dateString, const StringClass& inputString);


#endif
