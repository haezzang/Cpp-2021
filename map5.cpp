#include <iostream>
#include <map>
using namespace std;

class aaa {
public:
	int x;
	int y;
	double z;
};

ofstream& operator<<(ofstream& out, aaa& a) {
	out << a.x << endl;
	out << a.y << endl;
	out << a.z << endl;

	return out;
}

int main() {

	// 맵 생성
	map<string, aaa> m;

	aaa aobj;
	aobj.x = 7;
	aobj.y = 2;
	aobj.z = 1.234;

	m["c"] = aobj;
	aobj.x = 5;

	m["b"] = aobj;
	aobj.x = 3;
	aobj.y = 9;
	aobj.z = 7.234;

	m["d"] = aobj;


	// key값이 작은 것부터 나온다.
	for (map<string, aaa>::iterator ni = m.begin(); ni != m.end(); ni++)
		cout << ni->first << " " << ni->second << endl;

	cout << endl;

}