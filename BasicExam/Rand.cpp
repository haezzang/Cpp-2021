#include<iostream>
#include<time.h>
using namespace std;
//Rand ������
int main() {
	srand((unsigned)time(0)); //�ð� �ߺ�����
	for (int i = 0; i < 100; i++) {
		cout << i + 1 << " : " << rand()%39+5 << endl;
	}
}