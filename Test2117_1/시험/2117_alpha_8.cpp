//2117 조해정
#include<iostream>
using namespace std;
int main(void) {
	char a;
	
	int sum = 0;
	cout << "영어 단어의 값을 계산하는 프로그램입니다.('0'을 입력하면 프로그램을 종료합니다.) " << endl;
	for (;;) {
		cout << "원하는 단어를 입력하세요 . ";
		cin >> a;

		if(a=='0')
			break;
		cout << a << " ==> " << sum << endl;
	}
}