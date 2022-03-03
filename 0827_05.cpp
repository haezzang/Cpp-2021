#include<iostream>
using namespace std;

class Student {

	
public:
	int id;
	string name;

};

class StdGrd : public  Student {

public:
	int kor;
	int eng;
	int math;


	class Grade {
	public:
		int kor;
		int eng;
		int math;
	};


};

int main() {
	StdGrd stu1;
	stu1.id = 1111;
	stu1.name = "홍길동";
	stu1.kor = 30;
	stu1.eng = 50;
	stu1.math = 100;
	StdGrd stu2;
	stu2.id = 2222;
	stu2.name = "전우치";

}
