#include<iostream>
using namespace std;
//�������� �������� ����
int nValue = 100;
void subFunc() {
	int nVal = 20;
	cout << "subFunc:��������:" << nValue << endl;
	cout << "subFunc:��������:" << nVal << endl;

	nValue = 200;
	nVal = 10;
	cout << "subFunc:��������:" << nValue << endl;
	cout << "subFunc:��������:" << nVal << endl;
}

int main() {
	int nValue = 10; //���������� ����������� ���� //�������� ���� :: ���
	cout << "Main:��������:" << ::nValue << endl;
	cout << "Main:��������:" << nValue << endl; //�����������
	subFunc(); //�����Լ� ȣ��
	cout << "Main:��������:" << ::nValue << endl;
	cout << "Main:��������:" << nValue << endl;
	
}