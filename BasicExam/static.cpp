#include <iostream>
using namespace std;

int a = 0;

void jungjuk() {
	int a = 0;
	cout << "정적 변수는 a는 " << a << endl;
	a++;
}

int main() {
	jungjuk();
	jungjuk();
	jungjuk();
	const int b = 3;
	b /= 5;
	
	
}