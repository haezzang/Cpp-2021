#include<iostream>
using namespace std;

class Ride {
public:
	virtual void rideFunc() {} //순수가상함수, 아들쪽에 재정의되야함

	 void rideFunc2() {
		 cout << "날다" << endl;
	 }
};
class BusRide : public Ride {
public:
	int age;
	//void rideFunc() {
	//	cout << "버스를 타다" << endl;
	//}
};

int main() {
	Ride* r1 = new BusRide();
	r1->rideFunc();

	BusRide* r2 = new BusRide();
	r2->rideFunc2();
	
}
