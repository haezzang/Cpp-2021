#include<iostream>
using namespace std;

struct Point {
	int x;
	int y;
}; Point p1;
//�ʱⰪ ���ָ� 0���� ����
int main() {
	Point point = { 1,2 };
	p1 = {3,4};
	cout << "�� point�� ��ǥ�� (" << point.x << "," << point.y << ")�Դϴ�." << endl;
	cout << "�� point�� ��ǥ�� (" << p1.x << "," <<p1.y << ")�Դϴ�." << endl;
}