#include<iostream>
using namespace std;
//z를 입력하면 1부터 15 출력
int main(void) {
	char a;
	cin >> a;

	for (;;) {
		if (a == 'z') {
			for (int i = 1; i <= 15; i++)
				cout << i << "\t";
			break;
		}
		else {
			cin >> a;
		}
	}
}



