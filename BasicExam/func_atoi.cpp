#include<iostream>
using namespace std;

void print(int a, int b) {
	cout << a + b << endl;
}
int main(void){
	char str[] = "100";
	int a = 200;
	//int b = atoi(str); ���ڿ��� ���ڷ� �ٲ��ִ� �Լ�
	print(a, a);
}

