//2117������ 
#include<iostream>
using namespace std;

int main() {

	int  n;
	int  sum = 1;
	int i = 1;
	int cnt = 0;

	cout << "���� �Է� : ";
	cin >> n;
	while (sum < n) {
			cnt=i;
			sum *= i;
			cout << "1 ~ " << i << "������ �� : " << sum << endl;
			i++;
		}
	cout << "-----------------------------" << endl;
	cout << "1 ~ " << cnt-1 << "������ �� : " << sum/cnt << endl;
	cout << "-----------------------------" << endl;
}
