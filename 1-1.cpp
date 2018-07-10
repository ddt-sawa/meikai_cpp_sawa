/*演習1-1 ヘッダ<iostream>をインクルードする指令が欠如していると、どうなるであろうか。
プログラムをコンパイルして検証せよ*/

#include <iostream>

// std名前空間の利用
using namespace std;

// main関数の利用
int main()
{
	// 標準出力ストリーム（cout）と挿入子(<<)を利用し、コンソール画面に文字リテラルを出力
	std::cout << "初めてのC++プログラム。\n";
	cout << "画面に出力しています。\n";
}

//ヘッダを抜いた場合コンパイルエラーを確認
