//2117조해정
#include<iostream>
using namespace std;

void main() {
	int gross;
	double tax=0;
	int net;
	cout << "연수입 입력(만원 단위로 입력) : ";
		cin >> gross;

		cout << "세금 : ";
		if (gross < 1000) {
			net = gross - tax;
			cout << "0만원" << endl;
			cout << "실질소득 : " << net << "만원";
		}
		else if (gross < 3000) {
			gross = gross - 1000;
			tax = (gross * 0.01);
			cout << (int)tax << "만원" << endl;
			net = gross+1000 - tax;
			cout << "실질소득 : "<<net << "만원";
		
		}
		else if (gross <5000) {
			gross = gross - 3000+20;
			tax = (gross * 0.03) ;
			cout << tax << "만원" << endl;
			net = gross+3000 - tax ;
			cout << "실질소득 : " << net << "만원";

		}
		else if (gross>=5000) {
			gross = gross - 5000+80;
			tax = (gross * 0.06);
			cout << (int)tax << "만원" << endl;
			net = gross+5000 - tax;
			cout << "실질소득 : " << net << "만원";

		}
	cout << endl;
	




}