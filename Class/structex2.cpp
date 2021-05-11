#include<iostream>
using namespace std;

 class  Point {
 public: //struct 비교 public 추가
	 int x;
	int y;
	void Print();
}; 

int main() {
	Point point = { 1,2 };
	Point* Ppoint = &point;;
	/*cout << "Ppoint의 좌표는 (" << (*Ppoint).x << "," << (*Ppoint).y << ")입니다." << endl;
	cout << "Ppoint의 좌표는 (" << Ppoint->x << "," << Ppoint->y << ")입니다." << endl;*/
	point.Print();
}

void Point::Print() {
	cout << "x좌표는" << x << endl;
	cout << "y좌표는" << y << endl;
}