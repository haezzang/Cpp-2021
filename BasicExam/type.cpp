#include<iostream>
using namespace std;
//�ڷ����� ������
int main(void) {

	cout << "char�� ũ�� : " << sizeof(char) << "����Ʈ\n";
	cout << "unsigned char�� ũ�� : " << sizeof(unsigned char) << "����Ʈ\n";
	cout << "short int�� ũ�� : " << sizeof(short int) << "����Ʈ\n";
	cout << "unsigned short int�� ũ�� : " << sizeof(unsigned short int) << "����Ʈ\n"; //short int�� short�Ȱ�����
	cout << "int�� ũ�� : " << sizeof(int) << "����Ʈ\n";
	cout << "unsigned int�� ũ�� : " << sizeof(unsigned int) << "����Ʈ\n";
	cout << "long�� ũ�� : " << sizeof(long) << "����Ʈ\n";
	cout << "unsigned long�� ũ�� : " << sizeof(unsigned long) << "����Ʈ\n";
	cout << "float�� ũ�� : " << sizeof(float) << "����Ʈ\n";
	cout << "double�� ũ�� : " << sizeof(double) << "����Ʈ\n";
	cout << "�������� ũ�� : " << sizeof(void*) << "����Ʈ\n";
	cout << "�������� ũ�� : " << sizeof(int*) << "����Ʈ\n";
	cout << "long long�� ũ�� : " << sizeof(long long) << "����Ʈ\n";
	char cMaxVal = 0x7f;
	unsigned char ucMaxVal = 0xff;

	cout << "char�� ����(1����Ʈ)" << (int)(char)(cMaxVal+1) << "~"<<(int)ucMaxVal;
		}