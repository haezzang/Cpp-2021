//2117������
#include<iostream>
using namespace std;

void main() {
	int num1 , num2;
	cout << "����1 �Է� : ";
	cin >> num1;
	cout << "����2 �Է� : ";
	cin >> num2;

	cout << endl;
	if(num1<num2)
	for (int i = num1; i <= num2; i++) {
		cout << i << "��" << endl;
		for (int j = 1; j <= 9; j++) {
			cout << num1 << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}

	else
		for (int i = num2; i <= num1; i++) {
			cout << i << "��" << endl;
			for (int j = 1; j <= 9; j++) {
				cout << num2 << " * " << j << " = " << i * j << endl;
			}
			cout << endl;
		}




}