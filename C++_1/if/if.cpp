#include <iostream>

int main() {
	// bool=> true/false
	bool is_ok = false;
	is_ok = true; // 書き換えも可

	if (is_ok)
	{
		std::cout << "is_ok = true" << "\n";
	}

	int x = 30;

	if (x > 100)
	{
		std::cout << "x > 100" << "\n";
	}
	else if (x > 10)
	{
		std::cout << "x > 10" << "\n";
	}
	else {
		if (x == 10) {
			std::cout << "xは10です。" << "\n";
		}
		std::cout << "xは" << x << "です。" << "\n";
	}

	int y = 50;

	if (x>10 && y >10)
	{
		std::cout << "xもyも10以上です。" << "\n";
	}
}