#include <iostream>

using namespace std;

// �v���g�^�C�v�錾
void say_yes();

// �֐�=>�@�Ԃ�l�̌^�@�֐����i�����̌^�j
void say_hello(){
	cout << "Hello" << endl;
}

// main�Œ�`�������̂��R�s�[���Ďg�p =>x�̒l��a�ɃR�s�[���Ďg�p
// return�ŕԂ�
int sqrt(int a) {
	return a * a;
}

int main() {
	// �֐��̌Ăяo��
	say_hello();
	say_hello();
	say_hello();

	say_yes();

	int x = 10;

	int y = x * x;
	//�֐��̌Ăяo��=> y=�֐���(����)
	// a*a���󂯎��=>x
	int y2 = sqrt(x);

	cout << y2 << endl;
}

void say_yes() {
	cout << "Yes!" << endl;
}