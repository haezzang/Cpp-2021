#include<iostream>
using namespace std;
//�ݹ��� �׽�Ʈ
int squareV_sum(int num){
	num = num * num;
	return num + num;
}

int squareP_sum(int* num) {
	*num = (*num) * (*num);
	return (*num) + (*num);
}

int squareR_sum(int& num) {
	num = num * num;
	return num + num;
}
int main() {
	int a = 3;
	cout << squareV_sum(a) << endl;
	cout << "a ���� �ٲ���ٸ� 9�� ��µ˴ϴ� : " << a << endl;
	a = 3;
	cout << squareP_sum(&a) << endl;
	cout << "a ���� �ٲ���ٸ� 9�� ��µ˴ϴ� : " << a << endl;
	a = 3;
	cout << squareR_sum(a) << endl;
	cout << "a ���� �ٲ���ٸ� 9�� ��µ˴ϴ� : " << a << endl;
}

