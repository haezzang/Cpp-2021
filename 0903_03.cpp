#include<iostream>
using namespace std;
class JumsuOne {
public :
	void FuncOneShow() {
		cout << "������" << endl;
	}

};
class RankTwo {
public :
	void FuncTwoShow() { cout << "��ũ��" << endl; }

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