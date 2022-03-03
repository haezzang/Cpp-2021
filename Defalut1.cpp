#include<iostream>
using namespace std;

class A {
public:
	A(int a) {};
	A () = default; //디폴트 생성자 하는일 없음
};
int main() {
	A a;
}

//생성자의 특징 생성자 오버로딩 가능, 디폴트 매개변수 설정도 가능