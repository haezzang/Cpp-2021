#include<iostream>
#include<time.h>
using namespace std;
//up&down����
int main() {
	srand((unsigned)time(0));
	int rnd = rand() % 10 + 1;
	int num;
	cout << "1~10������ ���� ���� ������!"<< endl;
	cout << "��ȸ�� 3��!"<<endl;
	cout << endl;
	for(int i = 1; i <=3; i++) {
		cout << i<<"��° ���� �Է� : ";
		cin >> num;
		if (rnd == num) { cout << "���� �Դϴ�~" << endl;  break; }
		if (i == 3) {
			cout << endl;
			cout<< "3ȸ �� ��! ��ǻ�Ͱ� ������ ���� " << rnd << "�Դϴ�" << endl;
		}
		else if (rnd < num) cout << "DOWN �Դϴ�~" << endl;
		else if (rnd > num) cout << "UP �Դϴ�~" << endl;
	}
	cout << "������ ����Ǿ����ϴ�" << endl;
}