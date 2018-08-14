/* 演習11-4 コンストラクタ初期化子によって明示的に初期化しない場合に、メンバ部分オブジェクトがデフォルトコンストラクタ
で初期化されることをプログラムを作成して確認せよ。*/

#include<iostream>

using namespace std;

//財産の値をデータメンバに持つMoneyClassクラスを定義
class MoneyClass {
	int moneyAmount; //財産

public:

	/**
	* MoneyClass型のデータメンバmoneyAmountを10で初期化するデフォルトコンストラクタ
	* @author Sawa
	* @since 7.25
	*/
	MoneyClass() : moneyAmount(10) {}

	/**
	* MoneyClass型のデータメンバmoneyAmountを入力値で初期化するコンストラクタ
	* @param inputMoney 入力値
	* @author Sawa
	* @since 7.25
	*/
	MoneyClass(int inputMoney) : moneyAmount(inputMoney) {}

	/**
	* MoneyClass型のデータメンバmoneyAmountを取得するゲッタ
	* @return moneyAmount 財産
	* @author Sawa
	* @since 7.25
	*/
	int getMoney() const { return moneyAmount; }
};

//年齢とMoneyClassをデータメンバに持つHumanClassクラスを宣言
class HumanClass {
	int humanClassAge;           //年齢
	MoneyClass humanClassMoney;  //メンバ部分オブジェクト

public:
	
	/**
	* HumanClassクラスのumanClassAgeを入力値で初期化し、humanClassMoneyについては明示的な初期化を行わないコンストラクタ
	* @param inputAge 入力値
	* @author Sawa
	* @since 7.25
	*/
	HumanClass(int inputAge) : humanClassAge(inputAge) {}

	/**
	* HumanClassクラス内のMoneyClass型オブジェクトを取得するゲッタ
	* @return humanClassMoney, MoneyClass型オブジェクト 
	* @author Sawa
	* @since 7.25
	*/
	MoneyClass getMoneyClass() const { return humanClassMoney; }
};

int main()
{
	//HumanClass型オブジェクトの年齢を入力
	HumanClass takahiroSawa(25);

	//財産表示
	cout << takahiroSawa.getMoneyClass().getMoney();

	//MoneyClassのデフォルトコンストラクタで定義したmoneyAmountの値である10の表示を確認
}

