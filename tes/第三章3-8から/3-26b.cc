/*
 * 3-26b.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習3-26 人間とコンピュータとが対戦するジャンケンプログラムを作成せよ。
 * b.いずれか一方が3回勝つまで繰り返すもの。
 */

#include<ctime>
#include<cstdlib>
#include<iostream>
#include<string>

using namespace std;

int main()
{
	//rand関数を使う準備
	srand(time(NULL));

	//人間の勝利回数をwin、敗北回数をloseで管理する
	int win = 0; int lose = 0;

	//winかloseの値が3以上になるまでジャンケンを繰り返す
     do{

        //人間の手をnとする
        int n;

	    do{
        cout << "あなたの手を選んでください。(0 =『グー』 1 =『チョキ』 2 =『パー』) : "; cin >> n;
	    }while (n < 0 || n > 2);

	    //コンピューターの手をhandとする
	    int hand = rand() % 3;

	    //コンピュータの手と人間の手で場合分け
         if (n == 0){
             switch (hand){
             case 0 : cout << "コンピュータの手はグー、あいこです\n";           break;
             case 1 : cout << "コンピュータの手はチョキ、あなたの勝ちです。\n"; win++; break;
             case 2 : cout << "コンピュータの手はパー、あなたの負けです。\n";  lose++; break;
             }
         }
         else if (n == 1){
            switch (hand){
            case 0 : cout << "コンピュータの手はグー、あなたの負けです。\n"; lose++; break;
	        case 1 : cout << "コンピュータの手はチョキ、あいこです。\n" ;   break;
    	    case 2 : cout << "コンピュータの手はパー、あなたの勝ちです。\n"; win++; break;
            }
         }

	     else {
	        switch (hand){
	        case 0 : cout << "コンピュータの手はグー、あなたの勝ちです。\n"; win++; break;
		    case 1 : cout << "コンピュータの手はチョキ、あなたの負けです。\n";lose++; break;
		    case 2 : cout << "コンピュータの手はパー、あいこです。\n"; break;
		    }
	     }
cout << "現在" << win << "勝" << lose << "敗です。\n";
 }while (win < 3 && lose < 3);

if (win == 3) cout << "おめでとうございます、あなたの勝利です。\n";
else cout << "残念ながら、あなたの敗北です。\n";
}
