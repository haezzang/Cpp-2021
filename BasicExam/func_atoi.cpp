#include<iostream>
using namespace std;

void print(int a, int b) {
	cout << a + b << endl;
}
int main(void){
	char str[] = "100";
	int a = 200;
	//int b = atoi(str); 문자열을 숫자로 바꿔주는 함수
	print(a, a);
}

