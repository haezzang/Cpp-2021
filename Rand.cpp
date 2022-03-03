#include<iostream>
#include<time.h>
using namespace std;
//Rand 돌리기
int main() {
	srand((unsigned)time(0)); //시간 중복금지
	for (int i = 0; i < 100; i++) {
		cout << i + 1 << " : " << rand()%39+5 << endl;
	}
}