#include<iostream>
using namespace std;

class MyData {
public :
	MyData(int nParam) {
		m_pnData = new int;
		*m_pnData = nParam;
	}
	MyData(const MyData& rhs) {
		cout << "CMDyata(const MyData &)" << endl;
		m_pnData = new int;
		*m_pnData = *rhs.m_pnData;
	}
	//int GetData() {
	//	if (m_pnData != NULL)
	//		return *m_pnData;

	//	return 0;
	//}
	~MyData() {
		delete	 m_pnData;
	}
	int* m_pnData = nullptr;
private :

};

int main() {
	MyData a(10);
	MyData b(a);
	MyData *c = new MyData(20);
	MyData* d(c);
	cout << *(a.m_pnData) << endl;
	cout << *(b.m_pnData) << endl;// 정적
	cout <<*(c->m_pnData)<< endl;//동적 이다
	cout << *(d->m_pnData) << endl;
}