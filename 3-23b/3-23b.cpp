
/*演習3-23 合計だけでなく平均も求めるように、List3-15およびList3-16を
 * 書き換えたプログラムをそれぞれ作成せよ。
 * a.List3-15の書き換え
 */

#include<iostream>

using namespace std;

int main()
{
	//加算する整数の個数
	int integerNumber;

	//個数入力を促す
	cout << "整数を加算します。\n" << "何個加算しますか : ";

	//個数入力
	cin >> integerNumber;

	//合計値
	int entireSum = 0;

	//平均値
	double entireAverage = 0;

	//整数を規定回数入力し、その合計と平均値を計算するループ文
	for (int firstCounter = 1; firstCounter <= integerNumber; ++firstCounter){

		//加算する整数値
		int integerValue;

		//整数値の入力を促す
		cout << "整数 : ";

		//整数入力
		cin >> integerValue;

		//合計が1000を超えた場合
		if (entireSum + integerValue > 1000){

			//合計が1000を超えたことを告知
			cout << "合計が1000を超えました。\n最後の数値は無視します。\n";

			//入力終了
			break;
		}

		//合計に入力値を加算
		entireSum += integerValue;

		//平均を計算
		entireAverage = static_cast<double>(entireSum) / firstCounter;
	}
	//合計を表示
	cout << "合計は" << entireSum << "です。\n";
	//平均を表示
	cout << "平均は" << entireAverage << "です。\n";
}


