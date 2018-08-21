 /*演習7-14 要素数nの配列a内のkeyと等しい全要素の添字を配列idxに格納する関数search_idxを作成せよ。
  * 返却するのはkeyと等しい要素の個数とする。
  * int search_idx(int* a, int* idx, int n, int key)
  * たとえば、aに受け取った配列の要素が{1,7,5,7,2,4,7}でkeyが7であれば、
  * idxに{1,3,6}を格納した上で3を返却する。
  */

#include<iostream>

using namespace std;

//配列の要素数
const int arraySize = 7;

//配列
int intArray[arraySize] = { 0 };

//添字を格納する配列
int indexArray[arraySize] = { 0 };


/**
* 指定した整数値が配列中の要素に含まれていた場合、添字を記録配列に格納しその要素数を返却する
* @param intArray 配列, indexArray 記録配列, nelemNumber 要素数, keyValue 整数値
* @return equalNumber 整数値と等しい要素の個数
* @author Sawa
* @since 7.19
*/
int searchIndex(int* intArray, int* indexArray, int arraySize, int keyValue)
{
	//指定された値と等しい要素の個数
	int equalNumber = 0;

	//記録配列の添字
	int indexArrayNumber = 0;

	//配列中の要素を走査するループ
	for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter) {

		//配列要素の添字をインクリメント中に指定された値と同じ要素が見つかった場合、
		if (*intArray++ == keyValue) {

			//記録配列にその添字を保存し
			indexArray[indexArrayNumber++] = firstCounter;

			//指定された値と等しい要素の個数をインクリメントする
			++equalNumber;
		}
	}
	//指定された値と等しい要素の個数をインクリメントする
	return equalNumber;
}

int main()
{
	//配列の要素を走査入力するループ
	for (int firstCounter = 0; firstCounter < arraySize; ++firstCounter) {

		//要素入力を促す
		cout << "a[" << firstCounter << "] : ";

		//要素入力
		cin >> intArray[firstCounter];
	}

	//線形探索する整数
	int keyValue;

	//表示する値の説明
	cout << "入力された整数値と等しい値を持つ配列要素の添字をidx[]に格納し、またその個数を表示します。\n";

	//線形探索する整数の入力を促す
	cout << "整数値 : ";

	//入力
	cin >> keyValue;

	//表示する値の説明
	cout << "idx[]に格納された添字は";

	//関数を呼び出し、整数値と等しい要素の添字を表示するループ
	for (int firstCounter = 0; firstCounter < searchIndex(intArray, indexArray, arraySize, keyValue); ++firstCounter) {

		//添字を表示
		cout << indexArray[firstCounter] << " ";
	}
	//フォロースルー
	cout << "です。\n";

	//整数値と等しい要素の個数を表示
	cout << "keyと同じ要素の個数は" << searchIndex(intArray, indexArray, arraySize, keyValue) << "個です。\n";
}
