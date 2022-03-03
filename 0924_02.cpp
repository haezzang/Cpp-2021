#include<iostream>
using namespace std;



class Ride {
public:
	virtual void rideFunc() = 0; //순수가상함수


};
class BusRide : public Ride {
public:
	int age;
	void rideFunc() {
		cout << "버스를 타다" << endl;
	}
};

class AirRide : public Ride {
public:
	int age;
	void rideFunc() {
		cout << "비행기를 타다" << endl;
	}

};

int main() {

	//순수가상클래스는 객체를 못만든다
	Ride* r1 = new BusRide();
	r1->rideFunc();
	//r1.age = 10;
	

	AirRide ar2;
	Ride& r2 = ar2;
	r2.rideFunc();
}
