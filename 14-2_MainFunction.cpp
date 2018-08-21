/*演習14-2 クラスIntArrayのオブジェクトを自己初期化する宣言 IntArray x = x では、
*オブジェクトxのデータメンバnelemとvecが不定値で初期化される。自己初期化が行われた際に、
*データメンバを不定値で初期化しないようにコピーコンストラクタを改良せよ。
*/

#include<iomanip>
#include<iostream>
#include"14-2_IntArray.h"
#include "14-2_MemberDefinition.h"

using namespace std;

int main()
{
	//整数配列クラスの要素数
	const int firstArraySize = 5;

	//整数配列クラスを宣言
	IntArray firstArray(firstArraySize);

	//整数配列クラスの全要素に添字と同じ値を代入するループ
	for (int firstCounter = 0; firstCounter < firstArray.getSize(); ++firstCounter) {

		//代入
		firstArray[firstCounter] = firstCounter;
	}

	//代入演算子の動作を確認するため、整数配列クラスの要素数を適当に初期化
	const int secondArraySize = 10;
	const int thirdArraySize = 15;

	IntArray secondArray(secondArraySize); //要素数10の整数配列クラスを宣言
	IntArray thirdArray(secondArraySize);  //要素数15の整数配列クラスを宣言

	//整数配列クラスの要素数を表示
	cout << "secondArrayとthirdArrayの要素数は" << secondArray.getSize() << "と" << thirdArray.getSize() << "から";

	//代入演算子の動作を確認
	thirdArray = secondArray = firstArray;

	//変更した要素数を表示
	cout << secondArray.getSize() << "と" << thirdArray.getSize() << "に変わりました。\n";  //要素数が5になっていることを確認

	//コピーコンストラクタの動作を確認するため、整数配列クラスを別の整数配列クラスで初期化
	IntArray forthArray = secondArray;

	//課題確認のため、整数配列クラスの自己初期化を行う
	IntArray selfArray = selfArray;

	//確認画面のレイアウトを整える
	cout << " first second third forth\n";
	cout << "____________________________\n";

	//4つの整数配列クラスを走査表示するループ
	for (int firstCounter = 0; firstCounter < firstArraySize; firstCounter++) {

		//レイアウトを整えつつ、整列配列クラスの要素を表示
		cout << setw(6) << firstArray[firstCounter] << setw(7) << secondArray[firstCounter] << setw(6) << thirdArray[firstCounter] << setw(6) << forthArray[firstCounter] << '\n';
	}

	//要素数、値が全て等しいこと(代入演算子、コピーコンストラクタの機能)を確認

	//課題確認のため、自己初期化を行った整数配列クラスの要素数と値を走査表示するループ
	for (int firstCounter = 0; firstCounter < selfArray.getSize(); ++firstCounter) {

		//要素数、値を表示
		cout << selfArray[firstCounter];

		//selfArrayの非表示(自己代入が不定値で行われないこと)を確認
	}
}
