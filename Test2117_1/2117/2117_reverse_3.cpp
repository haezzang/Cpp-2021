//2117������ 
#include<iostream>
using namespace std;

void main() {
	int num;
	cout << "�� �Է� : ";
	cin >> num;
	cout << "��� : ";
	while (num) {
		cout << num % 10;
		num = num / 10;
	}
}