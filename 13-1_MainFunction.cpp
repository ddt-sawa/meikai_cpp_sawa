﻿/*
* 13-1test.cpp
*
*  Created on: 2018/07/04
*      Author: ddt
*/

/*演習13-1 日付クラスDate第4版に対して、以下の演算子関数を追加した日付クラスを作成せよ。
*
*  二つの日付が等しいかどうかを判定する等価演算子==
*  二つの日付が等しくないかどうかを判定する等価演算子=!
*  二つの日付の大小関係を判定する関係演算子 > >= < <= (より新しい日付のほうを大きいと判定すること)
*  二つの日付の減算を行う(何日離れているかを求める)減算演算子-
*  （左オペランドから右オペランドを引くこと。左右のオペランドの日付が等しければ0を返し、
*  左オペランドのほうが新しい日付であれば、日付の差を正の値として返し、
*  より古い日付であれば、日付の差を負の値として返すこと）
*  日付を翌日の日付に更新する増分演算子++(前置および後置)
*  日付を前日の日付に更新する減分演算子--(前置および後置)
*  日付をn日進めた日付に更新する複合代入演算子+=
*  日付をn日戻した日付に更新する複合代入演算子-=
*  日付のn日後の日付を求める加算演算子+
*  日付のn日前の日付を求める減算演算子-
*  */

#include<iostream>
#include"13-1_MemberDefinition1.h"

using namespace std;

int main()
{
	//DataClass型オブジェクトを誕生日で初期化
	DateClass myBirthday(1993, 7, 1);

	//比較用にもう一つ初期化
	DateClass comparisionDate(2018, 7, 26);

	//誕生日を表示
	cout << myBirthday << '\n';

	//二つの日付が等しいかどうかを判定する等価演算子==
	cout << (myBirthday == myBirthday) << '\n';

	//二つの日付が等しくないかどうかを判定する等価演算子=!
	cout << (myBirthday != myBirthday) << '\n';

	//二つの日付の大小関係を判定する関係演算子>
	cout << (myBirthday > myBirthday) << '\n';

	//二つの日付の大小関係を判定する関係演算子>=
	cout << (myBirthday >= myBirthday) << '\n';

	//二つの日付の大小関係を判定する関係演算子<
	cout << (myBirthday < myBirthday) << '\n';

	//二つの日付の大小関係を判定する関係演算子<=
	cout << (myBirthday <= myBirthday) << '\n';

	//二つの日付の減算を行う減算演算子-
	cout << (myBirthday - comparisionDate) << '\n';

	//日付を翌日の日付に更新する増分演算子(前置)++
	cout << ++myBirthday << '\n';

	//日付を翌日の日付に更新する増分演算子(後置)++
	cout << myBirthday++ << '\n';

	//日付を前日の日付に更新する減分演算子(前置)--
	cout << --myBirthday << '\n';

	//日付を前日の日付に更新する減分演算子(後置)--
	cout << myBirthday-- << '\n';

	//日付をn日進めた日付に更新する複合代入演算子+=
	cout << (myBirthday += 5) << '\n';

	//日付をn日戻した日付に更新する複合代入演算子-=
	cout << (myBirthday -= 5) << '\n';

	//日付のn日後の日付を求める加算演算子+
	cout << (myBirthday + 5) << '\n';

	//日付のn日後の日付を求める減算演算子-
	cout << (myBirthday - 5) << '\n';

	//全演算子の動作を確認
}