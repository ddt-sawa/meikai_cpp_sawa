/*
 * 14-1.cpp
 *
 *  Created on: 2018/07/09
 *      Author: ddt
 */

#include<iostream>

using namespace std;

//デストラクタの働きをチェックするためのDestructerCheckerを定義
class DestructChecker{

	//識別番号
	int destructerValue;

public:

	//与えられた値を識別番号としてデータメンバを初期化するコンストラクタ
	DestructChecker(int inputValue) : destructerValue(inputValue){}

	//デストラクタに呼び出された順にそれぞれの識別番号を表示
	~DestructChecker(){cout << destructerValue;}

};

//DestructCheckerクラスをデータメンバに持つCheckClassクラスを宣言
class CheckClass{

	DestructChecker firstMember;  //識別番号を4で初期化
	DestructChecker secondMember; //5で初期化
	DestructChecker thirdMember;  //6で初期化

public:
	//敢えてコンストラクタにおいて宣言と順番をズラして初期化を行う(5,4,6の識別番号)
	CheckClass(int firstInput, int secondInput, int thirdInput) :secondMember(secondInput), firstMember(firstInput), thirdMember(thirdInput){}
};

int main()
{
	//4,5,6を初期化子として渡す
	CheckClass mySample(4, 5, 6);
}

//コンソール画面に6,5,4の順番で値が表示されたため、宣言の順番と逆順にデストラクタが呼び出されているものと思われる



