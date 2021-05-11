#include<iostream>
using namespace std;
//자료형의 사이즈
int main(void) {

	cout << "char의 크기 : " << sizeof(char) << "바이트\n";
	cout << "unsigned char의 크기 : " << sizeof(unsigned char) << "바이트\n";
	cout << "short int의 크기 : " << sizeof(short int) << "바이트\n";
	cout << "unsigned short int의 크기 : " << sizeof(unsigned short int) << "바이트\n"; //short int나 short똑같은말
	cout << "int의 크기 : " << sizeof(int) << "바이트\n";
	cout << "unsigned int의 크기 : " << sizeof(unsigned int) << "바이트\n";
	cout << "long의 크기 : " << sizeof(long) << "바이트\n";
	cout << "unsigned long의 크기 : " << sizeof(unsigned long) << "바이트\n";
	cout << "float의 크기 : " << sizeof(float) << "바이트\n";
	cout << "double의 크기 : " << sizeof(double) << "바이트\n";
	cout << "포인터의 크기 : " << sizeof(void*) << "바이트\n";
	cout << "포인터의 크기 : " << sizeof(int*) << "바이트\n";
	cout << "long long의 크기 : " << sizeof(long long) << "바이트\n";
	char cMaxVal = 0x7f;
	unsigned char ucMaxVal = 0xff;

	cout << "char형 범위(1바이트)" << (int)(char)(cMaxVal+1) << "~"<<(int)ucMaxVal;
		}