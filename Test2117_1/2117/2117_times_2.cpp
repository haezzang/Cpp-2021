//2117������ 
#include<iostream>
using namespace std;

void main() {
	int a , b;
	cout << "����1 �Է� : ";
	cin >> a;
	cout << "����2 �Է� : ";
	cin >> b;
	
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	cout << endl;
	for (int i = a; i <= b; i++) {
		cout << i << "��" << endl;
		for (int j = 1; j <= 9; j++) {
			cout <<i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}


}