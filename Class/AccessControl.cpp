#include<iostream>
using namespace std;
class AccessControl {
	int a;
	AccessControl(){
		a = 1;
		b = 1;
	}
	void a1() {
		a = 5;
		b = 5;
	}
public :
	int b;
	AccessControl(int x) {
		a = x;
		b = x;
	}
	void b1() {
		a = 6;
		b = 6;
	}
};
void main() {
	AccessControl objA; //오류발생
	AccessControl objB(100);
	objB.a = 10; 	objB.b = 20; //오류발생
	objB.a1(); 	objB.b1();//오류발생


}