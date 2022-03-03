//2117 조해정 
#include<iostream>
using namespace std;

int simple(int, int, double);
int compound(int, int, double);
int main() {
	int money;
	int year;
	int i = 1;
	const double plus = 0.012;
	cout << "원금(원) : ";
	cin >> money;
	cout << "예치기간(년) : ";
		cin >> year;
		cout << "이율 : 1.2%"<<endl;

		cout << "예치기간	만기시 총수령액(단리)		만기시 총수령액(복리)" << endl;
		for (i = 1; i <= year; i++) {
		cout<<"  "<<i<<"년"<<"\t\t\t"<<simple(money, i, plus)<<"원"<<"\t\t\t"<<compound(money, i, plus)<<"원"<<endl;
		}
}

int simple(int money, int year, double plus) {

	return 	money* (1 + plus * year);
}

int compound(int money, int year, double plus) {
	int res=money* pow((1 + plus),year );
	return res;
}