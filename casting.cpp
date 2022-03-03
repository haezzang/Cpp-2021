#include<iostream>
using namespace std;

class Ride {
public :
	virtual void rideFunc() {   
		cout << "타다" << endl;
	}

	virtual void number() { } //가짜만들기면 편하다
};
class BusRide : public Ride {
public :
	int age;
	void rideFunc() {
		cout << "버스를 타다" << endl;
	}
	void number() {
		cout << "152" << endl;
	}

};
class Airplane : public Ride {
public:
	int age;
	void rideFunc() {
		cout << "비행기를 타다" << endl;
	}

};
int main() {
	Ride* r1 = new BusRide();
	r1->rideFunc();
	r1->number();
	delete r1;
	Ride* r2 = new Airplane();
	r2->rideFunc();
	delete r2;

	Ride* r3 = new Ride();
	delete r3;
	//* 써야 가상함수를 쓸수 있따0
}
