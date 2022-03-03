#include<iostream>
using namespace std;

class Parent {
public :
	Parent() { cout << "Parent" << endl;}
	virtual ~Parent() { cout << "~Parent" << endl; }

};

class Child : public Parent{
public:
	Child() { cout << "Child" << endl; }
	~Child() { cout << "~Child" << endl; } 

};

void main() {
	Parent* ptr = new Child; //자식 소멸자가 제대로 작동할려면 아빠 소멸자에게 virtual 넣는다
	delete ptr;
}

