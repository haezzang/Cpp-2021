#include<iostream>
using namespace std;
//1+2=3 2+3=5 ���Ѽ��� ���Ѽ�
int main(void) {
	int sum = 1;
	int a = 2;
	for(int i = 1; i <= 20; i++) {
		cout << sum << "+" << a << "=";
		cout<< sum+a << endl;
		sum = sum + a;
			a++;	

		}
	}
	










