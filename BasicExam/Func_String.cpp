#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//문자열 함수
int main() {
	const char* a = "Mirim shoool";
	const char* b = "Mirim Program";
	cout << strlen(a) << endl;
	cout << strlen(b) << endl;
	char c[10];
	strcpy(c, "My Home");
	cout << c << endl;
	cout << strcmp(a, b) << endl;

	int n = 4;
	int& refn = n; 
	cout << "Before change : " << n << " , " << refn<<endl;
	n++;
	cout << " change n  : " << n << " , " << refn<< endl;
	refn++;
	cout << " change refn: " << n << " , " << refn<< endl;
}