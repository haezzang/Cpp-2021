//2117������ 
#include<iostream>
#include<time.h>
using namespace std;

void main() {
	srand((unsigned)time(NULL));
	int a[7];
	cout << "������ : ";
	for (int i = 0; i < 7; i++) {
		a[i] = rand() % 46 + 1;
		for (int j = 0; j < i; j++) {
			if (a[i] == a[j])
				i--;
		}
	}

	for (int i = 0; i < 7; i++) {
		cout << a[i] << "\t";
	}

	cout << endl;
	for (int i = 0; i <6; i++) {
		for (int j = 0; j <6 - i ; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}	
	}

	cout << "������ : ";
	for (int i = 0; i < 7; i++) {
			cout <<a[i] << "\t";
	}
}