#include<iostream>
#include"11-6.h"

using namespace std;

/*演習11-6 演習10-1(p.377)で作成した人間クラスに誕生日を格納するデータメンバ、
それを返却するメンバ関数を追加せよ。*/

//HumanClass定義
class HumanClass {
	///--- データメンバ ---///
	string userName;      //名前
	string userSex;       //性別
	double userHeight;    //身長
	double userWeight;    //体重
	DateClass userDate;   //誕生日

public:
	///--- コンストラクタ ---///
	HumanClass(string inputName, string inputSex, double inputHeight, double inputWeight, int inputYear, int inputMonth, int inputDay)
		: userName(inputName), userSex(inputSex), userHeight(inputHeight), userWeight(inputWeight), userDate(inputYear, inputMonth, inputDay) {}


	/**
	* データメンバの名前を返却
	* @return userName 名前
	* @author Sawa
	* @since 7.24
	*/
	string getName() const { return userName; }

	/**
	* データメンバの性別を返却
	* @return userSex 性別
	* @author Sawa
	* @since 7.24
	*/
	string getSex() const { return userSex; }

	/**
	* データメンバの身長を返却
	* @return userHeight 身長
	* @author Sawa
	* @since 7.24
	*/
	double getHeight() const { return userHeight; }

	/**
	* データメンバの体重を返却
	* @return userWeight 体重
	* @author Sawa
	* @since 7.24
	*/
	double getWeight() const { return userWeight; }

	/**
	* データメンバのDateClass型オブジェクトを返却
	* @return userDate DateClass型オブジェクト 
	* @author Sawa
	* @since 7.24
	*/
	DateClass getDateClass() const { return userDate; }
};

int main()
{
	//個人情報の宣言
	string inputName;   //名前
	string inputSex;    //性別
	double inputHeight; //身長
	double inputWeight; //体重
	int inputYear;      //誕生年
	int inputMonth;     //誕生月
	int inputDay;       //誕生日

	cout << "名前 : "; cin >> inputName;    //名前入力
	cout << "性別 : "; cin >> inputSex;     //性別入力
	cout << "身長 : "; cin >> inputHeight;  //身長入力
	cout << "体重 : "; cin >> inputWeight;  //体重入力
	cout << "誕生年 : "; cin >> inputYear;  //誕生年入力
	cout << "誕生月 : "; cin >> inputMonth; //誕生月入力
	cout << "誕生日 : "; cin >> inputDay;   //誕生日入力

	//クラスを初期化
	HumanClass firstPerson(inputName, inputSex, inputHeight, inputWeight, inputYear, inputMonth, inputDay);

	//個人情報表示
	cout << "名前" << firstPerson.getName() << '\n';                    //名前表示
	cout << "性別" << firstPerson.getSex() << '\n';                     //性別表示
	cout << "身長" << firstPerson.getHeight() << "cm\n";                //身長表示
	cout << "体重" << firstPerson.getWeight() << "kg\n";                //体重表示
	cout << "誕生日" << firstPerson.getDateClass().getString();         //誕生日表示
}
