#include<iostream>
using namespace std;
/*
int sum(int a, int b=3, int c=4, int d=5) {
	return a + b+c+d;
}

int sum() {
	return 0;
}
int main() {
	cout << sum(2,3,5) << endl; //2355
	cout << sum(3) << endl; //3345
	cout << sum(4,5,6,7)<< endl; //4567 
	cout << sum(2,3) << endl;//2345
	cout << sum() << endl; //sum �Լ� ��𰡾����� ���� sum�Ѵ� �θ�������
}*/
int sum(int a, int b) {
	int sum;
	sum = a + b;
	return sum, a, b;
}
int main() {
	sum(5, 6);
}
 //������ Ÿ���� ������ �ʿ� ���� ���������� �־ ����