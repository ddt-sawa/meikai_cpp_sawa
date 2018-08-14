/*
 * 10-2.h
 *
 *  Created on: 2018/06/28
 *      Author: ddt
 */

 /*演習10-2 自動車クラスCarにデータメンバやメンバ関数を自由に追加せよ
  * (ナンバーを表すデータメンバを追加する、燃費を表すデータメンバを追加する、etc...)
  *
  *燃費を表すデータメンバmemberFuelConsumptionと関連する計算式追加
  */

  //sqrt関数を使うため、<cmath>ヘッダをインクルード
#include<cmath>
#include<iostream>
//stringクラステンプレートを使うため、<string>ヘッダをインクルード
#include<string>

//CarClassクラス定義
class CarClass {

	//---データメンバ---//
	std::string memberName;                       //車の名前
	int memberWidth, memberLength, memberHeight;  //車の横幅、長さ、高さ
	double memberCoordinateX, memberCoordinateY;  //車の現在座標
	double memberFuel;                            //車の残燃料
	double memberFuelConsumption;                 //車の燃費

public:
	//--- コンストラクタ ---//
	CarClass(std::string inputName, int inputWidth, int inputLength, int inputHeight, double inputFuel, double inputFuelConsumption) {
		memberName = inputName;                       //名前
		memberWidth = inputWidth;                     //横幅
		memberLength = inputLength;                   //長さ
		memberHeight = inputHeight;                   //高さ
		memberFuel = inputFuel;                       //燃料
		memberFuelConsumption = inputFuelConsumption; //燃費
		memberCoordinateX = memberCoordinateY = 0.0;  //現在座標
	}

	/**
	* データメンバのx座標を返却するゲッタ
	* @return memberCoordinateX x座標
	* @author Sawa
	* @since 7.25
	*/
	double getCoordinateX() { return memberCoordinateX; }

	/**
	* データメンバのy座標を返却するゲッタ
	* @return memberCoordinateY y座標
	* @author Sawa
	* @since 7.25
	*/
	double getCoordinateY() { return memberCoordinateY; }

	/**
	* データメンバの残燃料を返却するゲッタ
	* @return memberFuel
	* @author Sawa
	* @since 7.25
	*/
	double getFuel() { return memberFuel; }

	/**
	* データメンバの燃費を返却するゲッタ
	* @return memberFuelConsumption
	* @author Sawa
	* @since 7.25
	*/
	double getFuelConsumption() { return memberFuelConsumption; }


	/**
	* 車の詳細情報を表示
	* @author Sawa
	* @since 7.25
	*/
	void printInformation() {
		std::cout << "名前 : " << memberName << "\n";            //名前表示
		std::cout << "車幅 : " << memberWidth << "mm\n";         //車幅表示
		std::cout << "車長 : " << memberLength << "mm\n";        //車長表示
		std::cout << "車高 : " << memberHeight << "mm\n";        //車高表示
		std::cout << "燃費 : " << memberFuelConsumption << '\n'; //燃費表示
	}

	/**
	* 指定された移動量の処理が可能であるかを判断し、可能であれば座標移動を行う
	* @param inputCoordinateX x座標方向への移動量,inputCoordinateY y座標方向への移動量
	* @return bool型の値　座標移動の可否
	* @author Sawa
	* @since 7.25
	*/
	bool moveCar(double inputCoordinateX, double inputCoordinateY)
	{
		//車の直線移動距離
		double driveDistance = sqrt(inputCoordinateX * inputCoordinateX + inputCoordinateY * inputCoordinateY);

		//移動距離*燃費が残燃料を上回った場合
		if (driveDistance * memberFuelConsumption > memberFuel) {
			//移動不可
			return false;
		}

		//移動可能な場合、残燃料から移動距離*燃費を消費し
		memberFuel -= driveDistance * memberFuelConsumption;

		//現在座標にx軸方向への移動量を加える
		memberCoordinateX += inputCoordinateX;

		//現在座標yx軸方向への移動量を加える
		memberCoordinateY += inputCoordinateY;

		//移動完了
		return true;
	}
};
