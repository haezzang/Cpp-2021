#include<iostream>
#include<string>
using namespace std;

class Animal {
	string name;
	int weight;
public :
	Animal() {
		cout << "�ִϸ� ������" << endl;
	}
	Animal(string name, int weight) {
		this->name = name;
		this->weight = weight;
		cout << "�Ű����� �ִϸ�  ������" << endl;
	}
		~Animal() {
			cout << "�ִϸ� �Ҹ���" << endl;
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
		cout << "�� ������" << endl;
	}
	Dog(string name, int weight, int height) : Animal(name,weight) {
		this->height = height;
		cout << "�Ű����� �� ������" << endl;
	}
	~Dog() {
		cout << "�� �Ҹ���" << endl;
	}
	
	void print() {
		Animal::print();
		cout << " " << height;;
	}

};

int main() {
	//Dog dog;
	Animal a("������", 300);
	Dog d1("������", 3, 50);
	d1.print();
}