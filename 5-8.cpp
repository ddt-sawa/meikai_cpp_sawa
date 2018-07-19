/*演習5-8 配列の要素の並びをシャッフルする（要素の並びがランダムになるようかき混ぜる）
 プログラムを作成せよ。*/



#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	//シャッフルしたい配列の要素数
	const int arrayNumber = 6;

	//シャッフルしたい配列の要素を初期化
	int intArray[arrayNumber] = { 0, 1, 2, 3, 4, 5 };

	//表示する値の説明
	cout << "元々の配列の要素は、{";

	//配列の要素を表示するループ
	for (int firstCounter = 0; firstCounter < arrayNumber; ++firstCounter) {

		//要素を表示
		cout << intArray[firstCounter] << ' ';
	}

	//語尾
	cout << "}です。\n";

	//乱数テーブルを用意
	srand(time(NULL));

	//配列内要素をシャッフルするためのループ
	for (int firstCounter = 0; firstCounter < arrayNumber; ++firstCounter) {


		//現在走査中の要素と入れ替える要素の添字をランダムに決める
		int randomNumber = rand() % arrayNumber;

		//走査中要素の値を一時保存
		int temporaryValue = intArray[firstCounter];

		//走査中要素と、ランダムに決められた要素の値を入れ替える
		intArray[firstCounter] = intArray[randomNumber];

		//ランダムに決められた要素の値に、一時保存していた走査中要素の値を代入する
		intArray[randomNumber] = temporaryValue;
	}



	//シャッフルした配列を走査表示するループ文
	for (int firstCounter = 0; firstCounter < arrayNumber; ++firstCounter) {

		//配列を走査表示
		cout << "intArray[" << firstCounter << "] = " << intArray[firstCounter] << "です。\n";
	}
}