#include<iostream>
using namespace std;

 class  Point {
 public: //struct �� public �߰�
	 int x;
	int y;
	void Print();
}; 

int main() {
	Point point = { 1,2 };
	Point* Ppoint = &point;;
	/*cout << "Ppoint�� ��ǥ�� (" << (*Ppoint).x << "," << (*Ppoint).y << ")�Դϴ�." << endl;
	cout << "Ppoint�� ��ǥ�� (" << Ppoint->x << "," << Ppoint->y << ")�Դϴ�." << endl;*/
	point.Print();
}

void Point::Print() {
	cout << "x��ǥ��" << x << endl;
	cout << "y��ǥ��" << y << endl;
}