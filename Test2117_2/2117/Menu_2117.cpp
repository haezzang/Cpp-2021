//2117 조해정

#include<iostream>
#include<time.h>

using namespace std;



int main() {
	srand((unsigned)time(0));
int chk;
	int num;
	while (true) {
		cout << "==========" << endl;
		cout << "==SELECT==" << endl;
		cout << "==========" << endl;
		cout << "1. 원의 넓이 구하기" << endl;
		cout << "2. 선 그리기" << endl;
		cout << "0. 종료" << endl;
		cout << "메뉴 선택 == >";
		cin >> chk;
		cout << endl;
		switch (chk)
		{
		case 1: cout << "원의 갯수를 입력 하세요 : "; cin >> num; break;
		case 2: cout << "선의 갯수를 입력 하세요 : "; cin >> num; break;
		case 0: return 0; break;
		default: cout << endl << "메뉴를 다시 선택 하세요."; break;
		}
		if (chk == 1 || chk == 2 || chk == 3) break;
		cout << endl << endl << endl;
	}







}