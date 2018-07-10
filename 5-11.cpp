/*
 * 5-11.cpp
 *
 *  Created on: 2018/06/22
 *      Author: syuka
 */

/*演習5-11 6人の2科目（国語・数学）の点数を読み込んで、科目ごとの合計点と平均点、
 * 学生ごとの合計点と平均点を求めるプログラムを作成せよ。
 */

#include<iostream>

using namespace std;

int main()
{
	//点数配列[人数][教科数]の宣言
	int scoreArray[6][2];

	//国語の合計点
	int litertureSum = 0;

	//国語の平均点
	double litertureAverage = 0;

	//数学の合計点
	int mathSum = 0;

	//数学の平均点
	double mathAverage = 0;


	//6人分の点数入力をさせるループ文
	for (int firstCounter = 0; firstCounter < 6; firstCounter++){

		//教科毎の点数入力を促す
	 	 cout << firstCounter + 1 << "人目の国語と数学の点数を入力してください。\n";

	 	 //教科毎の点数入力をさせるループ文
		for (int secondCounter = 0; secondCounter < 2; secondCounter++) {

			//点数入力
			cin >>  scoreArray[firstCounter][secondCounter];
		}
	}

     //国語の合計点、平均点を表示するループ文
	 for (int firstCounter = 0; firstCounter < 6; firstCounter++){

		 //合計点に6人分の点数を加算代入
		 litertureSum += scoreArray[firstCounter][0];

		 //合計点から平均点を割り出す
	      litertureAverage = static_cast<double>(litertureSum) / 6;
	 }

	 //国語の合計点と平均点を表示
	 cout << "国語の合計点は" << litertureSum << "、平均点は " << litertureAverage <<  "です。\n";


	 //数学の合計点、平均点を表示するループ文
	 for (int firstCounter = 0; firstCounter < 6; firstCounter++){

		 //合計点に6人分の点数を加算代入
		  mathSum += scoreArray[firstCounter][1];

		  //合計点から平均点を割り出す
	      mathAverage = static_cast<double>(mathSum) / 6;
	 }

	 //数学の合計点と平均点を表示
	 cout << "数学の合計点は" << mathSum << "、平均点は " << mathAverage <<  "です。\n";

	 // 6人それぞれの合計点、平均点を表示するループ文
	 for (int firstCounter = 0; firstCounter < 6; firstCounter++){

		 //合計点を初期化
		 int entireSum = 0;

		 //平均点を初期化
	     double entireAverage = 0;

	     //国語、数学の合計点と平均点を計算するループ文
	 for (int secondCounter = 0; secondCounter < 2; secondCounter++){

		 //合計点に2教科の点数を加算代入
		  entireSum += scoreArray[firstCounter][secondCounter];

		  //合計点から平均点を割り出す
	      entireAverage = static_cast<double>(entireSum) / 2;}

	 //1人毎に合計点と平均点を表示
		 cout << firstCounter + 1 << "人目の合計点は" << entireSum <<  "、平均点は" << entireAverage <<"です。\n";
	 }
}




