/*
 * 3-20b.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習3-20 List 3-14は左下側の直角の直角三角形を表示するプログラムであった。
 * 直角が左上側、右上側、右下側の直角三角形を表示するプログラムをそれぞれ作成せよ
 *
 * b.右上側に直角が来るプログラム
 */

#include<iomanip>
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

	//n段の直角三角形を表示するループ
	for (int firstCounter = 0; firstCounter <= stepNumber; firstCounter++){

		//右上に直角を持ってくるために、段数ぶんの空白文字を置くループ文
		for (int secondCounter = 0; secondCounter < firstCounter; secondCounter++) {
			cout << " ";
		}
		//段数-i個の記号を置くループ文
		for (int thirdCounter = 1; thirdCounter <= stepNumber - firstCounter; thirdCounter++) {
			cout << '*';
		}
		cout << '\n';
    }
}
