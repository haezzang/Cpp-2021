//2117 조해정 ok
#include<iostream>
using namespace std;
int main(void) {
	char a[50];
	char* p = nullptr;
	int sum = 0;
	

	for (;;) {
		sum = 0;
		cout << "영어 단어의 값을 계산하는 프로그램입니다.('0'을 입력하면 프로그램을 종료합니다.) " << endl;
		cout << "원하는 단어를 입력하세요 . ";
		cin >> a;
		p = a;

		if (a[0]== '0')
			break;
		
		for (int i = 0; i < a[i] != NULL; i++) {
			if (*(p + i) >= 'A' && *(p + i) <= 'Z')
				sum += *(p + i) - ('A' - 1);
			else if (*(p + i) >= 'a' && *(p + i) <= 'z')
				sum += *(p + i) - ('a' - 1);
		
			
		}

		cout << a << " ==> " << sum << endl << endl;;
	}
	
}