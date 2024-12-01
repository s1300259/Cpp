#include <iostream>

int main() {
	int x = 3;

	// 代入演算子
	x += 3;
	x -= 3;
	x *= 3;
	x /= 3;


	std::cout << x << "\n";
	// 前置インクリメント=>1を足してから表示
	std::cout << ++x << "\n";
	// 後置インクリメント=>表示してから1を足す
	std::cout << x++ << "\n";
	std::cout << x << "\n";
	
	//デクリメント
	std::cout << --x << "\n";
	std::cout << x-- << "\n";

	// const=>定数を宣言
	const int pi = 3.14159;

}