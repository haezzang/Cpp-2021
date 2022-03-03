#include<iostream>
using namespace std;



class Horse {
public:
	Horse() {cout << "Horse 생성자" << endl;} 
	 ~Horse() { cout << "Horse 소멸자" << endl; }
	  void speak() {
		cout << "히잉~" << endl;
	}
};

class Bird {
public:
	Bird() { cout << "Bird 생성자" << endl; }
	virtual ~Bird() { cout << "Bird 소멸자" << endl; }
	void speak() {
		cout << "짹쨱~" << endl;
	}
	void fly() {
		cout << "날다~" << endl;
	}

};
class Pegasus : public Horse, public  Bird {
public:
	Pegasus() { cout << "Pegasus 생성자" << endl; }
	virtual ~Pegasus() { cout << "Pegasus 소멸자" << endl; }
	void speak() {
		cout << "페가수스 : 히히힝~" << endl;
	}
};

int main() {
	//Pegasus peg;
	//peg.speak();
	//peg.fly();

	Horse* obj1 = new Horse();
	obj1->speak(); //히히힝
	((Pegasus*)obj1)->fly(); //형변환 가능
	delete obj1;
	
	cout << "-----------------------" << endl;
	Pegasus* obj2 = new Pegasus();
	obj2->speak(); //페가수수히히힝
	delete obj2;

	cout << "-----------------------" << endl;
	Horse* obj3 = new Pegasus();
	obj3->speak(); //히히힝  형변환 가능 근데 버추얼 쓰면 하면 괜찮아
	//peg.fly();
	delete obj3;
}