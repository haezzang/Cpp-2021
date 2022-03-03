//2117 ������
#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<time.h>


#define _CRT_SECURE_NO_WARNINGS

using namespace std;

class Point {
	int x;
	int y;

public:
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	Point(Point& p) {
		x = p.x;
		y = p.y;
	}
	int getX() { return x; }
	int getY() { return y; }



};
class Circle {
	Point p;	
	int r;
public:
	
	int getR() { return r; }
	void print() {
		const double PI=3.141592;
		double area = PI * getR() * getR();
		cout << "���� ��ǥ(" << p.getX() << ", " << p.getY() << ")�� ������  " << getR() << "�� ���� ���� : " <<area<< endl;
	}
	Circle(Point& p, int r) : p(p), r(r) {

		cout << "�� ����" << endl;

	}
	~Circle() {
		cout << "�� �Ҹ�" << endl;
	}
};

int main() {
	srand((unsigned)time(0));

	int x = rand() % 101;
	int y = rand() % 101;
	Point p(x, y);
	int r = rand() % 10+1;

	Circle cir(p, r);
	cir.print();

}