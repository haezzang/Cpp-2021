#include<iostream>
using namespace std;
int main(void) {
	double arr[6] = { 1,2,3,4 };
	cout << arr << endl;

	for (int i = 0; i <sizeof(arr)/sizeof(double); i++)
		cout << arr << endl;
	cout << endl;
	for (int i = 0; i < sizeof(arr) / sizeof(double); i++)
		cout << &arr[i] << " ";
	cout << endl;

	for (int i = 0; i < sizeof(arr) / sizeof(double); i++)
		cout << arr[i] << " ";
	cout << endl;
	
}