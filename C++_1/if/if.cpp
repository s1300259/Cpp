#include <iostream>

int main() {
	// bool=> true/false
	bool is_ok = false;
	is_ok = true; // ‘‚«Š·‚¦‚à‰Â

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
			std::cout << "x‚Í10‚Å‚·B" << "\n";
		}
		std::cout << "x‚Í" << x << "‚Å‚·B" << "\n";
	}

	int y = 50;

	if (x>10 && y >10)
	{
		std::cout << "x‚ày‚à10ˆÈã‚Å‚·B" << "\n";
	}
}