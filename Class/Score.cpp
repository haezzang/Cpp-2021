#include<iostream>
using namespace std;
#define INWON 2
//����ó�� ���α׷�
class Student {
	char num[5];
	char name[10];
	int kor, eng, math, tot;
	double avg;
	char grade;
	int rank;
public:
	Student() {
		rank = 1;
	}
	void input(int i);
	void clac();
	void print();
	int getTot() {
		return tot;
	}
	int getRank() {
		return rank;
	}
	void addRank() {
		rank++;
	}
};
void Student::input(int i) {
	cout <<i+1<< "��° �л� �Է�  " << endl;
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
	switch ((int)(avg/10))
	{
	case 10: case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	default: grade = 'E'; break;
	}
}
void Student::print() {

	cout << num << "\t" << name << "\t" << kor << "\t" << eng << "\t" << math << "\t";
	cout<< tot << "\t" << avg <<"\t"<<grade<<"\t"<<rank<< endl;
}
//��ŷ����
void ranking(Student *stud) {
	for (int i = 0; i <INWON-1; i++) {
		for (int j = i + 1; j<INWON; j++) {
			if (stud[i].getTot() < stud[j].getTot()) {
				stud[i].addRank();
			}
			else if (stud[i].getTot() > stud[j].getTot()) { 
				stud[j].addRank();
			}
		}
	}
	

}
int main(void) {
	Student stu[INWON];
	for (int i = 0; i < INWON; i++) {
		stu[i].input(i);
		stu[i].clac();
	
	}
	ranking(stu);
	for(int i=0; i<INWON; i++) stu[i].print();
}