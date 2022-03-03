#include<iostream>
using namespace std;

class AAA {
	int val;
public:
	AAA() { cout << "AAA() 호출 " << endl; }
	AAA(int i) { cout << "AAA(int i) 호출 " << endl; }
	AAA(const AAA& a) { cout << "AAA(const AAA& a) 호출 " << endl; } //이거다 !!!!!!!!!!
	void ShowData() { cout <<"하이"<< endl; }

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