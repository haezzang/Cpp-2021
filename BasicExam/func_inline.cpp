#include<iostream>
using namespace std;
#define a(val) ((val))*((val));//�켱������ ������ ��ȣ �߿���
//��ũ�� ��ó��

inline int ba(int val) { //�ζ��� �Լ�
	return val * val; //��ȣ ������
}
/*int sum(int op1, int op2) {
	return op1 + op2;
}
void display();*/
int main(void) {
	cout << a(2+1);
	//int print = sum(2, 3);
	//cout << "sum �Լ��� ȣ���ϰ� ���� ��� ����" << print << endl;
	//display();

}
/*void display() {
	cout << "display �Լ��� ��ȯ���� ���� �Լ�" << endl;
	return;
}*/