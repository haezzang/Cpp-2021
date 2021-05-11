#include<iostream>
using namespace std;
//알파벳을 입력하면 숫자로 변환
int main(void) {
	char a;
	
	cout << "문자 입력: ";
	cin >> a;
	
	
	cout << (int)a-64;


}