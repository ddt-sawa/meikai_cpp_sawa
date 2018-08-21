/*演習14-4 簡易的な表列クラスMatrixを作成せよ。以下のコードを参考にして、
*コンストラクタ・デストラクタ・各メンバ関数を自分で設計すること。
*
* class Matrix {
*    int _height;              行数
*    int _width;　　　　　　　 列数
*    double* ptr;　　　　　　　先頭要素へのポインタ
*
* public:
*    Matrix(int,int);　　　　　コンストラクタ
*    Matrix(const Matrix&);    コピーコンストラクタ
*    ~Matrix();    　　　　　　デストラクタ
*
* +,-,*,=などの演算子を定義せよ。
*/

#ifndef ___MatrixMember
#define ___MatrixMember

//stringクラステンプレートを使用するため、<string>ヘッダをインクルード
#include<string>

//出力ストリームを操作するため、<sstream>ヘッダをインクルード
#include<sstream>
#include<iostream>
#include"14-4_MatrixClass.h"

using namespace std;

/**
* MatrixClass型オブジェクトのコンストラクタ
* @param inputHeight 行数,  inputWidth 列数
* @author Sawa
* @since 7.27
*/
MatrixClass::MatrixClass(int inputHeight, int inputWidth) : matrixHeight(inputHeight), matrixWidth(inputWidth)
{
	//行×列ぶんの要素数を持つ一次元配列を確保して初期化
	matrixPointer = new double[inputHeight * inputWidth]();
}

/**
* MatrixClass型オブジェクトのコピーコンストラクタ
* @param inputMatrix コピー元の行列
* @author Sawa
* @since 7.27
*/
MatrixClass::MatrixClass(const MatrixClass& inputMatrix)
{
	//自己初期化ではない場合
	if (&inputMatrix != this) {

		//要素数が等しくない場合
		if (matrixHeight != inputMatrix.matrixHeight || matrixWidth != inputMatrix.matrixWidth) {

			//行数をコピー元の行数に設定
			matrixHeight = inputMatrix.matrixHeight;

			//列数をコピー元の列数に設定
			matrixWidth = inputMatrix.matrixWidth;

			//行×列ぶんの要素数を持つ一次元配列を確保
			matrixPointer = new double[matrixHeight * matrixWidth];
		}

		//行列のコピーを行う
		for (int firstCounter = 0; firstCounter < matrixHeight * matrixWidth; ++firstCounter) {

			//コピー先からコピー元へ要素を代入
			matrixPointer[firstCounter] =
				inputMatrix.matrixPointer[firstCounter];
		}
	}
	//自己初期化の場合
	else {

		//行数0
		matrixHeight = 0;

		//列数0
		matrixWidth = 0;

		//nullポインタをデータメンバに設定
		matrixPointer = nullptr;
	}
}

/**
* MatrixClass型オブジェクトを破棄するデストラクタ
* @author Sawa
* @since 7.26
*/
MatrixClass::~MatrixClass() { delete[] matrixPointer; }

/**
* MatrixClass型のデータメンバである行列の行数を取得するゲッタ
* @return matrixHeight 行数
* @author Sawa
* @since 7.27
*/
int MatrixClass::getHeight() const { return matrixHeight; }

/**
* MatrixClass型のデータメンバである行列の列数を取得するゲッタ
* @return matrixWidth 列数
* @author Sawa
* @since 7.27
*/
int MatrixClass::getWidth() const { return matrixWidth; }

/**
* MatrixClass型のデータメンバである行列の先頭要素へのポインタを取得するゲッタ
* @return matrixHeight 列数
* @author Sawa
* @since 7.27
*/
double* MatrixClass::getPointer() const { return matrixPointer; }

/**
* MatrixClass型のオブジェクトを行列の形にして返却する
* @return string型の値　MatrixClass型の文字列表現
* @author Sawa
* @since 7.27
*/
string MatrixClass::getString() const
{
	//文字列ストリームを宣言
	ostringstream inputString;

	//MatrixClass型のオブジェクトを行列の形で文字列ストリームに挿入するループ
	for (int firstCounter = 0; firstCounter < matrixHeight; ++firstCounter) {

		//行列の列を参照
		for (int secondCounter = 0; secondCounter < matrixWidth; ++secondCounter) {

			//要素を表示
			inputString << matrixPointer[(firstCounter * matrixWidth) + secondCounter] << ' ';
		}
		//行数を変える
		inputString << '\n';
	}
	//文字列ストリームの情報を文字列にして返却
	return inputString.str();
}

/**
* MatrixClass型の行列の和を計算する演算子関数+
* firstMatrix 行列1  secondMatrix 行列2
* @return  sumMatrix 行列の和
* @author Sawa
* @since 7.27
*/
MatrixClass operator+(const MatrixClass& firstMatrix, const MatrixClass& secondMatrix)
{
	//行列の型が等しい場合計算を行う
	if (firstMatrix.matrixHeight == secondMatrix.matrixHeight && firstMatrix.matrixWidth == secondMatrix.matrixWidth) {

		//行列の和を格納する行列クラスを初期化
		MatrixClass sumMatrix(firstMatrix.matrixHeight, firstMatrix.matrixWidth);

		//行列の行目を参照するループ
		for (int firstCounter = 0; firstCounter < sumMatrix.matrixHeight; ++firstCounter) {

			//行列の列目を参照するループ
			for (int secondCounter = 0; secondCounter < sumMatrix.matrixWidth; ++secondCounter) {

				//行列の和を計算
				sumMatrix.matrixPointer[(firstCounter * sumMatrix.matrixWidth) + secondCounter] =
					firstMatrix.matrixPointer[(firstCounter * sumMatrix.matrixWidth) + secondCounter] + secondMatrix.matrixPointer[(firstCounter * sumMatrix.matrixWidth) + secondCounter];
			}
		}
		//行列の和を返却
		return sumMatrix;
	}
	//自己代入の場合要素0のオブジェクトを返却
	return MatrixClass(0, 0);
}

