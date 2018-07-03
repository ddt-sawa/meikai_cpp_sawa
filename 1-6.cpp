/*演習1-6 List1-7のプログラムを変更して、小数部をもつ実数値をxやyに代入するプログラムを作成せよ。
その実行結果から、int型変数が整数値のみしか扱えないことを確認すること*/

// <iostream>ヘッダのインクルード
#include<iostream>

// std名前空間の利用
using namespace std;

// main関数の利用
int main()
{
   //xに代入する値をfirstNumberとする
    int firstNumber;

    //yに代入する値をsecondNumberとする
    int secondNumber;

    //int型変数firstNumberに対し、課題確認のためあえて小数部を持つ実数値を代入
    firstNumber = 63.5;

    //int型変数firstNumberに対し、課題確認のためあえて.0の小数表記を持つ実数値を代入
    secondNumber = 18.0;

    //firstNumberの表示において小数部切捨てを確認
    cout << "xの値は" << firstNumber << "です。\n";
    //secondNumberの表示において小数部切捨てを確認
    cout << "yの値は" << secondNumber << "です。\n";

    //両変数の合計において小数部切捨てを確認
    cout << "合計は" << firstNumber + secondNumber << "です。\n";
    //両変数の平均において少数部切捨てを確認
    cout << "平均は" << (firstNumber + secondNumber) / 2 << "です。\n";
}

//int型変数の評価において、小数部が切り捨てられることを確認
