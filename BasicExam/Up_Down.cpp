#include<iostream>
#include<time.h>
using namespace std;
//up&down게임
int main() {
	srand((unsigned)time(0));
	int rnd = rand() % 10 + 1;
	int num;
	cout << "1~10사이의 수를 맞춰 보세요!"<< endl;
	cout << "기회는 3번!"<<endl;
	cout << endl;
	for(int i = 1; i <=3; i++) {
		cout << i<<"번째 숫자 입력 : ";
		cin >> num;
		if (rnd == num) { cout << "정답 입니다~" << endl;  break; }
		if (i == 3) {
			cout << endl;
			cout<< "3회 다 땡! 컴퓨터가 생각한 수는 " << rnd << "입니다" << endl;
		}
		else if (rnd < num) cout << "DOWN 입니다~" << endl;
		else if (rnd > num) cout << "UP 입니다~" << endl;
	}
	cout << "게임이 종료되었습니다" << endl;
}