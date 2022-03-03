//2117조해정 
#include<iostream>
using namespace std;

void main() {
	int a , b;
	cout << "정수1 입력 : ";
	cin >> a;
	cout << "정수2 입력 : ";
	cin >> b;
	
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	cout << endl;
	for (int i = a; i <= b; i++) {
		cout << i << "단" << endl;
		for (int j = 1; j <= 9; j++) {
			cout <<i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}


}