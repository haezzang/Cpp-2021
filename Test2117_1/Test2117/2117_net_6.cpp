//2117������ 
#include<iostream>
using namespace std;

void main() {
	int gross;
	double tax=0;
	int net=0;
	cout << "������ �Է�(���� ������ �Է�) : ";
	cin >> gross;


		if (gross < 1000) {
			tax = 0;
			net = gross;
		}
		else if (gross < 3000) {
			gross = gross - 1000;
			tax = (gross * 0.01);	
			net = gross+1000 - tax;
		}
		else if (gross <5000) {
			gross = gross -3000;
			tax = (gross * 0.03)+20;
			net = gross- tax+3000;
		}
		else if (gross >= 5000) {
			gross = gross - 5000;
			tax = (gross * 0.06) + 80;
			net = gross - tax + 5000;
		}
		cout <<"���� : "<< (int)tax << "����" << endl;
		cout << "�����ҵ� : " << net << "����";
	cout << endl;
	




}