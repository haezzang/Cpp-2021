#include<iostream>
using namespace std;

class Student {

public :
	int nNo;
	//char szName[20];
	char* szName;
	Student() {
		cout << "생성" << endl;
		nNo = 0;
		//szName[0] = NULL;
		szName = NULL;
	}
	Student(Student &s) :nNo(s.nNo){
		cout << "생성" << endl;
		//this->nNo = s.nNo;
		szName = new char[strlen(s.szName) + 1];
		strcpy(this->szName, s.szName);
		cout << "생성끝" << endl;

	}
	Student(int nNo, const char* pName) {
		this->nNo=nNo;
		//strcpy(szName, pName);
		szName = new char[strlen(pName) + 1];
		cout << " 이름 생성"<<endl;
		strcpy(szName, pName);
	
	}
	~Student() {
		cout << nNo << " 해제 되었습니다" << endl;
		delete[] szName;
		cout << " 이름 소멸"<<endl;
	}
	void prinStudent() {
		if(szName)
		cout << "번호 : "<< nNo <<" 이름 : "<< szName<<endl;
	}
	Student &copy(Student &s) {
	
		if (this != &s) {
			this->nNo = s.nNo;
			if (this->szName != NULL) {
				delete[] szName;
				cout << " 이름 소멸" << endl;
			}
				this->szName = new char[strlen(s.szName) + 1];
				cout << " 이름 생성" << endl;
				strcpy(this->szName, s.szName);
			
		}
	
		return *this;
		
	}

	Student &operator=(Student &s) {
		
		return copy(s);
	}
};

int main() {
	Student a(1, "홍하나");
	Student b;
	a.prinStudent();
	b.prinStudent();
	b = a;
	strcpy(a.szName, "홍길동");
	strcpy(b.szName, "홍길동");
	a.prinStudent();
	b.prinStudent();
	//b.operator=(a);
	//b.copy(a);
	a=a;
	a.prinStudent();
	Student c(2, "장발장");
	c = a;
	a.prinStudent();
	c.prinStudent();
	Student d;
	Student e;
	d = e = a;
	d.prinStudent();
	e.prinStudent();
	cout << "해정큐티" << endl;
	Student f = a;
	cout << "해정프리티" << endl;
	f.prinStudent();
	a.prinStudent();


	
	//a.prinStudent();
	//b.prinStudent();
	/*Student a(1, "강하나");
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

	delete[] stu1;*/

	return 0;
}