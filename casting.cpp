#include<iostream>
using namespace std;

class Ride {
public :
	virtual void rideFunc() {   
		cout << "Ÿ��" << endl;
	}

	virtual void number() { } //��¥������ ���ϴ�
};
class BusRide : public Ride {
public :
	int age;
	void rideFunc() {
		cout << "������ Ÿ��" << endl;
	}
	void number() {
		cout << "152" << endl;
	}

};
class Airplane : public Ride {
public:
	int age;
	void rideFunc() {
		cout << "����⸦ Ÿ��" << endl;
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
	//* ��� �����Լ��� ���� �ֵ�0
}
