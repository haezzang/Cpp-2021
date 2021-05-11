#include<iostream>
using namespace std;
//c 입력하면 num만큼 숫자 출력
int main(void) {
	char a;
	int num;
	cout << "수 입력 : ";

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