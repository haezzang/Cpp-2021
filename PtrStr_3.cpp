#include<iostream>
using namespace std;

int main(void) {
	const char* pMessage = "welcome to korea";

	cout << pMessage << endl;
	cout << *pMessage << endl;
	cout << (pMessage + 1) << endl;
	cout << *(pMessage + 2) << endl;
	cout << *(pMessage + 3) << endl;
	int i;
	for (i = 0; *(pMessage + i)!=NULL; i++);  cout << i << endl;
		
		//cout <<*(pMessage+i) << endl;
		//pMessage++;
	
}
