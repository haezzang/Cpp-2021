#include<iostream>
using namespace std;

class Point {
public:
	int x;
	int y;
	Point() {
		cout << "?⺻??????"<<endl;

	}
	~Point() {
		cout <<"("<<x<<","<<y <<")"<<"??ü?Ҹ?"<<endl;
	}
};
int main(void) {
	Point arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i].x;
		cin >> arr[i].y;
	}
}