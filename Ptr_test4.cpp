#include<iostream>
using namespace std;
int main(void) {
	int a = 3; 
	int* ptr = nullptr;  //�����Ⱚ
	cout << "a�� �ּ� ���� �����մϴ�" << ptr << endl;
	ptr= &a;
	
	cout << "a�� �ּ� ���� �����մϴ�" << ptr << endl;
	cout << "a�� ���� ���������մϴ�" << ptr << endl;

	*ptr = 10;
	cout << "a�� �ּ� ���� ������ �ٲߴϴ�" << *ptr << endl;
	cout << "a�� �ּ� ���� �ٲ����ʽ��ϴ�" << ptr << endl;

}