#include <iostream>

using namespace std;

// プロトタイプ宣言
void say_yes();

// 関数=>　返り値の型　関数名（因数の型）
void say_hello(){
	cout << "Hello" << endl;
}

// mainで定義したものをコピーして使用 =>xの値をaにコピーして使用
// returnで返す
int sqrt(int a) {
	return a * a;
}

int main() {
	// 関数の呼び出し
	say_hello();
	say_hello();
	say_hello();

	say_yes();

	int x = 10;

	int y = x * x;
	//関数の呼び出し=> y=関数名(引数)
	// a*aを受け取る=>x
	int y2 = sqrt(x);

	cout << y2 << endl;
}

void say_yes() {
	cout << "Yes!" << endl;
}