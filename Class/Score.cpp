#include<iostream>
using namespace std;
#define INWON 2
//성적처리 프로그램
class Student {
	char num[5];
	char name[10];
	int kor, eng, math, tot;
	double avg;
public:

	void input();
	void clac();
	void print();
};
void Student::input() {
	cout << "학번 : ";
	cin >> num;
	cout << "이름 : ";
	cin >> name;

	cout << "국어 : ";
	while (true) {
		cin >> kor;
		if (kor < 0 || kor > 100)
			cout << "국어 : ";
		else
			break;

	}
	cout << "영어 : ";
	while (true) {
		cin >>eng;
		if (eng < 0 || eng > 100)
			cout << "영어 : ";
		else
			break;

	}
	cout << "수학 : ";
	while (true) {
		cin >> math;
		if (math < 0 || math > 100)
			cout << "수학 : ";
		else
			break;
	}
};
void Student::clac() {
	tot = kor + eng + math;
	avg = (double)tot / 3;
}
void Student::print() {
	cout <<num << "\t" << name << "\t" <<kor << "\t" <<eng << "\t" << math << "\t" <<tot << "\t" << avg << endl;
}
int main(void) {
	Student stu[INWON];
	for (int i = 0; i < INWON; i++) {
		stu[i].input();
		stu[i].clac();
		stu[i].print();	
	}
}