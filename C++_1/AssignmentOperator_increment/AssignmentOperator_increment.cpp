#include <iostream>

int main() {
	int x = 3;

	// ������Z�q
	x += 3;
	x -= 3;
	x *= 3;
	x /= 3;


	std::cout << x << "\n";
	// �O�u�C���N�������g=>1�𑫂��Ă���\��
	std::cout << ++x << "\n";
	// ��u�C���N�������g=>�\�����Ă���1�𑫂�
	std::cout << x++ << "\n";
	std::cout << x << "\n";
	
	//�f�N�������g
	std::cout << --x << "\n";
	std::cout << x-- << "\n";

	// const=>�萔��錾
	const int pi = 3.14159;

}