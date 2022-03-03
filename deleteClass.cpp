#include<iostream>
using namespace std;
class TestC {
	int iData;

public :
	TestC() {
		cout << "TestC::TestC()" << endl;
	}
	~TestC() {
		cout << "TestC::TestC()" << endl;
	}

};


int main() {
	cout << "main begin" << endl;
	TestC* ptr = new TestC[3];
	delete[] ptr;
	//cout << "Test Cplus" << endl;

	cout << "End" << endl;
}