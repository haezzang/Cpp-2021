#include<iostream>
using namespace std;

class Student {

public :
	int nNo;
	char szName[20];
	Student() {
		cout << "����" << endl;
		nNo = 0;
		szName[0] = NULL;
	}
	Student(int nNo, const char* pName) {
		this->nNo=nNo;
		strcpy(szName, pName);
	}
	~Student() {
		cout << nNo << " ���� �Ǿ����ϴ�" << endl;
	}
};

int main() {
	Student a(1, "���ϳ�");
	Student* p = new Student(2, "ȫ�ϳ�");
	delete p;
	Student stu[10];
	stu[0].nNo = 3;
	strcpy(stu[0].szName, "��û��");

	stu[1].nNo = 4;
	strcpy(stu[1].szName, "����ȭ");
	 
	Student* stu1 = new Student[10];

	stu1[0].nNo = 5;
	strcpy(stu1[0].szName, "�����");

	stu1[1].nNo = 6;
	strcpy(stu1[1].szName, "ȫ�浿");

	stu1[2].nNo = 7;
	strcpy((stu1+2)->szName, "�ŵ�����");

	stu1[2].nNo = 8;
	strcpy((stu1 + 3)->szName, "�鼳����");

	delete[] stu1;

	return 0;
}