#define SIZE 15
#include <iostream>
using namespace std;

class Person {
	char name[SIZE];
	char phone[SIZE];
	int age;

public:
	void ShowData();

	Person(const char *pname, const char *pphone, int age) {
		this->age = age;
		strcpy(name, pname);
		strcpy(phone, pphone);
		
	}

};

void Person::ShowData() {
	cout << name << endl;
	cout << phone << endl;
	cout << age << endl;
}

int main() {
	Person p = { "kim", "010-1234-5678", 22 };
	p.ShowData();
}
