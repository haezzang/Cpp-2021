#include<iostream>
using namespace std;
//Student 클래스 정의
class Student {
private:
	int nHakbun;
	const char* sName;
public :
	Student();
	Student(int nHakbun, const char* sName);
	void show();
};
//Student 클래스 멤버 함수의 정의
Student::Student() {
	nHakbun = 1234;
	sName = "이사랑";
	cout << "학번이 등록되었습니다." << endl;
}
Student::Student(int nHakbun, const char* _sName) {
	this->nHakbun = nHakbun; //this.같음 (*this)
	sName = _sName;
	cout << "매개변수로 학번이 등록되었습니다." << endl;
}
void Student::show() {
	cout << "학번은 " << nHakbun << "입니다." << endl;
	cout << "이름은 " <<sName << "입니다." << endl;
}
int main() {
	//Student student1; //객체 선언
	//student1.show();
	//Student student2(5678,"김미림"); //객체 선언 매개변수 있당
	//student2.show();
	Student stu[3] = { Student(), Student(1111,"강아지"), Student(2222, "망아지") 
	};
	for (int i = 0; i < 3; i++)
		stu[i].show();
	return 0;
}