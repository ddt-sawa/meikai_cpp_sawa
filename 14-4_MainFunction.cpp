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

#include<iostream>
//行列クラスに関するユーザー定義型ヘッダをインクルード
#include"14-4_MatrixClass.h"
#include"14-4_MemberDefinition.h"

using namespace std;

//行列1の行数を2とする
const int firstMatrixHeight = 2;

//行列1の列数(行列2の行数)を3とする
const int firstMatrixWidth = 3;

//行数2の列数を4とする
const int secondMatrixWidth = 4;

int main()
{
	//2行3列の行列1を初期化
	MatrixClass firstMatrix(firstMatrixHeight, firstMatrixWidth);

	//3行4列の行列2を初期化
	MatrixClass secondMatrix(firstMatrixWidth, secondMatrixWidth);

	//行列1に添字と同じ値を代入するループ
	for (int firstCounter = 0; firstCounter < firstMatrixHeight * firstMatrixWidth; ++firstCounter) {

		//行列1の要素に値を代入
		firstMatrix.getPointer()[firstCounter] = firstCounter;
	}

	//行列2に添字と同じ値を代入するループ
	for (int firstCounter = 0; firstCounter < firstMatrixWidth * secondMatrixWidth; ++firstCounter) {

		//行列2の要素に値を代入
		secondMatrix.getPointer()[firstCounter] = firstCounter;
	}
	//行列1を表示
	cout << "行列1\n" << firstMatrix;

	//行列2を表示
	cout << "行列2\n" << secondMatrix;

	//行列1と行列1の和を表示
	cout << "行列1+行列1\n" << (firstMatrix + firstMatrix);

	//行列2と行列2の差を表示
	cout << "行列2-行列2\n" << (secondMatrix - secondMatrix);

	//行列1と行列2の積を表示
	cout << "行列1*行列2\n" << (firstMatrix * secondMatrix);

	//行列1に行列2を代入して表示
	cout << "行列1 = 行列2\n" << (firstMatrix = secondMatrix);
}

