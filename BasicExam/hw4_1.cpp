#include<iostream>
using namespace std;
//c �Է��ϸ� num��ŭ ���� ���
int main(void) {
	char a;
	int num;
	cout << "�� �Է� : ";

	cin >> num;
	cin >> a;
	for (;;) {
		if(a =='c') {
			for (int i = 1; i <= num; i++) 
				cout << i << "\t"; break;
		}
		else
			cin >> a;		
	}

}