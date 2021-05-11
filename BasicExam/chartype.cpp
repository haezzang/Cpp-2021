#include<iostream>
using namespace std;

int main(void) {

	int iCode;
	iCode = 'A';
	cout << (char)iCode << "-" << iCode << endl;
	iCode = 'B';
	cout << (char)iCode << "-" << iCode << endl;
	iCode = 'C';
	cout << (char)iCode << "-" << iCode << endl;
	char cCode = 'a';
	cout << cCode << "-" << (int)cCode << endl;
	cCode = 'b';
	cout << cCode << "-" << (int)cCode << endl;
	iCode = 'c';
	cout << cCode << "-" << (int)cCode << endl;

	iCode = 'A';
	cout << (char)iCode << "-" << iCode << endl;
	iCode = iCode + 1;
	cout << (char)iCode << "-" << iCode << endl;

}