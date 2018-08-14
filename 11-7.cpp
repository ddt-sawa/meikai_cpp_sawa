#include<iostream>
//ユーザー定義したヘッダをインクルード
#include "11-7Car.h"
#include "11-7Date.h"

using namespace std;

int main()
{
	string inputName;                   //名前
	int inputWidth;                     //車幅
	int inputLength;                    //車長
	int inputHeight;                    //車高
	int inputYear;                      //購入年
	int inputMonth;                     //購入月
	int inputDay;                       //購入日
	double inputFuel;                   //燃料
	double inputFuleConsumption;        //燃費

										///--- 車に関するデータを入力 ---///
	cout << "車のデータを入力せよ\n";
	cout << "名前は : "; cin >> inputName;        //名前
	cout << "車幅は : "; cin >> inputWidth;       //車幅
	cout << "車長は : "; cin >> inputLength;      //長さ
	cout << "車高は : "; cin >> inputHeight;      //車高
	cout << "購入年は : "; cin >> inputYear;      //購入年
	cout << "購入月は : "; cin >> inputMonth;     //購入月
	cout << "購入日は : "; cin >> inputDay;       //購入日
	cout << "ガソリン量は : "; cin >> inputFuel;    //燃料
	cout << "燃費(消費燃料=走行距離*燃費)は : "; cin >> inputFuleConsumption; //燃費

　　 //自車の情報を初期化
	CarClass myCar(inputName, inputWidth, inputLength, inputHeight, inputFuel, inputFuleConsumption, inputYear, inputMonth, inputDay);

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

		//移動意志の有無を入力
		int movechecker; cin >> movechecker;

		//0なら移動せず
		if (movechecker == 0) {

			break;
		}

		//それ以外なら移動

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
}