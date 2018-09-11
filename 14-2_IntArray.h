/*
* 14-2.h
*
*  Created on: 2018/07/04
*      Author: ddt
*/


/*演習14-2 クラスIntArrayのオブジェクトを自己初期化する宣言 IntArray x = x では、
*オブジェクトxのデータメンバnelemとvecが不定値で初期化される。自己初期化が行われた際に、
データメンバを不定値で初期化しないようにコピーコンストラクタを改良せよ。
*
*/

#ifndef ___IntArray
#define ___IntArray

//整数配列クラス
class IntArray {
public:
	//コンストラクタ
	explicit IntArray(int);

	//コピーコンストラクタ
	IntArray(const IntArray&);

	//デストラクタ
	~IntArray();

	//整数配列クラスの要素数のゲッタ
	int getSize() const;

	//整数配列クラス同士の代入を可能にする演算子関数=
	IntArray& operator=(const IntArray& x);

	//整数配列クラスを配列として扱えるようにする演算子関数[]
	int& operator[](int);

private:
	int arraySize;     //配列の要素数
	int* arrayPointer; //配列の先頭要素へのポインタ
};

#endif