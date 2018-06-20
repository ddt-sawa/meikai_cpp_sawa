/*
 * 3-26.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習3-26 人間とコンピュータとが対戦するジャンケンプログラムを作成せよ。
 * a.人間が望む限り何度でも繰り返せるようにするもの。
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
    //もう一度ジャンケンするかを尋ねるretry
	string retry;

     do{

        //人間の手をnとする
        int n;

	    do{
        cout << "あなたの手を選んでください。(0 =『グー』 1 =『チョキ』 2 =『パー』) :"; cin >> n;
	    }while (n < 0 || n > 2);

	    //コンピューターの手をhandとする
	    int hand = rand() % 3;

	    //コンピュータの手と人間の手で場合分け
         if (n == 0){
             switch (hand){
             case 0 : cout << "コンピュータの手はグー、あいこです\n";           break;
             case 1 : cout << "コンピュータの手はチョキ、あなたの勝ちです。\n"; break;
             case 2 : cout << "コンピュータの手はパー、あなたの負けです。\n";   break;
             }
         }
         else if (n == 1){
            switch (hand){
            case 0 : cout << "コンピュータの手はグー、あなたの負けです。\n"; break;
	        case 1 : cout << "コンピュータの手はチョキ、あいこです。\n" ;   break;
    	    case 2 : cout << "コンピュータの手はパー、あなたの勝ちです。\n";break;
            }
         }

	     else {
	        switch (hand){
	        case 0 : cout << "コンピュータの手はグー、あなたの勝ちです。\n"; break;
		    case 1 : cout << "コンピュータの手はチョキ、あなたの負けです。\n" ; break;
		    case 2 : cout << "コンピュータの手はパー、あいこです。\n"; break;
		    }
	     }
cout << " もう一回やりますか？　(『はい』= Y 『いいえ』 = N)\n";
cin >> retry;
 }while (retry == "Y" || retry == "y");
}

