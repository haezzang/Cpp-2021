#include<iostream>
using namespace std;
//������ϱ�
int main(void) {

	unsigned int A;
	unsigned int B;
	int cnt = 0;
	int sum = 0;
	cout << "�� 2�� �Է�(���� �� ū ��) : ";
	cin >> A;
	cin >> B;
	cout << "���� ��� : " << A << endl;
	cout << "�� �� : " << B << endl;
	cout << "0���� 10������ �ִ� " << A << "�� ��� : ";
	for (int i = 0; i <= B; i++) {
		if (i % A == 0) {
			cnt++;
			sum += i;
			cout << i<<"  ";
		}
	
	}
	cout << endl<< "0���� 10������ �ִ� " << A << "�� ��� ���� : " << cnt <<"��"<< endl;
	cout << "0���� 10������ �ִ� " << A << "�� ��� �� : " << sum << endl;

	




}





