#include<iostream>
using namespace std;

int main(void) {

	int iCode = 1000;
	iCode = 'A';
	cout <<iCode << "-" << (char)iCode << endl;
	iCode = (int)1.4321;
	cout <<iCode << "-" << (char)iCode << endl;
	cout << iCode << endl;

	iCode = (int)1.5678;
	cout << iCode << endl;
	double dResult = 0.0;
	dResult = 100 + 3 / 2;
	cout << dResult;

}