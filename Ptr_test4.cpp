#include<iostream>
using namespace std;
int main(void) {
	int a = 3; 
	int* ptr = nullptr;  //쓰레기값
	cout << "a의 주소 값을 참조합니다" << ptr << endl;
	ptr= &a;
	
	cout << "a의 주소 값을 참조합니다" << ptr << endl;
	cout << "a의 값을 간접참조합니다" << ptr << endl;

	*ptr = 10;
	cout << "a의 주소 값을 참조로 바꿉니다" << *ptr << endl;
	cout << "a의 주소 값을 바뀌지않습니다" << ptr << endl;

}