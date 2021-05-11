#include<iostream>
using namespace std;

/*void func1(int num1, int& num2) {
	num1++;
	num2++;
}*/

int func2(int c, int d) {
	return c | d & c;
}
int main() {

	//int a = 3, b = 4;
	//func1(a, b);
	//cout << a<<","<<b<<endl;
	int c = 5, d = 4;
	cout << func2(c, d) << endl;
}
