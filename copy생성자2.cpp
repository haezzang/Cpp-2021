#include<iostream>
using namespace std;


class MyPerson {
public:
	MyPerson(int nParam) :nAge(nParam) {
		cout << "MyPerson()" << endl;
	}
	MyPerson(const MyPerson& rhs) :nAge(rhs.nAge) {
		cout << "MyPerson(const MyPerson &)" << endl;
	}
	int getData(void) const { return nAge; }
	void setData(int nData) { nAge = nData; }
private:
	int nAge = 0;


};

void TestFunc(MyPerson &param) {
	cout << "TestFunc()" << endl;
	param.setData(50);
}
int main() {
	MyPerson p1(30);
	TestFunc(p1);

	cout << "p1:  : " << p1.getData() << endl;
	cout << "End" << endl;
}