#include<iostream>
using namespace std;
//10진수를 2진수로 변환
int main() {

	int num;
	int binary[8];
	int cnt=0;
	cout << "10진수 입력 : ";
	cin >> num;
	for (int i = 0; i <8; i++) {
		binary[i] = num % 2;
		num = num / 2;
	}

	for (int i = 7; i >=0; i--) {
		if (binary[i] == 0)
			continue;
		else if (binary[i] == 1) 
			cnt = i; break;
	}
	for (int i = cnt; i >= 0; i--) {
		cout << binary[i];
	}

}

