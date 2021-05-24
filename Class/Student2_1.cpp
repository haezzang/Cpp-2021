#include<iostream>
using namespace std;
class Student {
public:
	int nNo;
	char *sjtName;
	Student() {
		nNo = 0;
		sjtName=0;
		cout << "매개변수 없는 생성자" << endl;
	}
	Student(int no, const char* pName) {
		nNo = no;
		sjtName = new char[strlen(pName) + 1];
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
	cout << sizeof(st1) << endl;
	st1.nNo = 1;
	strcpy(st1.sjtName, "송하나하나하나하나");
	st1.PrintStudent();
	Student st2(2, "홍길동");
	st2.PrintStudent();
	Student* st3 = new Student(3, "연흥부");
	st3->PrintStudent();
	delete st3;
	
}