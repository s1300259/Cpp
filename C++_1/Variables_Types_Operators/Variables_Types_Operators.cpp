#include <iostream>
#include <string>

int main() {

	int x;
	x = 3; // ���

	int y = 5; // ������
	int z; 

	z = x + y;

	std::cout << z << "\n";
	std::cout << x - y << "\n";
	std::cout << x*y << "\n";
	std::cout << x/y << "\n";
	std::cout << x%y<< "\n";
	
	// ���V�����_�^
	double d = 3.14;

	std::cout << d / x << "\n";

	// char=>�����^
	char c = 'a';

	// string=>������^
	std::string message = "I`m learning";
	std::string message2 = " C++.";

	// +�ŕ������A��
	std::cout << message + message2;

}
