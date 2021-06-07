#include<iostream>
using namespace std;

class Student {

public :
	int nNo;
	char szName[20];
	Student() {
		cout << "생성" << endl;
		nNo = 0;
		szName[0] = NULL;
	}
	Student(int nNo, const char* pName) {
		this->nNo=nNo;
		strcpy(szName, pName);
	}
	~Student() {
		cout << nNo << " 해제 되었습니다" << endl;
	}
};

int main() {
	Student a(1, "강하나");
	Student* p = new Student(2, "홍하나");
	delete p;
	Student stu[10];
	stu[0].nNo = 3;
	strcpy(stu[0].szName, "심청이");

	stu[1].nNo = 4;
	strcpy(stu[1].szName, "배장화");
	 
	Student* stu1 = new Student[10];

	stu1[0].nNo = 5;
	strcpy(stu1[0].szName, "연흥부");

	stu1[1].nNo = 6;
	strcpy(stu1[1].szName, "홍길동");

	stu1[2].nNo = 7;
	strcpy((stu1+2)->szName, "신데렐라");

	stu1[2].nNo = 8;
	strcpy((stu1 + 3)->szName, "백설공주");

	delete[] stu1;

	return 0;
}