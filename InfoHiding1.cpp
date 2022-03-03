#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	void setX(int x) {
		this->x = x;
	}
	void setY(int y) {
		this->y = y;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
};

int main() {
	int x, y;
	cout << "좌표입력 : ";
	cin >> x >> y;
	Point p;
	p.setX(x);
	p.setY(y);
	cout << "점 (" <<p. getX() << ", " << p.getY() << ") 그리기 " << endl;
	return 0 ;
}