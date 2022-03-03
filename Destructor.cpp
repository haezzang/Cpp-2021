#include<iostream>
using namespace std;
class Student {
	char* name;
	int age;

public: Student(const char* myname, int myage) {
	int len = strlen(myname) + 1; //문자 +1 하기
	name = new char[len];
	strcpy_s(name, len, myname);
	age = myage;
}
	  void showStudentInfo() {
		  cout << "이름 : " << name << endl;
		  cout << "나이 : " << age << endl;
	  }
	  ~Student() {
		  cout << name << " called destructor!" << endl;
		  delete[]name;
		
	  }
};
int main(void) {
	Student student1("lee mee rim", 33);
	Student student2("hong gil dong", 34);
	student1.showStudentInfo();
	student2.showStudentInfo();
	cout << sizeof(Student) << endl; //소멸순서는 생성순서와 반대다
	cout << &(student1) << endl;
	cout << &(student2) << endl;
	return 0;
}
