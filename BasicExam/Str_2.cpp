#include<iostream>
using namespace std;

int main(void) {

	char str[15] = "HELLO WROLD";
	//int strlength = 0;
	int i = 0;
	for(i = 0; str[i] != NULL; i++);
		//strlength++;
	cout << "HELLO WORLD의 문자길이는" << i << endl;
	
}
