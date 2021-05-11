#include<iostream>
using namespace std;
//전역변수
int nValue = 100;
void subFuncA() {

	int nVal = 10;
	cout << "subFuncA::nVal=" << nVal << endl;
	nVal++;

}
void subFuncB(){
static int nVal = 10;
cout << "subFuncA::static nVal=" << nVal << endl;
nVal++;
}

int main() {
	subFuncA();
	subFuncA();
	subFuncA();
	subFuncB();
	subFuncB();
	subFuncB();
	return 0;
}
