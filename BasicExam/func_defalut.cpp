#include<iostream>
using namespace std;
/*
int sum(int a, int b=3, int c=4, int d=5) {
	return a + b+c+d;
}

int sum() {
	return 0;
}
int main() {
	cout << sum(2,3,5) << endl; //2355
	cout << sum(3) << endl; //3345
	cout << sum(4,5,6,7)<< endl; //4567 
	cout << sum(2,3) << endl;//2345
	cout << sum() << endl; //sum 함수 어디가야할지 ㅁㄹ sum둘다 부를수있음
}*/
int sum(int a, int b) {
	int sum;
	sum = a + b;
	return sum, a, b;
}
int main() {
	sum(5, 6);
}
 //프로토 타입은 변수명 필요 없고 데이터형만 있어도 ㄱㅊ