/**
* MatrixClass型の行列の差を計算する演算子関数-
* firstMatrix 行列1  secondMatrix 行列2
* @return  sumMatrix 行列の和
* @author Sawa
* @since 7.27
*/
MatrixClass operator-(const MatrixClass& firstMatrix, const MatrixClass& secondMatrix) {

	//行列の型が等しい場合計算を行う
	if (firstMatrix.matrixHeight == secondMatrix.matrixHeight && firstMatrix.matrixWidth == secondMatrix.matrixWidth) {

		//行列の差を格納する行列クラスを初期化
		MatrixClass differenceMatrix(firstMatrix.matrixHeight, firstMatrix.matrixWidth);

		//行列の行目を参照するループ
		for (int firstCounter = 0; firstCounter < differenceMatrix.matrixHeight; ++firstCounter) {

			//行列の列目を参照するループ
			for (int secondCounter = 0; secondCounter < differenceMatrix.matrixWidth; ++secondCounter) {

				//行列の差を計算
				differenceMatrix.matrixPointer[(firstCounter * differenceMatrix.matrixWidth) + secondCounter] =
					firstMatrix.matrixPointer[(firstCounter * differenceMatrix.matrixWidth) + secondCounter] - secondMatrix.matrixPointer[(firstCounter * differenceMatrix.matrixWidth) + secondCounter];
			}
		}
		//行列の差を計算
		return differenceMatrix;
	}
	//自己代入の場合要素0のオブジェクトを返却
	return MatrixClass(0, 0);
}

/**
* MatrixClass型の行列の積を計算する演算子関数*
* firstMatrix 行列1  secondMatrix 行列2
* @return  productMatrix 行列の積
* @author Sawa
* @since 7.27
*/
MatrixClass operator*(const MatrixClass& firstMatrix, const MatrixClass& secondMatrix)
{
	//行列の積を表すMatrixClassオブジェクトを定義
	MatrixClass productMatrix(firstMatrix.matrixHeight, secondMatrix.matrixWidth);

	//行列1の行目と、行列2の列目を参照するループ
	for (int firstCounter = 0; firstCounter < productMatrix.matrixHeight; ++firstCounter) {

		//行列1の列目と、行列2の行目を参照するループ
		for (int secondCounter = 0; secondCounter < productMatrix.matrixWidth; ++secondCounter) {

			//行列1の特定の要素と、行列2のそれに対応する要素を参照するループ
			for (int thirdCounter = 0; thirdCounter < firstMatrix.matrixWidth; ++thirdCounter) {

				//行列1の特定行における要素と、行列2の特定列における要素を順番に掛け合わせ、その値を加算代入した値を行列の積の要素とする
				productMatrix.matrixPointer[(firstCounter * productMatrix.matrixWidth) + secondCounter] +=
					(firstMatrix.matrixPointer[(firstCounter * firstMatrix.matrixWidth) + thirdCounter] * secondMatrix.matrixPointer[(thirdCounter * secondMatrix.matrixWidth + secondCounter)]);
			}
		}
	}
	//行列の積を返却
	return productMatrix;
}

/**
* MatrixClass型の行列を代入する演算子関数=
* inputString 文字列
* @return 自身への参照　
* @author Sawa
* @since 7.27
*/
MatrixClass& MatrixClass::operator=(const MatrixClass& inputMatrix)
{
	//自己代入でない場合
	if (&inputMatrix != this) {

		//要素数が等しくない場合
		if (matrixHeight != inputMatrix.matrixHeight || matrixWidth != inputMatrix.matrixWidth) {

			//コピー先の配列を破棄
			delete[] matrixPointer;

			//行数をコピー元の行数に設定
			matrixHeight = inputMatrix.matrixHeight;

			//列数をコピー元の列数に設定
			matrixWidth = inputMatrix.matrixWidth;

			//行×列ぶんの要素数を持つ一次元配列を確保
			matrixPointer = new double[matrixHeight * matrixWidth];
		}

		//行列のコピーを行う
		for (int firstCounter = 0; firstCounter < matrixHeight * matrixWidth; ++firstCounter) {

			//コピー元からコピー先へ要素を代入
			matrixPointer[firstCounter] =
				inputMatrix.matrixPointer[firstCounter];
		}
	}
	//自己代入の場合何もしない

	//自身への参照を返却
	return *this;
}

/**
* 出力ストリームにMatrixClass型の文字列表現を挿入
* @param userString 出力ストリーム, inputString StringClass型オブジェクト
* @return ostream型 TimeClass型オブジェクトの文字列表現を挿入した出力ストリームへの参照
* @author Sawa
* @since 7.27
*/
ostream& operator<<(ostream& inputString, const MatrixClass& inputMatrix)
{
	//StringClass型オブジェクトの文字列表現を挿入した出力ストリームへの参照を返却
	return inputString << inputMatrix.getString();
}

#endif