/*
 * 3-26.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習3-26 人間とコンピュータとが対戦するジャンケンプログラムを作成せよ。
 * a.人間が望む限り何度でも繰り返せるようにするもの。
 */


//srand関数を使用するため、<ctime>と<cstdlib>ヘッダを宣言
#include<ctime>
#include<cstdlib>
#include<iostream>
//string型変数を使用するため、<string>ヘッダを宣言
#include<string>

using namespace std;

int main()
{
	//rand関数を使う準備
	srand(time(NULL));
    //もう一度ジャンケンするかを尋ねるstring型変数retryを宣言
	string retry;

     do{

        //人間の手をhumanとする
        int human;

	    do{
	    cout << "あなたの手を選んでください。(0 =『グー』 1 =『チョキ』 2 =『パー』) : "; cin >> human;
	    }while (human < 0 || human > 2);

	    //コンピューターの手をhandとする
	    int hand = rand() % 3;

	    //コンピュータの手と人間の手で場合分け
         if (human == 0){
             switch (hand){
             case 0 : cout << "コンピュータの手はグー、あいこです。\n";           break;
             case 1 : cout << "コンピュータの手はチョキ、あなたの勝ちです。\n"; break;
             case 2 : cout << "コンピュータの手はパー、あなたの負けです。\n";   break;
             }
         }
         else if (human == 1){
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
     //もう一度じゃんけんをするか尋ねる
    cout << " もう一回やりますか？　(『はい』= Y 『いいえ』 = N)\n";
    //retryに'Y'か'y'が入力された場合もう一度
    cin >> retry;
     }while (retry == "Y" || retry == "y");
}

