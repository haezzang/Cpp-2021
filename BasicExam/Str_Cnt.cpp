#include<iostream>
using namespace std;
//문자열 세줌
int main(void) {
	char str[] = "I will go to Europe";
	int i = 0;
	for (int i = 0; str[i] != NULL; i++) {
		cout << i;
		cout <<  str[i] << endl;
	}
	cout << i;
}