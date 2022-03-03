#include<iostream>
using namespace std;

class AAA {
	int val;
public:
	AAA(int n) { val = n; }
	void ShowData() { cout << val << endl; }



};


/*class BBB {
public :
	void setData(AAA& aaa, int val) {
		aaa.data = val;
	}

};*/

int main() {
	AAA a1(10);
	a1.ShowData();
	cout << "============="<<endl;
	AAA a2 = 20;
	a2.ShowData();

	
	/*int val1(20);
	cout << val1;
	AAA aaa;
	BBB bbb;

	bbb.setData(aaa,10);*/

	return 0;
}