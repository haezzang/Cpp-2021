//2117 ������

#include<iostream>
#include<time.h>

using namespace std;



int main() {
	srand((unsigned)time(0));
int chk;
	int num;
	while (true) {
		cout << "==========" << endl;
		cout << "==SELECT==" << endl;
		cout << "==========" << endl;
		cout << "1. ���� ���� ���ϱ�" << endl;
		cout << "2. �� �׸���" << endl;
		cout << "0. ����" << endl;
		cout << "�޴� ���� == >";
		cin >> chk;
		cout << endl;
		switch (chk)
		{
		case 1: cout << "���� ������ �Է� �ϼ��� : "; cin >> num; break;
		case 2: cout << "���� ������ �Է� �ϼ��� : "; cin >> num; break;
		case 0: return 0; break;
		default: cout << endl << "�޴��� �ٽ� ���� �ϼ���."; break;
		}
		if (chk == 1 || chk == 2 || chk == 3) break;
		cout << endl << endl << endl;
	}







}