#include<iostream>
using namespace std;



class Horse {
public:
	Horse() {cout << "Horse ������" << endl;} 
	 ~Horse() { cout << "Horse �Ҹ���" << endl; }
	  void speak() {
		cout << "����~" << endl;
	}
};

class Bird {
public:
	Bird() { cout << "Bird ������" << endl; }
	virtual ~Bird() { cout << "Bird �Ҹ���" << endl; }
	void speak() {
		cout << "±��~" << endl;
	}
	void fly() {
		cout << "����~" << endl;
	}

};
class Pegasus : public Horse, public  Bird {
public:
	Pegasus() { cout << "Pegasus ������" << endl; }
	virtual ~Pegasus() { cout << "Pegasus �Ҹ���" << endl; }
	void speak() {
		cout << "�䰡���� : ������~" << endl;
	}
};

int main() {
	//Pegasus peg;
	//peg.speak();
	//peg.fly();

	Horse* obj1 = new Horse();
	obj1->speak(); //������
	((Pegasus*)obj1)->fly(); //����ȯ ����
	delete obj1;
	
	cout << "-----------------------" << endl;
	Pegasus* obj2 = new Pegasus();
	obj2->speak(); //�䰡����������
	delete obj2;

	cout << "-----------------------" << endl;
	Horse* obj3 = new Pegasus();
	obj3->speak(); //������  ����ȯ ���� �ٵ� ���߾� ���� �ϸ� ������
	//peg.fly();
	delete obj3;
}