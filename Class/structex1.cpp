#include<iostream>
using namespace std;

struct Point {
	int x;
	int y;
}; Point p1;
//초기값 안주면 0으로 세팅
int main() {
	Point point = { 1,2 };
	p1 = {3,4};
	cout << "점 point의 좌표는 (" << point.x << "," << point.y << ")입니다." << endl;
	cout << "점 point의 좌표는 (" << p1.x << "," <<p1.y << ")입니다." << endl;
}