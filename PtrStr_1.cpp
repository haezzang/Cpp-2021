#include<iostream>
using namespace std;



int main() {
	void* pValue = 0;
	int val = 100;
	pValue = &val;
	
	*(int *)pValue = 200;

	cout <<*(int *)pValue;

	cout <<endl;
	char pMessage[] = { "Welcome to Korea" };
	char* pp = pMessage;

	for (int i = 0; i < sizeof(pMessage)-1; i++) {
		cout <<"++"<< *pp << endl;
		pp++;
	}	
	cout << sizeof(pMessage)<<endl;
	int nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* pArray;
	pArray = nArray;
	cout << nArray[0] << endl;
	pArray[0] = 1;
	cout << pArray[0] << endl;

	
	//nArray = pArray;
}