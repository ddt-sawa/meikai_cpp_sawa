/*
 * 3-20c.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習3-20 List 3-14は左下側の直角の直角三角形を表示するプログラムであった。
 * 直角が左上側、右上側、右下側の直角三角形を表示するプログラムをそれぞれ作成せよ
 *
 * b.右下側に直角が来るプログラム
 */

#include<iostream>

using namespace std;

int main()
{
	//直角三角形の段数
	int stepNumber;

	//段数入力を促す
	cout << "段数 : ";

	//段数入力
	cin >> stepNumber;

	//n段の直角三角形を表示するループ文
	for (int firstCounter = 1; firstCounter <= stepNumber; ++firstCounter){

		//右下に直角を持ってくるため、段数 - i 個ぶんの空白文字を置くループ文
		for (int secondCounter = 0; secondCounter < stepNumber - firstCounter; ++secondCounter) {
			//空白文字を表示
			cout << ' ';
		}
		//i個の記号を表示するループ文
		for (int thirdCounter = 0; thirdCounter < firstCounter; ++thirdCounter) {

			//記号を表示
			cout << '*';
		}
		//段を変えるため改行
		cout << '\n';
	}
}
