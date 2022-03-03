#include<iostream>
using namespace std;
#define INWON 3
#define SUBJ 4
int Num;

//성적처리 프로그램
string subj_name[] = { "국어","영어","수학","JAVA","C" };

class Student {
	char num[4];
	int rank;
	char name[10];
	char grade;
	int subj[SUBJ + 1]; //tot도 있음
	//int kor, eng, math, tot;
	double avg;


public:
	Student() {
		subj[SUBJ] = 0;
		rank = 1;
		cout << "생성" << endl;
	}
	~Student() {
		cout << "소멸" << endl;
	}
	void input(int i);
	void clac();
	void print();
	int getTot() {
		return subj[SUBJ];
	}
	int getRank() {
		return rank;
	}
	void addRank() {
		rank++;
	}
};
void Student::input(int i) {

	cout <<i+1<< "번째 학생 입력  " << endl;
	cout << "학번 : ";
	cin >> num;
	cout << "이름 : ";
	cin >> name;

		for (int i = 0; i < SUBJ; i++) {
			cout <<subj_name[i]<< " 점수 입력 : ";
			cin >> subj[i];
			while (true) {
				if (!(subj[i] >= 0 && subj[i] <= 100)) {
					cout << subj_name[i]<< " 다시입력 : ";
						cin >> subj[i];
				}
				else break;
				
			}
		
		}
		cout << endl;
	}

void Student::clac() {
	for(int i=0; i<SUBJ; i++)
		subj[SUBJ]+=subj[i];
	avg = (double)subj[SUBJ] / SUBJ;
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

	cout << num << "\t" << name << "\t";
	for (int i = 0; i <= SUBJ; i++) {
		cout << subj[i] << "\t";
	}
	cout<< avg <<"\t"<<grade<<"\t"<<rank<< endl;
}


//랭킹로직
void ranking(Student *stud) {
	for (int i = 0; i < Num -1; i++) {
		for (int j = i + 1; j< Num; j++) {
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
	//Student stu[INWON]; //생성자 호출한다

	//int INWON;
	//cin >> INWON;
	//Student* stu[INWON];  //생성자 호출 X
	


	//입력받아 객체 생성!!
	cin >> Num;
	Student* stu = new Student[Num]; //생성자 호출한다



	//cout << sizeof(stu)<<endl;
	//cout << sizeof(*stu[0]);

	for (int i = 0; i < Num; i++) {
		stu[i].input(i);
		stu[i].clac();
	
	}
	ranking(stu);
	for(int i=0; i< Num; i++) stu[i].print();
}