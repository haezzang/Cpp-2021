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
		cout << "�������" << endl;
	}
	void ShowPerson() {
		cout << name << "�� ���̴� " << age << "�Դϴ�" << endl;
	}
};

class Student : public Person {
	int id;
public:
		Student(int id, const string& name, int age) //: Person(name, age) 
		{ this->id = id;}
		void ShowPerson() {
			cout <<id<< name << "�� ���̴� " << age << "�Դϴ�" << endl; //�������̵�!!
		}
};
int main() {
	Student student(1234, "ȫ�浿", 33);
	student.ShowPerson();

}