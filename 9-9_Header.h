/*演習9-9 演習9-6(p.337)中の内部結合をもつ識別子を、名前なし名前空間に属するように変更したプログラムを作成せよ。
*/

/*変更したのは、Defining_UIFunctionのpromptAnswer関数（教材におけるp336入出力部のprompt関数）のみです。
(教材におけるp336ゲーム部のkotaeも内部結合性を持っていますが、演習課題9-6において外部結合に変更済み)*/

//数当てゲームの正解となる乱数
extern int randomNumber;

//乱数の上限値
extern const int maximumNumber;

//制限回数
extern const int limitNumber;

//srand関数を呼び出し、乱数テーブルを用意
void initializeRandomNumber();

//数当てゲームの正解となる乱数を生成
void generateRandomNumber();

//回答した値と正解の関係性を返却
int judgeAnswer(int);

//回答入力の手続きを行い、回答を返却
int inputAnswer();

//ゲーム続行の是非を確認
bool confirmRetry();