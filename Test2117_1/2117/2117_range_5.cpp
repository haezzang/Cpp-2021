//2117조해정 
#include<iostream>
using namespace std;

int main() {

	int  n;
	int  sum = 1;
	int i = 1;
	int cnt = 0;

	cout << "범위 입력 : ";
	cin >> n;
	while (sum < n) {
			cnt=i;
			sum *= i;
			cout << "1 ~ " << i << "까지의 곱 : " << sum << endl;
			i++;
		}
	cout << "-----------------------------" << endl;
	cout << "1 ~ " << cnt-1 << "까지의 곱 : " << sum/cnt << endl;
	cout << "-----------------------------" << endl;
}
