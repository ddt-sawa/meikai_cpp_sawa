/*演習6-11 List6-11を拡張して、以下の4種類の問題を
 * ランダムに出力するプログラムを作成せよ。
 *
 * x + y + z    x + y - z    x - y + z    x - y - z
 */

#include<cstdlib>
#include<ctime>
#include<iostream>

using namespace std;

//関数名         : confirmRetry
//仕様           : 課題の続行を確認する
//引数           : なし
//返り値         : bool型変数userRetry("True"or"False")
//作成者         : sawa
//日付           : 7/11
bool confirmRetry()
{
	//課題続行を判断するint型変数を宣言
	int userRetry;

	//課題続行を確認するループ
	do {

		//課題続行の回答を促す
		cout << "もう一度？<Yes・・・1/No・・・0> : ";

		//回答入力
		cin >> userRetry;

		//0か1以外が入力された場合再試行
	}while (userRetry != 0 && userRetry != 1);

	//課題続行の可否をbool型変数として返却
	return static_cast<bool>(userRetry);
}

int main()
{

	cout << "暗算トレーニング開始!\n";

	srand(time(NULL));
	do {
		//暗算に使う3乱数と問題分岐に使う乱数の宣言
		int firstNumber = rand() % 900 + 100;   //整数x
		int secondNumber = rand() % 900 + 100;  //整数y
		int thirdNumber = rand() % 900 + 100;   //整数z
		int questionType = rand() % 4;

		//questionTypeの数値により、4通りの問題分岐
		switch (questionType) {

		//questionType == 0 の場合、出題は (x + y + z)
		case 0 : {

			//正解がでるまでループ
			while (true){

				//回答の宣言
				int userAnswer;

				//回答入力を促す
				cout << firstNumber << " + " << secondNumber << " + " << thirdNumber << " = ";

				//回答入力
				cin >> userAnswer;

				//回答が正解だった場合
				if (userAnswer == firstNumber + secondNumber + thirdNumber){

					//正解したことを告知
					cout << "正解です!";

					//回答ループを抜ける
					break;
				}
				//回答が違った場合、再回答
				cout << "違いますよ。\n";
			}
			//switch文による問題分岐を抜け、課題続行確認フェイズに移動
		}break;


		//questionType == 1 の場合、出題は (x + y - z)
		case 1 : {

			//正解がでるまでループ
			while (true){

				//回答の宣言
				int userAnswer;

				//回答入力を促す
				cout << firstNumber << " + " << secondNumber << " - " << thirdNumber << " = ";

				//回答入力
				cin >> userAnswer;

				//回答が正解だった場合
				if (userAnswer == firstNumber + secondNumber - thirdNumber){

					//正解したことを告知
					cout << "正解です!";

					//回答ループを抜ける
					break;
				}
				//回答が違った場合、再回答
				cout << "違いますよ。\n";
			}
			//switch文による問題分岐を抜け、課題続行確認フェイズに移動
		}break;

		//questionType == 2 の場合、出題は (x - y + z)
		case 2 : {

			//正解がでるまでループ
			while (true){

				//回答の宣言
				int userAnswer;

				//回答入力を促す
				cout << firstNumber << " - " << secondNumber << " + " << thirdNumber << " = ";

				//回答入力
				cin >> userAnswer;

				//回答が正解だった場合
				if (userAnswer == firstNumber - secondNumber + thirdNumber){

					//正解したことを告知
					cout << "正解です!";

					//回答ループを抜ける
					break;
				}
				//回答が違った場合、再回答
				cout << "違いますよ。\n";
			}
			//switch文による問題分岐を抜け、課題続行確認フェイズに移動
		}break;

		//questionType == 3 の場合、出題は (x - y - z)
		case 3 : {

			//正解がでるまでループ
			while (true){

				//回答の宣言
				int userAnswer;

				//回答入力を促す
				cout << firstNumber << " - " << secondNumber << " - " << thirdNumber << " = ";

				//回答入力
				cin >> userAnswer;

				//回答が正解だった場合
				if (userAnswer == firstNumber - secondNumber - thirdNumber){

					//正解したことを告知
					cout << "正解です!";

					//回答ループを抜ける
					break;
				}

				//回答が違った場合、再回答
				cout << "違いますよ。\n";

			}
			//switch文による問題分岐を抜け、課題続行確認フェイズに移動
		}break;
		}

		//confirm関数を呼び出し、返却値がTrueならば再試行
	}while(confirmRetry());
}
