#include<iostream>
using namespace std;

class A {
public:
	A(int a) {};
	A () = default; //����Ʈ ������ �ϴ��� ����
};
int main() {
	A a;
}

//�������� Ư¡ ������ �����ε� ����, ����Ʈ �Ű����� ������ ����