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
//stringクラステンプレートを使用するため、<string>ヘッダを宣言
#include<string>

using namespace std;

int main()
{
	//乱数テーブルを準備
	srand(time(NULL));

	//再試行するかを判断する文字列
	string inputRetry;

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
		int conputerHand = rand() % 3;

		//人間の手が0 =『グー』の場合
		if (humanHand == 0){
			//コンピューターの手で場合分け
			switch (conputerHand){

			case 0 : cout << "コンピュータの手はグー、あいこです。\n";
			break;

			case 1 : cout << "コンピュータの手はチョキ、あなたの勝ちです。\n";
			break;

			case 2 : cout << "コンピュータの手はパー、あなたの負けです。\n";
			break;
			}
		}

		//人間の手が1 =『チョキ』の場合
		else if (humanHand == 1){

			//コンピューターの手で場合分け
			switch (conputerHand){

			case 0 : cout << "コンピュータの手はグー、あなたの負けです。\n";
			break;

			case 1 : cout << "コンピュータの手はチョキ、あいこです。\n";
			break;

			case 2 : cout << "コンピュータの手はパー、あなたの勝ちです。\n";
			break;
			}
		}

		//人間の手が2 =『パー』の場合
		else {

			//コンピューターの手で場合分け
			switch (conputerHand){

			case 0 : cout << "コンピュータの手はグー、あなたの勝ちです。\n";
			break;

			case 1 : cout << "コンピュータの手はチョキ、あなたの負けです。\n" ;
			break;

			case 2 : cout << "コンピュータの手はパー、あいこです。\n";
			break;
			}
		}

		//もう一度じゃんけんをするか尋ねる
		cout << " もう一回やりますか？ (『はい』= Y 『いいえ』 = N)\n";

		//文字列入力
		cin >> inputRetry;

		//'Y'か'y'が入力された場合、もう一度じゃんけん
	}while (inputRetry == "Y" || inputRetry == "y");
}

