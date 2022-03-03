#include<iostream>
using namespace std;
//알파벳을 입력하면 숫자로 변환
int main(void) {
	char a;

	for (;;) {
		cout << "문자 입력: ";
		cin >> a;
		if (a >= 'A' && a <= 'Z')
			cout << (int)a - ('A' - 1)<<endl;
		else if (a >= 'a' && a <= 'z')
			cout << (int)a - ('a' - 1)<<endl;
		else
			break;
	}
}