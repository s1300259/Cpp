#include <iostream>
#include <string>

using namespace std;

int main() {

	int x = 10;
	
	for (int i = 0; i <= 10; i++)
	{
		cout << i << endl;
	}

	const int num = 5;
	// 配列=>型　変数名[i]
	int IDs[num];
	IDs[0] = 10;
	IDs[1] = 20;
	IDs[2] = 30;


	cout << IDs[0] << endl;
	cout << IDs[1] << endl;
	cout << IDs[2] << endl;
	cout << IDs[3] << endl; // 初期化をしていないのでアドレスが表示される
	cout << IDs[4] << endl;

	for (int i = 0; i <= num; i++)
	{
		cout << IDs[i] << endl;
	}
	// 初期化=>型　変数名[]={値,…}
	int IDs2[] = { 100, 200, 300, 400, 500 };

}