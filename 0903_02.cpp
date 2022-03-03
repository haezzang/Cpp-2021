#include<iostream>
using namespace std;

class Person {
public :
	void PrintMethod(){
	cout << "인간" << endl; }

};
class Studetn :public Person {
public:
		void PrintMethod() {
		Person::PrintMethod();
		cout << "자식 " << endl;
		}
	
};
int main() {
	Studetn st1;
	st1.PrintMethod();
}
