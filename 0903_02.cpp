#include<iostream>
using namespace std;

class Person {
public :
	void PrintMethod(){
	cout << "�ΰ�" << endl; }

};
class Studetn :public Person {
public:
		void PrintMethod() {
		Person::PrintMethod();
		cout << "�ڽ� " << endl;
		}
	
};
int main() {
	Studetn st1;
	st1.PrintMethod();
}
