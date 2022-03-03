#include<iostream>
using namespace std;
//콜바이 테스트
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
	cout << "a 값이 바뀌었다면 9가 출력됩니다 : " << a << endl;
	a = 3;
	cout << squareP_sum(&a) << endl;
	cout << "a 값이 바뀌었다면 9가 출력됩니다 : " << a << endl;
	a = 3;
	cout << squareR_sum(a) << endl;
	cout << "a 값이 바뀌었다면 9가 출력됩니다 : " << a << endl;
}

