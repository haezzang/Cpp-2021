#include<iostream>
using namespace std;

class Point {
public:
	int x=0;
	int y=0;
	Point() {
		cout << "�⺻������" << endl;

	}
	~Point() {
		cout << "(" << x << "," << y << ")" << "��ü�Ҹ�" << endl;
	}
};
int main(void) {
	Point *arr[5];
	for (int i = 0; i < 5; i++) {
		arr[i] = new Point();
	}
	for (int i = 0; i < 5; i++) {
		cin >> arr[i]->x;
		cin >> arr[i]->y;
	}
	for (int i = 0; i < 5; i++) {
		delete arr[i];
	}
}