#include<iostream>
using namespace std;

class CPerson {
	string name;
	int age=0;

public:
	CPerson(string Nname ,int Aage) {
		name = Nname;
		age = Aage;
		cout << "��ü ����" << endl;
	}
	void print() {
		cout << name << "�� " << age << "�� �Դϴ�" << endl;
	}
	~CPerson() {
		cout << "��ü �Ҹ�" << endl;
	}
};

int main() {
	CPerson cp("ȫ�浿", 33);
	cp.print();
}