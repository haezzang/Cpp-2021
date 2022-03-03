#include<iostream>
using namespace std;

class Animal {
public :
	virtual ~Animal() {}

	virtual void SoundSpeak() = 0;
	virtual void EatDiets(const char* eat) const = 0;

};

class Dog :public Animal {
public:
	virtual void SoundSpeak() {
		cout << " ���Ҹ� �۸�";
	}
	virtual void EatDiets(const char* eat) const {
		cout << eat << endl;
	}
	
};

class Cat :public Animal {
public:
	virtual void SoundSpeak() {
		cout << " ����� �߿�";
	}
	virtual void EatDiets(const char* eat) const {
		cout << eat << endl;
	}

};

int main(void) {
	
	Dog dog; 
	dog.SoundSpeak();
	//dog.EatDiets("�� ���");

	//Cat cat;
	//cat.SoundSpeak();
	//cat.EatDiets("����� ���");
	//
	//Animal ani;
}