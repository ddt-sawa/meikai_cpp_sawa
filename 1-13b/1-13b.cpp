
/*演習1-13 以下に示すプログラムを作成せよ
  b.1桁の負の整数値（すなわち-9以上1以下の値）をランダムに生成して表示 */

#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	// 乱数の種を設定
	srand(time(NULL));

	// -1～-9の乱数を生成
	int lucky = -(rand() % 9) - 1;

	// 生成した乱数を表示
	cout << "ランダムな値は" << lucky << "です。\n";
}
