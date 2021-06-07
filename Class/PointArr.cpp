#include<iostream>
using namespace std;

class Point {
public:
	int x;
	int y;
	Point() {
		cout << "扁夯积己磊"<<endl;

	}
	~Point() {
		cout <<"("<<x<<","<<y <<")"<<"按眉家戈"<<endl;
	}
};
int main(void) {
	Point arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i].x;
		cin >> arr[i].y;
	}
}