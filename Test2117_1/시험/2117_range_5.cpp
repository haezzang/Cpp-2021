//2117������
#include<iostream>
using namespace std;

void main() {
	int n;
	int sum = 1;
	int i = 1;
	cout <<"���� �Է� : ";
	cin >> n;
	for (i = 1; i <= n; i++) {
		sum *= i;
		if (sum < n && sum>0)
			cout << "1 ~ " << i << "������ �� : " << sum << endl;

	}
	cout << i;
		
		//cout << "-----------------------------" << endl;
		//cout << "1 ~ " << i << "������ �� : " << sum<< endl;
		//cout << "-----------------------------" << endl;





}