/*
 * 10-2.cpp
 *
 *  Created on: 2018/06/28
 *      Author: ddt
 */

 /*演習10-2 自動車クラスCarにデータメンバやメンバ関数を自由に追加せよ
  * (ナンバーを表すデータメンバを追加する、燃費を表すデータメンバを追加する、etc...)
  *
  *燃費を表すデータメンバを追加
  */

  //NOを表す値を0とする
const int falseValue = 0;

//yesを表す値を1とする
const int trueValue = 1;

#include<iostream>
//ユーザー定義した"10-2.h"ヘッダをインクルード
#include "10-2.h"

using namespace std;

int main()
{
	string inputName;                   //名前
	int inputWidth;                     //車幅
	int inputLength;                    //車長
	int inputHeight;                    //車高
	double inputFuel;                   //燃料
	double inputFuleConsumption;        //燃費

	///--- 車に関するデータを入力 ---///
	cout << "車のデータを入力せよ\n";
	cout << "名前は : "; cin >> inputName;        //名前
	cout << "車幅は : "; cin >> inputWidth;       //車幅
	cout << "車長は : "; cin >> inputLength;      //長さ
	cout << "車高は : "; cin >> inputHeight;      //車高
	cout << "ガソリン量は : "; cin >> inputFuel;    //燃料
	cout << "燃費(消費燃料=走行距離*燃費)は : "; cin >> inputFuleConsumption; //燃費

	//自車の情報を初期化
	CarClass myCar(inputName, inputWidth, inputLength, inputHeight, inputFuel, inputFuleConsumption);

	//自車の情報を表示
	myCar.printInformation();

	//車の移動を行うループ
	while (true) {

		//車の現在座標を表示
		cout << "現在地(" << myCar.getCoordinateX() << ", " << myCar.getCoordinateY() << ")\n";

		//残燃料を表示
		cout << "残燃料 : " << myCar.getFuel() << '\n';

		//移動意志の有無を尋ねる
		cout << "移動[0・・・No/1・・・Yes] : ";

		//移動意志
		int moveChecker;

		do {
			//移動意志の有無を入力
			cin >> moveChecker;

		//0か1かを入力させるループ
		} while (moveChecker != falseValue && moveChecker != trueValue);

		//移動の意思がある場合
		if (moveChecker == trueValue) {

			//x座標方向への移動距離
			double inputCoordinateX;

			//x座標方向への移動距離の入力を促す
			cout << "X方向の移動距離 : ";

			//入力
			cin >> inputCoordinateX;

			//y座標方向への移動距離
			double inputCoordinateY;

			//y座標方向への移動距離の入力を促す
			cout << "Y方向の移動距離 : ";

			//入力
			cin >> inputCoordinateY;

			//移動距離*燃費が残燃料を上回った場合
			if (myCar.moveCar(inputCoordinateX, inputCoordinateY) == false) {

				//警告文を表示し、車の移動ループを再試行
				cout << "燃料が足りません！\n";
			}
		}
		//移動の意思がない場合
		else {
			//ループを抜ける
			break;
		}
	}
}