#include<iostream>

int main(void) {

	int a = 1, b = 1;
	const int* const ptr = &a;
	*ptr = 2;
	a = 3;
	ptr = &b;
}
