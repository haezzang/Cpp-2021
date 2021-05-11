#include<iostream>
using namespace std;

int main(void) {
	//a입력하면 카운트
	char a;
	int n = 0;

	for (;;) {
		cin >> a;
			if (a != 'a') {
				break;
			}
		n++;
		cout << "a : " << n<<endl;
	}
	
	
}