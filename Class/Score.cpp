#include<iostream>
using namespace std;
#define INWON 2
//����ó�� ���α׷�
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
	cout << "�й� : ";
	cin >> num;
	cout << "�̸� : ";
	cin >> name;

	cout << "���� : ";
	while (true) {
		cin >> kor;
		if (kor < 0 || kor > 100)
			cout << "���� : ";
		else
			break;

	}
	cout << "���� : ";
	while (true) {
		cin >>eng;
		if (eng < 0 || eng > 100)
			cout << "���� : ";
		else
			break;

	}
	cout << "���� : ";
	while (true) {
		cin >> math;
		if (math < 0 || math > 100)
			cout << "���� : ";
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