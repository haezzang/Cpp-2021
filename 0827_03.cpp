#include<iostream>
using namespace std;

class Person {
protected:
	string name;
	int age;
public :
	Person(const string& name, int age) {
		this->name = name;
		this->age = age;
	}
	Person() {
		cout << "김종대디" << endl;
	}
	void ShowPerson() {
		cout << name << "의 나이는 " << age << "입니다" << endl;
	}
};

class Student : public Person {
	int id;
public:
		Student(int id, const string& name, int age) //: Person(name, age) 
		{ this->id = id;}
		void ShowPerson() {
			cout <<id<< name << "의 나이는 " << age << "입니다" << endl; //오버라이딩!!
		}
};
int main() {
	Student student(1234, "홍길동", 33);
	student.ShowPerson();

}