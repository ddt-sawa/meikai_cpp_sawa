/*
 * 3-17.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

#include<string>
#include<iostream>

using namespace std;

int main()
{
	string retry;

	do {
		int month;
	    // 1-12以外の値が入力された場合再入力を行う
		do {
	        cout << "季節を求めます。\n何月ですか : ";
	        cin >> month;
	     } while(month < 1 || month >12);

	    if (month >= 3 && month <= 5)
		    cout << "それは春です。\n";
	    else if (month >= 6 && month <= 8)
		    cout << "それは夏です。\n";
	    else if (month >=9 && month <= 11)
	    	cout << "それは秋です。\n";
	    else if (month == 12 || month == 1 || month ==2)
	    	cout << "それは冬です。\n";

	    cout << "もう一度？ Y・・・Yes / N・・・No : ";
	    cin >> retry;
	} while (retry == "Y" || retry == "y");
}

