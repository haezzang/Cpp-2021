#include<iostream>
using namespace std;

class Shape {
public :
	 void paintfunc1() { painfunc2(); }
	 virtual void painfunc2() { cout << "Shape function called" << endl; }

};

class Circle : public Shape {
public :
	void painfunc2() { cout << "Circle function called" << endl; }
};

int main() {
	Circle c1; 
	c1.painfunc2();
	Shape s1; 
	Shape* p = &s1;
	p->painfunc2();
	p = &c1;
	p->painfunc2();
	p->paintfunc1();
}