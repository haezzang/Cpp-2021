#include<iostream>
using namespace std;
//지역변수 전역변수 차이
int nValue = 100;
void subFunc() {
	int nVal = 20;
	cout << "subFunc:전역변수:" << nValue << endl;
	cout << "subFunc:지역변수:" << nVal << endl;

	nValue = 200;
	nVal = 10;
	cout << "subFunc:전역변수:" << nValue << endl;
	cout << "subFunc:지역변수:" << nVal << endl;
}

int main() {
	int nValue = 10; //지역변수명 전역명수명이 동일 //전역변수 접근 :: 사용
	cout << "Main:전역변수:" << ::nValue << endl;
	cout << "Main:지역변수:" << nValue << endl; //지역변수출력
	subFunc(); //서브함수 호출
	cout << "Main:전역변수:" << ::nValue << endl;
	cout << "Main:지역변수:" << nValue << endl;
	
}