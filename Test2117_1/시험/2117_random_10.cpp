//2117������
#include<iostream>
using namespace std;

void main() {
	srand((unsigned)time(0)); 
	int a;
	cout << "������ : ";
	for (int i = 1; i <= 7; i++) {
		a = rand() % 45 + 1;
		cout << a << "\t";
	}






}