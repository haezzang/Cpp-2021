#include<iostream>
using namespace std;
#define a(val) ((val))*((val));//우선순위가 있으니 괄호 중요함
//매크로 전처리

inline int ba(int val) { //인라인 함수
	return val * val; //괄호 ㄱㅊ음
}
/*int sum(int op1, int op2) {
	return op1 + op2;
}
void display();*/
int main(void) {
	cout << a(2+1);
	//int print = sum(2, 3);
	//cout << "sum 함수를 호출하고 얻은 결과 값은" << print << endl;
	//display();

}
/*void display() {
	cout << "display 함수는 반환형이 없는 함수" << endl;
	return;
}*/