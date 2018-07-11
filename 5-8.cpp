/*演習5-8 配列の要素の並びをシャッフルする（要素の並びがランダムになるようかき混ぜる）
 * プログラムを作成せよ。*/

#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	//シャッフルしたい配列の要素数
	const int arrayNumber = 6;

	//シャッフルしたい配列の要素を初期化
	int intArray[arrayNumber] = {0, 1, 2, 3, 4, 5};

	//配列の要素をシャッフル表示することを告知
	cout << "元々の配列は{0, 1, 2, 3, 4, 5}です。\n" << "シャッフルしました。\n";

	//配列の要素をランダムに並び替えるための配列(0-5で被りがない乱数を要素に持つ)を宣言
	int randomArray[arrayNumber];

	//乱数テーブルを用意
	srand(time(NULL));

	//randomArray配列に値を走査代入するループ文
	for (int firstCounter = 0; firstCounter < arrayNumber; ++firstCounter){

		//前の要素と被っていないことを確かめるint型変数を初期化
		int checkCounter = 0;

		//randomArray配列に入れる値が被らないようにするループ文
		do{

			//randomArray配列の要素に0-5までの乱数を代入
			randomArray[firstCounter] = rand() % 6;

			//randomArray[0]の場合
			if (firstCounter == 0){

				//前の数値を参照しないのでループを抜け、次の要素に進む
				break;
			}

			//現在代入中の要素より前の要素のをチェックするループ文
			for (int secondCounter = 0; secondCounter < firstCounter; ++secondCounter){

				//同じ値を発見した場合
				if (randomArray[firstCounter] == randomArray[secondCounter]){

					//チェックカウンタを0に戻す
					checkCounter = 0;

					//乱数代入を再試行
					continue;
				}

				//同じ値ではない場合
				else {

					//チェックカウンタを1にする
					checkCounter = 1;
				}
			}

			//全走査を終了したうえでチェックカウンタが 1(以前の要素が全て違う値)であればwhileループを抜け、次の要素に進む
		}while (checkCounter == 0);
	}


	//randomArray配列を用いて、配列の要素をシャッフルするループ文
	for (int firstCounter = 0; firstCounter < arrayNumber; ++firstCounter){

		//ランダムな添え字(randomArrayの値)の要素を、配列の先頭から順番に代入していく
		int temporaryValue = intArray[firstCounter];                  //移動先の要素を一時保存
		intArray[firstCounter] = intArray[randomArray[firstCounter]]; //ランダムな添え字の要素に書き換える
		intArray[randomArray[firstCounter]] = temporaryValue;         //ランダムな添え字の要素を移動先の要素で書き換える
	}

	//シャッフルした配列を走査表示するループ文
	for (int secondCounter = 0; secondCounter < arrayNumber; ++secondCounter) {

		//配列を走査表示
		cout << "intArray[" << secondCounter << "] = " << intArray[secondCounter] << "です。\n";
	}
}
