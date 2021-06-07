#include<iostream>
using namespace std;


class Person {

	int age;
public:
	Person* GetThis() { //그때그때 나다
		return this;
	}	
	int GetAge() {
		return this->age;
	}
};
int main() {
	Person* p1 = new Person();
	cout << p1 << endl;
	cout << p1->GetThis()<< endl;
	cout << p1->GetAge() << endl;

	Person* p2 = new Person();
	cout << p2 << endl;
	cout << p2->GetThis() << endl;


}