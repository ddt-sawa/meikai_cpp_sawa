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

#ifndef ___Matrix
#define ___Matrix

//stringクラステンプレートを使用するため、<string>ヘッダをインクルード
#include<string>
//出力ストリームを操作するため、<sstream>ヘッダをインクルード
#include<sstream>
#include<iostream>

//簡易行列クラスMatricClassを定義
class MatrixClass {
public:
	//MatrixClassコンストラクタ
	MatrixClass(int, int);

	//MatrixClassコピーコンストラクタ
	MatrixClass(const MatrixClass&);

	//MatrixClassデフォルトコンストラクタ
	~MatrixClass();

	//MatrixClass型のデータメンバである行列の行数を取得するゲッタ
	int getHeight() const;

	//MatrixClass型のデータメンバである行列の列数を取得するゲッタ
	int getWidth() const;

	//MatrixClass型のデータメンバである行列の先頭要素へのポインタを取得するゲッタ
	double* getPointer() const;

	//MatrixClass型を行列の形にして返却する
	std::string getString() const;

	//MatrixClass型の行列の和を計算する演算子関数+
	friend MatrixClass operator+(const MatrixClass& firstMatrix, const MatrixClass& secondMatrix);

	//MatrixClass型の行列の差を計算する演算子関数+
	friend MatrixClass operator-(const MatrixClass& firstMatrix, const MatrixClass& secondMatrix);

	//MatrixClass型の行列の積を計算する演算子関数*
	friend MatrixClass operator*(const MatrixClass& firstMatrix, const MatrixClass& secondMatrix);

	//MatrixClass型の行列を代入する演算子関数=
	MatrixClass& operator=(const MatrixClass& inputMatrix);

private:
	int matrixHeight; //行数
	int matrixWidth;  //列数
	double* matrixPointer; //配列先頭要素へのポインタ

};
//MatrixClass型をcout演算子で表示する演算子関数<<
std::ostream& operator<<(std::ostream& inputString, const MatrixClass& inputMatrix);

#endif 