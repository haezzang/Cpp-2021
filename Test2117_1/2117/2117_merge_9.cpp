//2117������ 
#include<iostream>
using namespace std;

void sort(int x[], int x_len) {
	for (int i = 0; i <x_len-1; i++) {
		for (int j = 0; j < x_len- i-1; j++) {
			if (x[j] > x[j + 1]) {
				int temp;
				temp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = temp;
			}
		}
	}
	int j = 1;
	for (int i = 0; i <x_len; i++) {
		if (x[i] != x[j++])
			cout << x[i] << " ";
	}
	cout << endl;
}
int  main() {
	int a[5];
	int b[5];
	int c[10];
	cout << "ù��° ���� ����Ÿ 5�� �Է� : ";
	for (int i = 0; i < 5; i++) {
	cin >> a[i];
}
	cout << "�ι�° ���� ����Ÿ 5�� �Է� : ";
	for (int i = 0; i < 5; i++) {
		cin >> b[i];
	}

	for (int i = 0; i <5; i++) {
		c[i] = a[i];
	}
	for (int i = 5; i < 10; i++) {
		c[i] = b[i-5];
	}
	cout << "**********************" << endl;;
	cout << "ù��° ����Ÿ ���� ��� : ";
	sort(a, 5); 
	cout << "�ι�° ����Ÿ ���� ��� : ";
	sort(b, 5);
	cout << "���� ����Ÿ ���� ��� : ";
	sort(c, 10);
}