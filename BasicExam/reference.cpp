#include<iostream>
using namespace std;


void main() {
	int a = 10, b = 20;
	int& ra = a;
	cout << a;
	ra = b;
	cout << b;
}