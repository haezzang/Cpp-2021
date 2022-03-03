#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;


void main() {

	int num1 = 2018;
	double num2 = 100.0;
	double num3 = 123.456;

	cout << "소수점 생락하지 않음" << endl;

	cout.setf(ios::showpoint);

	cout << "소수점 생락하지 않는 num1 = " <<num1<< endl;
	cout << "소수점 생락하지 않는 num2 = " << num2 << endl;
	cout << "소수점 생락하지 않는 num3 = " << num3 << endl;

	cout.setf(ios::showpos);
	cout << "부호 표시" << endl;
	cout << " num1 = " << num1 << endl;
	cout << " num2 = " << num2 << endl;
	cout << " num3 = " << num3 << endl; 

		//      unset();
		cout << "접두어 표시" << endl;
		cout.setf(ios::showbase);


		cout << "접두어 표시 10진수 num = " <<dec<< num1 << endl;
		cout << "접두어 표시 16진수 num = " << hex<<num1 << endl;
		cout << "접두어 표시 8진수 num = " << oct<<num1 << endl;
		cout << "16진수 대문자 표시" << endl;
		cout.setf(ios::uppercase);

		cout << "접두어 표시 10진수 num = " << dec << num1 << endl;
		cout << "접두어 표시 16진수 num = " << hex << num1 << endl;
		cout << "접두어 표시 8진수 num = " << oct << num1 << endl;
}
