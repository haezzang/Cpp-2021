//2117 ������
#include<iostream>
#include<time.h>


using namespace std;

class Point {
	int x;
	int y;

public:
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	Point( Point& p) {
		x = p.x;
		y = p.y;
	}
	int getX() { return x; }
	int getY() { return y; }



};
class Line {
	Point p1;
	Point p2;
	char name[5];
public :

	double Xline = pow((p2.getX() - p1.getX()), 2);
	double Yline = pow((p2.getY() - p1.getY()), 2);

	Line(Point& p1, Point& p2 ) : p1(p1), p2(p2) {

		//strcpy(name, pname);
		cout << "�� ����" << endl;
	}
	~Line() {
		cout << "�� �Ҹ�" << endl;
	}
	void print() {
		cout << "�� (" << p1.getX() << ", " << p1.getY() << ") �� ��(" << p2.getX() << ", " << p2.getY() << ")�� �մ� " << name << "�� ���� : " << sqrt(Xline + Yline) << endl;
	}
};

int main() {
	srand((unsigned)time(0));

	int x = rand() % 60 - 30;
	int y = rand() % 60 - 30;
	Point p1(x, y);
	x = rand() % 60 - 30;
	y = rand() % 60 - 30;
	Point p2(x, y);
	char name;
	cout << "���� �̸��� �Է��ϼ���. : ";
	cin >> name;

	Line line(p1, p2);

	line.print();

}