#include<iostream>
using namespace std;

class Cat {
	int *pAge=new int;
	const char* pName=new char;

public:
	Cat() {
		*pAge = 18;
		pName = "야옹이";
		
	}
	~Cat() {
		delete pAge;
		delete pName;
	}
	int getAge() { return *pAge; }
	void setAge(int age) { *pAge = age; }
	char* getName() { return (char*)pName; }
	void setName(const char* name) { pName = name; }

};

int main() {
	Cat* pCat = new Cat;
	cout << "고양이 나이 : " << pCat->getAge() << ", 고양이 잉름 : " << pCat->getName() << endl;
	pCat->setAge(20);
	pCat->setName("방울쓰");
	cout << "고양이 나이 : " << pCat->getAge() << ", 고양이 잉름 : " << pCat->getName() << endl;

}