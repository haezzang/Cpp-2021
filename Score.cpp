#include<iostream>
using namespace std;
#define INWON 3
#define SUBJ 4
int Num;

//����ó�� ���α׷�
string subj_name[] = { "����","����","����","JAVA","C" };

class Student {
	char num[4];
	int rank;
	char name[10];
	char grade;
	int subj[SUBJ + 1]; //tot�� ����
	//int kor, eng, math, tot;
	double avg;


public:
	Student() {
		subj[SUBJ] = 0;
		rank = 1;
		cout << "����" << endl;
	}
	~Student() {
		cout << "�Ҹ�" << endl;
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

	cout <<i+1<< "��° �л� �Է�  " << endl;
	cout << "�й� : ";
	cin >> num;
	cout << "�̸� : ";
	cin >> name;

		for (int i = 0; i < SUBJ; i++) {
			cout <<subj_name[i]<< " ���� �Է� : ";
			cin >> subj[i];
			while (true) {
				if (!(subj[i] >= 0 && subj[i] <= 100)) {
					cout << subj_name[i]<< " �ٽ��Է� : ";
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


//��ŷ����
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
	//Student stu[INWON]; //������ ȣ���Ѵ�

	//int INWON;
	//cin >> INWON;
	//Student* stu[INWON];  //������ ȣ�� X
	


	//�Է¹޾� ��ü ����!!
	cin >> Num;
	Student* stu = new Student[Num]; //������ ȣ���Ѵ�



	//cout << sizeof(stu)<<endl;
	//cout << sizeof(*stu[0]);

	for (int i = 0; i < Num; i++) {
		stu[i].input(i);
		stu[i].clac();
	
	}
	ranking(stu);
	for(int i=0; i< Num; i++) stu[i].print();
}