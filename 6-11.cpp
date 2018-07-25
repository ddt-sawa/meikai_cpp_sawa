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
	int userRetry = 0;

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

/**
* 受け取った乱数によって問題文の表示内容を変更する
* @param questionNumber 問題文の表示内容を決める乱数, firstNumber, secondNumber, thirdNumber 計算数値となる乱数
* @return
* @author Sawa
* @since 7.25
*/
void printQuestion(int questionNumber, int firstNumber, int secondNumber, int thirdNumber)
{
	//問題分岐
	switch (questionNumber) {
		
	//受け取った乱数が0の場合
	case 0:
		cout << firstNumber << " + " << secondNumber << " + " << thirdNumber << " = "; //x + y + z を表示
		break;
	//1の場合
	case 1:
		cout << firstNumber << " + " << secondNumber << " - " << thirdNumber << " = "; //x + y - z を表示
		break;
	//2の場合
	case 2:
		cout << firstNumber << " - " << secondNumber << " + " << thirdNumber << " = "; //x - y + z を表示
		break;
	//3の場合
	case 3:
		cout << firstNumber << " - " << secondNumber << " - " << thirdNumber << " = "; //x - y - z を表示
		break;
	//それ以外の場合何も表示しない
	default:
		break;
	}
}

/**
* 受け取った乱数によって入力値が正解がどうかを判断する
* @param questionNumber 問題文を決める乱数, firstNumber, secondNumber, thirdNumber 計算数値となる乱数, userAnswer 入力値
* @return
* @author Sawa
* @since 7.25
*/
bool judgeAnswer(int questionNumber, int firstNumber, int secondNumber, int thirdNumber, int userAnswer)
{
	//問題分岐
	switch (questionNumber) {

	//受け取った乱数が0の場合
	case 0://回答がx + y + zなら正解
		if (userAnswer == firstNumber + secondNumber + thirdNumber) {
			return true;
		}
		break;
	//1の場合
	case 1://回答がx + y - zなら正解
		if (userAnswer == firstNumber + secondNumber - thirdNumber) {
			return true;
		}
		break;
	//2の場合
	case 2://回答がx - y + zなら正解
		if (userAnswer == firstNumber - secondNumber + thirdNumber) {
			return true;
		}
		break;
	//3の場合
	case 3://回答がx - y - zなら正解
		if (userAnswer == firstNumber - secondNumber - thirdNumber) {
			return true;
		}
		break;
	//それ以外の場合何も表示しない
	default:
		break;
	}
	//回答が間違っていた場合falseを返す
	return false;
}


int main()
{
	//ゲーム開始の合図
	cout << "暗算トレーニング開始!\n";

	//乱数テーブルを用意
	srand(time(NULL));
	do {
		//暗算に使う3乱数と問題分岐に使う乱数の宣言
		int firstNumber = rand() % 900 + 100;   //整数x
		int secondNumber = rand() % 900 + 100;  //整数y
		int thirdNumber = rand() % 900 + 100;   //整数z
		int questionType = rand() % 4;          //4通りのランダムな問題分岐

			//暗算の正解がでるまでループ
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

		//ゲーム続行の意思を確認し、入力値が1ならばゲーム再開
	}while(confirmRetry());
}
