
#include<iostream>

using namespace std;

int main()
{
	//整数の個数を入力
	int n;
	cout << "整数を加算します。\n";
	cout << "何個加算しますか : ";
	cin >> n;

	//平均を求めるため、int型変数ではなくdouble型変数を初期化
    double sum = 0;

    //平均をdouble型変数aveで表す
    double ave;

    //n回整数入力を繰り返す
    for (int i = 0; i < n; i++){
    	int t;
    	cout << "整数 : ";
    	cin >> t;
    	//合計が1000を超えた場合終了
    	if (sum + t > 1000){
    		cout << "合計が1000を超えました。\n最後の数値は無視します。\n";
    	    break;
    	}
    	//合計に入力値を加算
    	sum += t;
    	//平均を計算
    	ave = sum / i;
    }
    //合計を表示
    cout << "合計は" << sum << "です。\n";
    //平均を表示
    cout << "平均は" << ave << "です。\n";
}
