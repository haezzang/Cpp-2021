#include<iostream>
using namespace std;

class Student {

public :
	int nNo;
	//char szName[20];
	char* szName;
	Student() {
		cout << "����" << endl;
		nNo = 0;
		//szName[0] = NULL;
		szName = NULL;
	}
	Student(Student &s) :nNo(s.nNo){
		cout << "����" << endl;
		//this->nNo = s.nNo;
		szName = new char[strlen(s.szName) + 1];
		strcpy(this->szName, s.szName);
		cout << "������" << endl;

	}
	Student(int nNo, const char* pName) {
		this->nNo=nNo;
		//strcpy(szName, pName);
		szName = new char[strlen(pName) + 1];
		cout << " �̸� ����"<<endl;
		strcpy(szName, pName);
	
	}
	~Student() {
		cout << nNo << " ���� �Ǿ����ϴ�" << endl;
		delete[] szName;
		cout << " �̸� �Ҹ�"<<endl;
	}
	void prinStudent() {
		if(szName)
		cout << "��ȣ : "<< nNo <<" �̸� : "<< szName<<endl;
	}
	Student &copy(Student &s) {
	
		if (this != &s) {
			this->nNo = s.nNo;
			if (this->szName != NULL) {
				delete[] szName;
				cout << " �̸� �Ҹ�" << endl;
			}
				this->szName = new char[strlen(s.szName) + 1];
				cout << " �̸� ����" << endl;
				strcpy(this->szName, s.szName);
			
		}
	
		return *this;
		
	}

	Student &operator=(Student &s) {
		
		return copy(s);
	}
};

int main() {
	Student a(1, "ȫ�ϳ�");
	Student b;
	a.prinStudent();
	b.prinStudent();
	b = a;
	strcpy(a.szName, "ȫ�浿");
	strcpy(b.szName, "ȫ�浿");
	a.prinStudent();
	b.prinStudent();
	//b.operator=(a);
	//b.copy(a);
	a=a;
	a.prinStudent();
	Student c(2, "�����");
	c = a;
	a.prinStudent();
	c.prinStudent();
	Student d;
	Student e;
	d = e = a;
	d.prinStudent();
	e.prinStudent();
	cout << "����ťƼ" << endl;
	Student f = a;
	cout << "��������Ƽ" << endl;
	f.prinStudent();
	a.prinStudent();


	
	//a.prinStudent();
	//b.prinStudent();
	/*Student a(1, "���ϳ�");
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

	delete[] stu1;*/

	return 0;
}