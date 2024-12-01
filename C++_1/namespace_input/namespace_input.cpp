#include <iostream>
#include <string>

// 名前空間:ライブラリ参照で名前が被ることを防ぐ
using namespace std;

int main() {

	// 同じ
	std::cout << "Hello World\n";
	cout << "Hello World\n";

	std::cout << "Hello World" << std::endl; // endl=>改行
	cout << "HelloWorld" << endl;

	std::string message = "I am";
	string message2 = "Iam";

	
	{
		// ブロック内宣言=>ブロック内しか使用できない
		int x = 10;
		cout << x << endl;
	}

	if (true)
	{
		int x = 10;
		cout << x << endl;
	}

	// 入力=> cin>>変数名;
	cin >> message;
	cout << message;
}