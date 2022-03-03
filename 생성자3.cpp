//���� ����� �ٲ㺸��
#include<iostream>
using namespace std;


class Person {
	char* name;
	int age;
public:
	Person(const char* myname,int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
	}
	void showPerson() const {
		cout << "�̸� " << name << " ";
		cout << "���� : " << age << endl;

	}
	~Person() {
		delete[]name;
		cout << "called destructor!" << endl;
	}


	//������ ��������
	Person(Person& s) : age(s.age) { //�տ��� ������� ���� �Ű�����
		name = new char[strlen(s.name) + 1];
		strcpy(this->name, s.name);
		//this->age = s.age;
	}

};
int main(void) {
	Person man1("Lee Mee Rim", 27);
	Person man2(man1);
	man1.showPerson();
	man2.showPerson();
}