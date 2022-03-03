//2117조해정
#include<iostream>
using namespace std;

void main() {
	int n;
	int sum = 1;
	int i = 1;
	cout <<"범위 입력 : ";
	cin >> n;
	for (i = 1; i <= n; i++) {
		sum *= i;
		if (sum < n && sum>0)
			cout << "1 ~ " << i << "까지의 곱 : " << sum << endl;

	}
	cout << i;
		
		//cout << "-----------------------------" << endl;
		//cout << "1 ~ " << i << "까지의 곱 : " << sum<< endl;
		//cout << "-----------------------------" << endl;





}