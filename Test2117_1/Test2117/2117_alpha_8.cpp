//2117 ������ ok
#include<iostream>
using namespace std;
int main(void) {
	char a[50];
	char* p = nullptr;
	int sum = 0;
	

	for (;;) {
		sum = 0;
		cout << "���� �ܾ��� ���� ����ϴ� ���α׷��Դϴ�.('0'�� �Է��ϸ� ���α׷��� �����մϴ�.) " << endl;
		cout << "���ϴ� �ܾ �Է��ϼ��� . ";
		cin >> a;
		p = a;

		if (a[0]== '0')
			break;
		
		for (int i = 0; i < a[i] != NULL; i++) {
			if (*(p + i) >= 'A' && *(p + i) <= 'Z')
				sum += *(p + i) - ('A' - 1);
			else if (*(p + i) >= 'a' && *(p + i) <= 'z')
				sum += *(p + i) - ('a' - 1);
		
			
		}

		cout << a << " ==> " << sum << endl << endl;;
	}
	
}