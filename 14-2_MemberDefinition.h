/*演習14-2 クラスIntArrayのオブジェクトを自己初期化する宣言 IntArray x = x では、
*オブジェクトxのデータメンバnelemとvecが不定値で初期化される。自己初期化が行われた際に、
*データメンバを不定値で初期化しないようにコピーコンストラクタを改良せよ。
*/

#ifndef ___MemberDefinition
#define ___MemberDefinition

#include"14-2_IntArray.h"

/**
* IntArrayクラスのコンストラクタ
* @param arraySize 整数配列クラスの要素数
* @author Sawa
* @since 7.26
*/
IntArray::IntArray(int arraySize) : arraySize(arraySize) { arrayPointer = new int[arraySize]; }

/**
* intArrayクラスのコピーコンストラクタ
* @param inputArray IntArray型への参照
* @author Sawa
* @since 7.26
*/
IntArray::IntArray(const IntArray& inputArray) {

	//実引数のポインタが自身ではない(自己初期化ではない)場合
	if (&inputArray != this) {

		//要素数を初期化
		arraySize = inputArray.arraySize;

		//領域を確保
		arrayPointer = new int[arraySize];

		//要素数の回数だけ
		for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter) {

			//値の代入を行う
			arrayPointer[firstCounter] = inputArray.arrayPointer[firstCounter];
		}
	}
	//自己初期化が発生した場合、要素数0、nullポインタをデータメンバに持つ整数配列オブジェクトを作成する
	else {
		arraySize = 0;                       // 要素数0
		arrayPointer = nullptr;               //nullポインタ
	}
}

/**
* IntArray型オブジェクトを破棄するデストラクタ
* @author Sawa
* @since 7.26
*/
IntArray::~IntArray() { delete[] arrayPointer; };

/**
* IntArray型オブジェクトのデータメンバである、配列の要素数を取得するゲッタ
* @return arraySize 配列の要素数
* @author Sawa
* @since 7.26
*/
int IntArray::getSize() const { return arraySize; }


/**
* IntArray型オブジェクトに適用する演算子関数=
* @param inputArray 代入元のIntArray型オブジェクト
* @return 代入を行った自らへの参照
* @author Sawa
* @since 7.26
*/
IntArray& IntArray::operator=(const IntArray& inputArray)
{
	//実引数のポインタが自身ではない場合
	if (&inputArray != this) {

		//代入する要素数が代入先と等しくない場合
		if (arraySize != inputArray.arraySize) {

			//代入先の配列を削除
			delete[] arrayPointer;

			//要素数を初期化
			arraySize = inputArray.arraySize;

			//領域を確保
			arrayPointer = new int[arraySize];
		}
		//要素数だけ値の代入を行うループ
		for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter) {

			//値をコピー
			arrayPointer[firstCounter] = inputArray.arrayPointer[firstCounter];
		}
	}
	//自らへの参照を返す
	return *this;
}

/**
* IntArray型オブジェクトに[]を適用するための演算子関数[]
* @param arrayNumber 要素の添字
* @return 要素へのポインタ
* @author Sawa
* @since 7.26
*/
int& IntArray::operator[](int arrayNumber) { return arrayPointer[arrayNumber]; }

#endif