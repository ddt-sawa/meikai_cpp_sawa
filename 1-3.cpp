/*演習1-3 文の終端を示すセミコロン;が欠如しているとどうなるか。プログラムをコンパイルして検証せよ。*/

//<iostream>ヘッダのインクルード
#include<iostream>

// std名前空間の利用
using namespace std;

// main関数の利用
int main()
{
	// コンソール画面に文字リテラルを表示
	cout << "初めてのC++プログラム。\n";
	cout << "画面に出力しています。\n";
}

//セミコロンを抜いた場合、コンパイルエラーを確認
