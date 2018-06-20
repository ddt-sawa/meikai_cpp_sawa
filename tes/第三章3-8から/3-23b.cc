
#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "整数を加算します。\n";
	cout << "何個加算しますか : ";
	cin >> n;

	//平均を求めるため、int型変数ではなくdouble型変数を初期化
    double sum = 0;

    //平均をdouble型変数aveで表す
    double ave;

    for (int i = 1; i <= n; i++){
    	int t;
    	cout << "整数 : ";
    	cin >> t;
    	if (sum + t > 1000){
    		cout << "合計が1000を超えました。\n最後の数値は無視します。\n";
    	    break;
    	}
    	sum += t;
    	ave = sum / i;
    }
    cout << "合計は" << sum << "です。\n";
    cout << "平均は" << ave << "です。\n";
}
