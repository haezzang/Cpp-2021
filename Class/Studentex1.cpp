#include<iostream>
using namespace std;
//Student Ŭ���� ����
class Student {
private:
	int nHakbun;
	const char* sName;
public :
	Student();
	Student(int nHakbun, const char* sName);
	void show();
};
//Student Ŭ���� ��� �Լ��� ����
Student::Student() {
	nHakbun = 1234;
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}
Student::Student(int nHakbun, const char* _sName) {
	this->nHakbun = nHakbun; //this.���� (*this)
	sName = _sName;
	cout << "�Ű������� �й��� ��ϵǾ����ϴ�." << endl;
}
void Student::show() {
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " <<sName << "�Դϴ�." << endl;
}
int main() {
	//Student student1; //��ü ����
	//student1.show();
	//Student student2(5678,"��̸�"); //��ü ���� �Ű����� �ִ�
	//student2.show();
	Student stu[3] = { Student(), Student(1111,"������"), Student(2222, "������") 
	};
	for (int i = 0; i < 3; i++)
		stu[i].show();
	return 0;
}