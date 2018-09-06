/*
* 8-18.cpp
*
*  Created on: 2018/06/27
*      Author: ddt
*/

/*演習8-18　文字列として表された整数値を、int型の整数値に変換した値を返す関数str2intを作成せよ。
* int str2int(const char* s);
* たとえば、文字列sが"138"であれば、返却するのは整数値138である。sが整数として解釈できないような
* 文字列である場合は、0を返すこと。
*/

//typeid関数の準備
#include<typeinfo>
//strlen関数の準備
#include<cstring>
#include<iostream>

using namespace std;

//配列の容量を初期化
const int arrayCapacity = 50;

/**
* 受け取った負でない整数値をnとして、10^nの値を返却する
* @param indexNumber 指数
* @return 10^n
* @author Sawa
* @since 7.23
*/
int returnExponentofTen(int inputNumber)
{
	//引数が負の場合
	if (inputNumber < 0) {

		//0を返却
		return 0;
	}
	//返却する10のべき乗値を初期化
	int exponentofTen = 1;

	//受け取った指数における、10のべき乗値を計算するループ
	for (; inputNumber > 0; --inputNumber) {

		//返却値に10を乗算
		exponentofTen *= 10;
	}
	//10のべき乗値を返却
	return exponentofTen;
}

/**
* 文字列として表された整数値を、int型の整数値に変換して返却する。数字文字以外が含まれていた場合0を返却
* @param argumentString 文字列として表された整数値
* @return entireSum int型の整数値
* @author Sawa
* @since 7.23
*/
int castStringtoInt(const char* argumentString)
{
	//文字列の要素数
	int stringLength = strlen(argumentString);

	//返却値となる合計値を初期化
	int entireSum = 0;

	//数字文字列を整数値に変換するループ
	for (int firstCounter = 0; argumentString[firstCounter]; ++firstCounter) {

		//走査中の値が数字文字だった場合
		if (isdigit(argumentString[firstCounter])) {

			//char型数字文字をint型整数に直す
			int integerValue = argumentString[firstCounter] - '0';

			//べき乗の重みづけを行い、合計値に加算代入
			entireSum += integerValue * returnExponentofTen(stringLength - firstCounter - 1);
		}
		//文字配列内に数字以外の文字が見つかった場合
		else {

			//合計値を0にする
			entireSum = 0;

			//ループを抜ける
			break;
		}
	}
	//合計値を返却
	return entireSum;
}

int main()
{
	//文字列の初期化
	char inputString[arrayCapacity] = { 0 };

	//数字文字列の入力を促す
	cout << "整数値を文字列として入力 : ";

	//文字列を入力
	cin >> inputString;

	//数字文字列を整数値に変換した値を表示
	cout << castStringtoInt(inputString) << "を整数値として返却しました。\n";

	//返却値がint型になっていることを確認
	cout << "変数型は" << typeid(castStringtoInt(inputString)).name() << "です。\n";
}

