#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;


void main() {

	int num1 = 2018;
	double num2 = 100.0;
	double num3 = 123.456;

	cout << "�Ҽ��� �������� ����" << endl;

	cout.setf(ios::showpoint);

	cout << "�Ҽ��� �������� �ʴ� num1 = " <<num1<< endl;
	cout << "�Ҽ��� �������� �ʴ� num2 = " << num2 << endl;
	cout << "�Ҽ��� �������� �ʴ� num3 = " << num3 << endl;

	cout.setf(ios::showpos);
	cout << "��ȣ ǥ��" << endl;
	cout << " num1 = " << num1 << endl;
	cout << " num2 = " << num2 << endl;
	cout << " num3 = " << num3 << endl; 

		//      unset();
		cout << "���ξ� ǥ��" << endl;
		cout.setf(ios::showbase);


		cout << "���ξ� ǥ�� 10���� num = " <<dec<< num1 << endl;
		cout << "���ξ� ǥ�� 16���� num = " << hex<<num1 << endl;
		cout << "���ξ� ǥ�� 8���� num = " << oct<<num1 << endl;
		cout << "16���� �빮�� ǥ��" << endl;
		cout.setf(ios::uppercase);

		cout << "���ξ� ǥ�� 10���� num = " << dec << num1 << endl;
		cout << "���ξ� ǥ�� 16���� num = " << hex << num1 << endl;
		cout << "���ξ� ǥ�� 8���� num = " << oct << num1 << endl;
}