#include<iostream>
using namespace std;
class Student {
public:
	int nNo;
	char *sjtName;
	Student() {
		nNo = 0;
		sjtName=0;
		cout << "�Ű����� ���� ������" << endl;
	}
	Student(int no, const char* pName) {
		nNo = no;
		sjtName = new char[strlen(pName) + 1];
		strcpy(sjtName, pName);
		cout << "�Ű����� 2���� ������" << endl;
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
	strcpy(st1.sjtName, "���ϳ��ϳ��ϳ��ϳ�");
	st1.PrintStudent();
	Student st2(2, "ȫ�浿");
	st2.PrintStudent();
	Student* st3 = new Student(3, "�����");
	st3->PrintStudent();
	delete st3;
	
}