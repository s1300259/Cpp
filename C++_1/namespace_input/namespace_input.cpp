#include <iostream>
#include <string>

// ���O���:���C�u�����Q�ƂŖ��O����邱�Ƃ�h��
using namespace std;

int main() {

	// ����
	std::cout << "Hello World\n";
	cout << "Hello World\n";

	std::cout << "Hello World" << std::endl; // endl=>���s
	cout << "HelloWorld" << endl;

	std::string message = "I am";
	string message2 = "Iam";

	
	{
		// �u���b�N���錾=>�u���b�N�������g�p�ł��Ȃ�
		int x = 10;
		cout << x << endl;
	}

	if (true)
	{
		int x = 10;
		cout << x << endl;
	}

	// ����=> cin>>�ϐ���;
	cin >> message;
	cout << message;
}