#include<iostream>
using namespace std;
class Account {
public:
	char accID[20];//계좌
	char secID[20];//비밀번호
	char name[20];//이름
	int balance;//잔액
	void Deposit(int money);
	void Withdraw(int money);
	void print();
	
};
void Account::Deposit(int money) { //콜바이 레퍼런스
	balance += money;
	print();
}
void Account::Withdraw(int money) {//콜바이 포인터
	balance -= money;
	print();
}
void Account::print() {
	cout << "계좌번호 : " <<accID << endl;
	cout << "비밀번호 : " <<secID << endl;
	cout << "이름 : " << name << endl;
	cout << "잔액 : " << balance << endl;
}


int main() {
	Account mirim = { "1234","1357","개나리",1000 };
	mirim.print();
	mirim.Deposit(100);//입금
	mirim.Withdraw(300);//출금
}