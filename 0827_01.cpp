#include<iostream>
using namespace std;

class AAA {
	int val;
public:
	AAA() { cout << "AAA() ȣ�� " << endl; }
	AAA(int i) { cout << "AAA(int i) ȣ�� " << endl; }
	AAA(const AAA& a) { cout << "AAA(const AAA& a) ȣ�� " << endl; } //�̰Ŵ� !!!!!!!!!!
	void ShowData() { cout <<"����"<< endl; }

};

void function(AAA&a) {
	a.ShowData();
}


int main() {
	AAA obj1;
	AAA obj2(10);
	AAA obj3(obj2);
	function(obj1);



	return 0;
}