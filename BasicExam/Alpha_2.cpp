#include<iostream>
using namespace std;
//���ĺ��� �Է��ϸ� ���ڷ� ��ȯ
int main(void) {
	char a;

	for (;;) {
		cout << "���� �Է�: ";
		cin >> a;
		if (a >= 'A' && a <= 'Z')
			cout << (int)a - ('A' - 1)<<endl;
		else if (a >= 'a' && a <= 'z')
			cout << (int)a - ('a' - 1)<<endl;
		else
			break;
	}
}