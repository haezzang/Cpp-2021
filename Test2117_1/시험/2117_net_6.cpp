//2117������
#include<iostream>
using namespace std;

void main() {
	int gross;
	double tax=0;
	int net;
	cout << "������ �Է�(���� ������ �Է�) : ";
		cin >> gross;

		cout << "���� : ";
		if (gross < 1000) {
			net = gross - tax;
			cout << "0����" << endl;
			cout << "�����ҵ� : " << net << "����";
		}
		else if (gross < 3000) {
			gross = gross - 1000;
			tax = (gross * 0.01);
			cout << (int)tax << "����" << endl;
			net = gross+1000 - tax;
			cout << "�����ҵ� : "<<net << "����";
		
		}
		else if (gross <5000) {
			gross = gross - 3000+20;
			tax = (gross * 0.03) ;
			cout << tax << "����" << endl;
			net = gross+3000 - tax ;
			cout << "�����ҵ� : " << net << "����";

		}
		else if (gross>=5000) {
			gross = gross - 5000+80;
			tax = (gross * 0.06);
			cout << (int)tax << "����" << endl;
			net = gross+5000 - tax;
			cout << "�����ҵ� : " << net << "����";

		}
	cout << endl;
	




}