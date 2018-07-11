/*
 * 4-2b.cc*/

/*演習4-2 以下のプログラムを作成せよ。
 b.unsigned型の最小値から最大値までの全整数値を8進数、10進数、16進数で表示。
 */

/*演習4-2以下のプログラムを作成せよ。
 a.int型の最小値から最大値までの全整数値を8進数、10進数、16進数で表示。
 */

#include<iostream>

using namespace std;

int main()
{
	//unsigned int型の最小値から最大値まで表示
	for (unsigned CounterVariable = 0; ; ++CounterVariable){

		//8進数で表示
		cout << oct << CounterVariable << '\n';
		//10進数で表示
		cout << dec << CounterVariable << '\n';
		//16進数で表示
		cout << hex << CounterVariable << '\n';
	}

}
