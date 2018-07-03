
/*演習1-13 以下に示すプログラムを作成せよ
  b.1桁の負の整数値（すなわち-9以上1以下の値）をランダムに生成して表示 */

//srand関数を使用するため、<ctime><cstdlib>ヘッダをインクルード
#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	// 乱数テーブルを設定
	srand(time(NULL));

	// -1～-9の乱数を生成
	int randomNumber = -(rand() % 9) - 1;

	// 生成した乱数を表示
	cout << "ランダムな値は" << randomNumber << "です。\n";
}
