#include<iostream>
using namespace std;
class Account {
public:
	char accID[20];//����
	char secID[20];//��й�ȣ
	char name[20];//�̸�
	int balance;//�ܾ�
	void Deposit(int money);
	void Withdraw(int money);
	void print();
	
};
void Account::Deposit(int money) { //�ݹ��� ���۷���
	balance += money;
	print();
}
void Account::Withdraw(int money) {//�ݹ��� ������
	balance -= money;
	print();
}
void Account::print() {
	cout << "���¹�ȣ : " <<accID << endl;
	cout << "��й�ȣ : " <<secID << endl;
	cout << "�̸� : " << name << endl;
	cout << "�ܾ� : " << balance << endl;
}


int main() {
	Account mirim = { "1234","1357","������",1000 };
	mirim.print();
	mirim.Deposit(100);//�Ա�
	mirim.Withdraw(300);//���
}