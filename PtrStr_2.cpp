#include<iostream>
using namespace std;

int main(void) {
	short value = 10;
	void* pValue = nullptr;
	pValue = &value;
	cout << "pVlaue = " << pValue << endl;
	cout << "*pVlaue = " << *(short *)pValue << endl;
	cout << "Vlaue = " << value << endl;

	*(short *)pValue = 20;
	cout << "pVlaue = " << pValue << endl;
	cout << "*pVlaue = " << *(short *)pValue << endl;
	cout << "Vlaue = " << value << endl;

	char* sec = nullptr;
	char dest[] = "same";
	sec = dest;
	*sec = 'c';
	for(int i=0; i<4; i++)
	cout << dest[i];
}