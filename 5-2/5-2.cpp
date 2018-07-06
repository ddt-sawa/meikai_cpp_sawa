
/*演習5-2　要素型がdouble型で要素数が5の配列の全要素に0.0を代入して
 * 表示するプログラムを作成せよ
 */

//fixed関数とsetprecision関数の呼び出し
#include<iomanip>
#include<iostream>

using namespace std;

int main()
{
	//0.0を表示するため、fixed関数と setprecision関数を使用
	cout << fixed << setprecision(1);

     //double型配列の要素数
	const int arrayNumber = 5;

	//配列の全要素に0.0を代入
	double doubleArray[arrayNumber] = {0.0, 0.0, 0.0, 0.0, 0.0};

	//配列を走査表示するループ文
	for (int counterVariable = 0; counterVariable < arrayNumber; counterVariable++) {

		//指定された配列の要素を表示する
		cout << doubleArray[counterVariable] << '\n';
	}
}
