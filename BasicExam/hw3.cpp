#include<iostream>
using namespace std;
//프라임수 약수더해서 자기가 되는수
int main(void) {
	int sum = 0;
	for (int i = 1; i <= 1000; i++) {
		sum = 0;
		for (int j = 1; j <i; j++) {
			if (i % j == 0)
				sum += j;
		}
		if (i == sum)
			cout << i<<endl;
	}
} 

    
		


		

	

