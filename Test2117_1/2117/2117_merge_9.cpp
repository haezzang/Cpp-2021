//2117조해정 
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
	cout << "첫번째 병합 데이타 5개 입력 : ";
	for (int i = 0; i < 5; i++) {
	cin >> a[i];
}
	cout << "두번째 병합 데이타 5개 입력 : ";
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
	cout << "첫번째 데이타 정렬 결과 : ";
	sort(a, 5); 
	cout << "두번째 데이타 정렬 결과 : ";
	sort(b, 5);
	cout << "최종 데이타 병합 결과 : ";
	sort(c, 10);
}