#include<iostream>
using namespace std;
class Student {
public:
	int nNo;
	char sjtName[20];
	Student() {
		nNo = 0;
		sjtName[0] = { 0 };
		cout << "매개변수 없는 생성자" << endl;
	}
	Student(int no, const char*  pName) {
		nNo=no;
		strcpy(sjtName, pName);
		cout << "매개변수 2개인 생성자" << endl;	
	}
	~Student() {
		cout << sjtName << endl;
	}
	void PrintStudent() {
		cout << nNo << sjtName << endl;
	}
	void SetStudent() {
	}
};
int main() {
	Student st1;
	st1.nNo = 1;
	strcpy(st1.sjtName, "송하나하나하나하나");
	st1.PrintStudent();
	Student st2(2,"홍길동");
	st2.PrintStudent();
	Student *st3=new Student();
	st3->PrintStudent();
	delete st3;
	cout << sizeof(st1) << endl;
}