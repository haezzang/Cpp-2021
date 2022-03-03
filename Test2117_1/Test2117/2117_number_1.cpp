//2117조해정  
#include<iostream>
using namespace std;

void main() {
	int cnt = 0;
	for (int i = 1; i <= 150; i++) {
		if (i % 17 == 0) {
			cout << i << "\t";
			cnt++;
			if (cnt % 17 == 0)
				cout << "\n";
		}
		
	}
	
	cout << endl;
	cout << "개수 = " << cnt << "개" << endl;




}