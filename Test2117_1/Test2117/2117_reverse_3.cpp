//2117조해정 
#include<iostream>
using namespace std;

void main() {
	int num;
	cout << "수 입력 : ";
	cin >> num;
	cout << "결과 : ";
	while (num) {
		cout << num % 10;
		num = num / 10;
	}
}