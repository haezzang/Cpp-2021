#include<iostream>
using namespace std;
#define multiple_define(A) ((A)*(A))
int multiple_inline(int A);


int main(void) {
	int a = 3;
	cout << "inline 함수의 값은" << multiple_inline(++a) << endl;
	a = 3;
	cout << "define 매크로의 값은" << multiple_define(++a) << endl;
	return 0;
	}
int multiple_inline(int A) {
	return A * A;
}

