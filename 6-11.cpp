/*演習6-11 List6-11を拡張して、以下の4種類の問題を
 * ランダムに出力するプログラムを作成せよ。
 *
 * x + y + z    x + y - z    x - y + z    x - y - z
 */

#include<cstdlib>
#include<ctime>
#include<iostream>

using namespace std;

/**
*関数内で入力された値によって課題続行を判断する
* @return bool型の値
* @author Sawa
* @since 7.17
*/
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

void printQuestion(int questionNumber, int firstNumber, int secondNumber, int thirdNumber)
{
	switch (questionNumber) {
	case 0:
		cout << firstNumber << " + " << secondNumber << " + " << thirdNumber << " = ";
		break;
	case 1:
		cout << firstNumber << " + " << secondNumber << " - " << thirdNumber << " = ";
		break;
	case 2:
		cout << firstNumber << " - " << secondNumber << " + " << thirdNumber << " = ";
		break;
	case 3:
		cout << firstNumber << " - " << secondNumber << " - " << thirdNumber << " = ";
		break;
	default:
		break;
	}
}

bool judgeAnswer(int questionNumber, int firstNumber, int secondNumber, int thirdNumber, int userAnswer)
{
	switch (questionNumber) {
	case 0: 
		if (userAnswer == firstNumber + secondNumber + thirdNumber) {
			return true;
		}
		break;
	case 1:
		if (userAnswer == firstNumber + secondNumber - thirdNumber) {
			return true;
		}
		break;
	case 2:
		if (userAnswer == firstNumber - secondNumber + thirdNumber) {
			return true;
		}
		break;
	case 3:
		if (userAnswer == firstNumber - secondNumber - thirdNumber) {
			return true;
		}
		break;
	default:
		break;
	}
	return false;
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

		

			//正解がでるまでループ
			while (true){

				//問題文表示
				printQuestion(questionType, firstNumber, secondNumber, thirdNumber);

				//回答の宣言
				int userAnswer;

				//回答入力
				cin >> userAnswer;

				//回答が正解だった場合
				if (judgeAnswer(questionType, firstNumber, secondNumber, thirdNumber, userAnswer) == true) {

					//正解したことを告知
					cout << "正解です!";

					//回答ループを抜ける
					break;
				}

				//回答が違った場合、再回答
				cout << "違いますよ。\n";

			}

		//confirm関数を呼び出し、返却値がTrueならば再試行
	}while(confirmRetry());
}
