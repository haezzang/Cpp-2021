#include<iostream>
using namespace std;
//z�� �Է��ϸ� 1���� 15 ���
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



