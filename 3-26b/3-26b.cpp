/*
 * 3-26b.cc
 *
 *  Created on: 2018/06/20
 *      Author: syuka
 */

/*演習3-26 人間とコンピュータとが対戦するジャンケンプログラムを作成せよ。
 * b.いずれか一方が3回勝つまで繰り返すもの。
 */

//srand関数を使用するため、<ctime>と<cstdlib>ヘッダを宣言
#include<ctime>
#include<cstdlib>
#include<iostream>
//stringクラスを使用するため、<string>ヘッダを宣言
#include<string>

using namespace std;

int main()
{
	//乱数テーブルを準備
	srand(time(NULL));

	//人間の勝利回数
	int userWin = 0;

    //人間の敗北回数
	int userLose = 0;


	//人間とコンピューターでじゃんけんをするループ文
	do{

	        //人間の手
	        int humanHand;

	        //人間の手を決めさせるためのループ文
		    do{

		        //人間の手を0から2の入力値で決めることを告知
		        cout << "あなたの手を選んでください。(0 =『グー』 1 =『チョキ』 2 =『パー』) : ";

		        //手を入力
		        cin >> humanHand;

		        //入力値が0,1,2だった場合ループを抜ける
		        }while (humanHand < 0 || humanHand > 2);

		    //コンピューターの手(0から2の乱数)
		    int computerHand = rand() % 3;

		    //人間の手が0 =『グー』の場合
         if (humanHand == 0){
             switch (computerHand){

             case 0 : cout << "コンピュータの手はグー、あいこです。\n";
             break;

             case 1 : cout << "コンピュータの手はチョキ、あなたの勝ちです。\n";
             userWin++;  //勝利回数+1
             break;

             case 2 : cout << "コンピュータの手はパー、あなたの負けです。\n";
             userLose++; //敗北回数+1
             break;
             }
         }

         //人間の手が1 =『チョキ』の場合
         else if (humanHand == 1){
            switch (computerHand){

            case 0 : cout << "コンピュータの手はグー、あなたの負けです。\n";
            userLose++;  //敗北回数+1
            break;

	        case 1 : cout << "コンピュータの手はチョキ、あいこです。\n" ;
	        break;

    	    case 2 : cout << "コンピュータの手はパー、あなたの勝ちです。\n";
    	    userWin++;   //勝利回数+1
    	    break;
            }
         }

         //人間の手が2 =『パー』の場合
	     else {
	        switch (computerHand){

	        case 0 : cout << "コンピュータの手はグー、あなたの勝ちです。\n";
	        userWin++;   //勝利回数+1
	        break;

		    case 1 : cout << "コンピュータの手はチョキ、あなたの負けです。\n";
		    userLose++;  //敗北回数+1
		    break;

		    case 2 : cout << "コンピュータの手はパー、あいこです。\n";
		    break;
		    }
	     }
         //現在の勝敗を告知
         cout << "現在" << userWin << "勝" << userLose << "敗です。\n";

         //どちらかが3勝するまでじゃんけんループ
     }while (userWin < 3 && userLose < 3);

	//人間が3勝した場合
    if (userWin == 3) {

    	//勝利を告知
    	cout << "おめでとうございます、あなたの勝利です。\n";
    }

    //人間が3敗した場合
    else {
    	//敗北を告知
    	cout << "残念ながら、あなたの敗北です。\n";
    }
}
