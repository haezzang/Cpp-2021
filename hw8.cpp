#include<iostream>
using namespace std;
//배수구하기
int main(void) {

	unsigned int A;
	unsigned int B;
	int cnt = 0;
	int sum = 0;
	cout << "수 2개 입력(작은 수 큰 수) : ";
	cin >> A;
	cin >> B;
	cout << "구할 배수 : " << A << endl;
	cout << "끝 값 : " << B << endl;
	cout << "0부터 10까지에 있는 " << A << "의 배수 : ";
	for (int i = 0; i <= B; i++) {
		if (i % A == 0) {
			cnt++;
			sum += i;
			cout << i<<"  ";
		}
	
	}
	cout << endl<< "0부터 10까지에 있는 " << A << "의 배수 개수 : " << cnt <<"개"<< endl;
	cout << "0부터 10까지에 있는 " << A << "의 배수 합 : " << sum << endl;

	




}





