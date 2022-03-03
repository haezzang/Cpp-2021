//2117 조해정
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
		cout << "선 생성" << endl;
	}
	~Line() {
		cout << "선 소멸" << endl;
	}
	void print() {
		cout << "점 (" << p1.getX() << ", " << p1.getY() << ") 와 점(" << p2.getX() << ", " << p2.getY() << ")를 잇는 " << name << "의 길이 : " << sqrt(Xline + Yline) << endl;
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
	cout << "선의 이름을 입력하세요. : ";
	cin >> name;

	Line line(p1, p2);

	line.print();

}