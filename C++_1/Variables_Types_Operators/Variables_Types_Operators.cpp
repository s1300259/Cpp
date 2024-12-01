#include <iostream>
#include <string>

int main() {

	int x;
	x = 3; // ‘ã“ü

	int y = 5; // ‰Šú‰»
	int z; 

	z = x + y;

	std::cout << z << "\n";
	std::cout << x - y << "\n";
	std::cout << x*y << "\n";
	std::cout << x/y << "\n";
	std::cout << x%y<< "\n";
	
	// •‚—V¬”“_Œ^
	double d = 3.14;

	std::cout << d / x << "\n";

	// char=>•¶šŒ^
	char c = 'a';

	// string=>•¶š—ñŒ^
	std::string message = "I`m learning";
	std::string message2 = " C++.";

	// +‚Å•¶š—ñ‚ğ˜AŒ‹
	std::cout << message + message2;

}
