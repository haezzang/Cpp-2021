//2117 ������ 
#include<iostream>
using namespace std;

int simple(int, int, double);
int compound(int, int, double);
int main() {
	int money;
	int year;
	int i = 1;
	const double plus = 0.012;
	cout << "����(��) : ";
	cin >> money;
	cout << "��ġ�Ⱓ(��) : ";
		cin >> year;
		cout << "���� : 1.2%"<<endl;

		cout << "��ġ�Ⱓ	����� �Ѽ��ɾ�(�ܸ�)		����� �Ѽ��ɾ�(����)" << endl;
		for (i = 1; i <= year; i++) {
		cout<<"  "<<i<<"��"<<"\t\t\t"<<simple(money, i, plus)<<"��"<<"\t\t\t"<<compound(money, i, plus)<<"��"<<endl;
		}
}

int simple(int money, int year, double plus) {

	return 	money* (1 + plus * year);
}

int compound(int money, int year, double plus) {
	int res=money* pow((1 + plus),year );
	return res;
}