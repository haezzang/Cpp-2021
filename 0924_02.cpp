#include<iostream>
using namespace std;



class Ride {
public:
	virtual void rideFunc() = 0; //���������Լ�


};
class BusRide : public Ride {
public:
	int age;
	void rideFunc() {
		cout << "������ Ÿ��" << endl;
	}
};

class AirRide : public Ride {
public:
	int age;
	void rideFunc() {
		cout << "����⸦ Ÿ��" << endl;
	}

};

int main() {

	//��������Ŭ������ ��ü�� �������
	Ride* r1 = new BusRide();
	r1->rideFunc();
	//r1.age = 10;
	

	AirRide ar2;
	Ride& r2 = ar2;
	r2.rideFunc();
}
