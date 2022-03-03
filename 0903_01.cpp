#include<iostream>
#include<string>
using namespace std;

class Animal {
	string name;
	int weight;
public :
	Animal() {
		cout << "애니멀 생성자" << endl;
	}
	Animal(string name, int weight) {
		this->name = name;
		this->weight = weight;
		cout << "매개변수 애니멀  생성자" << endl;
	}
		~Animal() {
			cout << "애니멀 소멸자" << endl;
		}
	/*	string getName() {
			return name;
		}
		int getWeight() {
			return weight;
		}*/

		void print() {
			cout << name << " " << weight;
		}
};
class Dog : public Animal {
	int height;
public:
	Dog() {
		cout << "개 생성자" << endl;
	}
	Dog(string name, int weight, int height) : Animal(name,weight) {
		this->height = height;
		cout << "매개변수 개 생성자" << endl;
	}
	~Dog() {
		cout << "개 소멸자" << endl;
	}
	
	void print() {
		Animal::print();
		cout << " " << height;;
	}

};

int main() {
	//Dog dog;
	Animal a("해정이", 300);
	Dog d1("윈윈이", 3, 50);
	d1.print();
}