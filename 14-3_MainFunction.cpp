/*演習14-3 簡易的な文字列クラスStringを作成せよ。以下のコードを参考にして、
コンストラクタ・デストラクタ・各メンバ関数を、自分で設計すること。*/

#include <iostream>
#include "14-3_StringClass.h"
#include "14-3_MemberDefinition.h"

using namespace std;

int main()
{
	//SringClass型オブジェクトを3つ初期化
	StringClass firstString = "ABC";
	StringClass secondString = "DEFG";
	StringClass thirdString = "HIJKL";

	//演算子関数+の動作を確認
	cout << (firstString + secondString) << '\n'; //"ABCDEFG"と表示

    //代入演算子=の動作を確認
	firstString = thirdString;

	cout << firstString << '\n'; //"HIJKL"と表示
}