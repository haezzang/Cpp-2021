#include <iostream>
using namespace std;
class Person {
	const char* name;
	const char* phone;
	int age;
public:
	void showData(); //�ڵ��ζ����Լ��� ������
	//void SetData(const char* _name, const char* _phone, int _age);
	Person(const char* name, const char* phone, int age);
	//~Person() {}
	~Person();
};
void Person::showData() {
	cout << "name : " << name << endl;
	cout << "phone : " << phone << endl;
	cout << "age : " << age << endl;
}
Person::Person(const char* name, const char* phone, int age) { //������ �ʱ�ȭ�ϱ�
	this->name = name;
	this->phone = phone;
	this->age = age;
}
/*void Person::SetData(const char* name, const char* phone, int age) {//��,,���̺�
	this->name = name;
	this->phone = phone;
	this->age = age;
}*/
Person::~Person() {
}
int main() {
	Person p("KIM", "013 - 113 - 1113", 22);
	//p.SetData("KIM", "013-113-1113", 22);
	p.showData();
	cout << "��ü�� �Ҹ��մϴ�";
	return 0;
}