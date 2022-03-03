#include<iostream>
using namespace std;
class JumsuOne {
public :
	void FuncOneShow() {
		cout << "점수원" << endl;
	}

};
class RankTwo {
public :
	void FuncTwoShow() { cout << "랭크투" << endl; }

};

class SungkulDerived :public JumsuOne, protected RankTwo {
public :
	void SungjukFunchow() {
		FuncOneShow();
		FuncTwoShow();
	}

};

int main() {
	SungkulDerived sdr;
	sdr.SungjukFunchow();
	sdr.FuncOneShow();

	
}