#include<iostream>
using namespace std;

int main(void) {

	 int * ptr;
	int arr[4] = { 1,2,3,4 };
	ptr = arr;

	for (int i = 0; i < 4; i++)
		cout << arr[i] << " ";
	cout << endl;

	for (int i = 0; i < 4; i++)
		cout << *(ptr + i) << " ";
	cout << endl;

	for (int i = 0; i < 4; i++)
		cout << *(arr+i) << " ";
	cout << endl;

	cout << ptr << " "<< endl;
	for (int i = 0; i < 4; i++) 
		cout << ptr[i] << " ";
	ptr++;
	cout << ptr<< " " << endl;
	cout << arr << " " << endl;
	arr++;
	cout << arr << " " << endl;
		
	
	cout << endl;


}
