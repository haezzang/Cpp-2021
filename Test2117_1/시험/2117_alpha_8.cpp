//2117 ������
#include<iostream>
using namespace std;
int main(void) {
	char a;
	
	int sum = 0;
	cout << "���� �ܾ��� ���� ����ϴ� ���α׷��Դϴ�.('0'�� �Է��ϸ� ���α׷��� �����մϴ�.) " << endl;
	for (;;) {
		cout << "���ϴ� �ܾ �Է��ϼ��� . ";
		cin >> a;

		if(a=='0')
			break;
		cout << a << " ==> " << sum << endl;
	}
}