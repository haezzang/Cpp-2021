#include<iostream>
using namespace std;

class CPerson {
	string name;
	int age=0;

public:
	CPerson(string Nname ,int Aage) {
		name = Nname;
		age = Aage;
		cout << "按眉 积己" << endl;
	}
	void print() {
		cout << name << "篮 " << age << "技 涝聪促" << endl;
	}
	~CPerson() {
		cout << "按眉 家戈" << endl;
	}
};

int main() {
	CPerson cp("全辨悼", 33);
	cp.print();
}