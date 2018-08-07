/*
 * 8-19.cpp
 *
 *  Created on: 2018/06/27
 *      Author: ddt
 */

 /*演習8-19 文字列として表された実数値を、double型の実数に変換した値を返す関数
  * str2doubleを作成せよ。
  * double str2double(const char* s);
  *
  * たとえば、文字列sが13.5であれば、返却するのは実数値13.5である。
  * sが実数として解釈できない文字列である場合は、0.0を返すこと。
  */


//typeid関数の準備
#include<typeinfo>
//strlen関数の準備
#include<cstring>
#include<iostream>

using namespace std;

//配列の容量を多めに初期化
const int arrayCapacity = 36;

/**
* 受け取った整数値をnとして、10^nの値を返却する
* @param indexNumber 指数
* @return exponentofTen 10^n
* @author Sawa
* @since 7.24
*/
double returnPlusExponentofTen(int indexNumber)
{
	//返却する10のべき乗値を初期化
	double exponentofTen = 1;

	//受け取った指数における、10のべき乗値を計算するループ
	for (; indexNumber > 0; --indexNumber) {

		//返却値に10を乗算代入
		exponentofTen *= 10;
	}
	//10のべき乗値を返却
	return exponentofTen;
}

/**
* 受け取った整数値をnとして、10^-nの値を返却する
* @param indexNumber 指数
* @return exponentofTen 10^-n
* @author Sawa
* @since 7.24
*/
double returnMinusExponentofTen(int indexNumber)
{
	//返却する10のべき乗値を初期化
	double exponentofTen = 1;

	//受け取った指数における、10のべき乗値を計算するループ
	for (; indexNumber > 0; --indexNumber) {

		//返却値に10を除算代入
		exponentofTen /= 10;
	}
	//10のべき乗値を返却
	return exponentofTen;
}

/**
* 受け取った数字文字の配列を、double型の実数に変換する。数字文字及び'.'以外の文字が含まれていた場合0.0を返却する
* @param characterArray 数字文字列
* @return entireSum double型の実数
* @author Sawa
* @since 7.24
*/
double stringtoDouble(const char* characterArray)
{
	//入力された数字文字を一文字ずつ整数値として保存する配列の初期化
	double copyArray[arrayCapacity] = { 0 };

	//文字列の要素数を計算
	int characterArrayLength = strlen(characterArray);

	//返却値の宣言
	double entireSum = 0.0;

	//文字列内における、値が'.'である要素の添字
	int decimalNumber = 0;

	//文字列としてあらわされた実数値を、double型に変換するループ
	for (int firstCounter = 0; characterArray[firstCounter]; ++firstCounter) {

		//文字列内に、数字文字でも'.'でもない文字があった場合
		if (!isdigit(characterArray[firstCounter]) && characterArray[firstCounter] != '.') {

			//0.0を返却する
			return entireSum;
		}
		//文字列内に、小数点を見つけた場合
		else if (characterArray[firstCounter] == '.') {

			//その要素の添字を記録する
			decimalNumber = firstCounter;
		}
		//数字文字を見つけた場合、
		else {

			//char型数字文字をJIS規格の値に則ってint型整数値に変換し、整数値の配列に保存する
			copyArray[firstCounter] = characterArray[firstCounter] - 48;
		}
	}
	//整数値の配列を実数値に変換するためのループ
	for (int firstCounter = 0; firstCounter < characterArrayLength; ++firstCounter) {

		//整数値の配列において、小数点より前に存在していた要素を見つけた場合
		if (firstCounter < decimalNumber) {

			//小数点からの距離に応じて10のべき乗の重みづけを加え、合計値に加算代入する
			entireSum += copyArray[firstCounter] * returnPlusExponentofTen(decimalNumber - firstCounter - 1);
		}
		//小数点より後に存在していた要素を見つけた場合
		else if (firstCounter > decimalNumber) {

			//小数点からの距離に応じて10のべき乗の負の重みづけを加え、合計値に加算代入する
			entireSum += copyArray[firstCounter] * returnMinusExponentofTen(firstCounter - decimalNumber);
		}
		//合計値を返却
		return entireSum;
	}
}

int main()
{
	//実数値を文字列として入力する配列を初期化
	char characterArray[arrayCapacity] = { 0 };

	//文字列の入力を促す
	cout << "実数値を文字列として入力してください。\n ";

	//文字列の入力
	cin >> characterArray;

	//文字列を実数値に変換表示する
	cout << stringtoDouble(characterArray) << "を実数値として返却しました。\n";

	//データ型がdoubleになっていることを確認
	cout << "変数型は" << typeid(stringtoDouble(characterArray)).name() << "です。\n";
}


