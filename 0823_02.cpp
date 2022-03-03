#include<iostream>
using namespace std;

class Counter {
	int val;

public :
	Counter() { val = 0; cout << "»ý¼ºÀÚ" << endl; }
	void Print() { cout << val << endl; }
	friend void setX(Counter& c, int val);
};

void setX(Counter& c, int val) {
	c.val = val;
}

int main() {
	Counter cnt;
	cnt.Print();

	setX(cnt, 2002);
	cnt.Print();

	return 0;
}
