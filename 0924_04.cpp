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
		cout << " 개소리 멍멍";
	}
	virtual void EatDiets(const char* eat) const {
		cout << eat << endl;
	}
	
};

class Cat :public Animal {
public:
	virtual void SoundSpeak() {
		cout << " 고양이 야옹";
	}
	virtual void EatDiets(const char* eat) const {
		cout << eat << endl;
	}

};

int main(void) {
	
	Dog dog; 
	dog.SoundSpeak();
	//dog.EatDiets("개 사료");

	//Cat cat;
	//cat.SoundSpeak();
	//cat.EatDiets("고양이 사료");
	//
	//Animal ani;
}