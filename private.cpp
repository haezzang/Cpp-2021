#include<iostream>
using namespace std;

const int OPEN = 1;
const int CLOSE = 2;

class Door {
private :
	int state;
public :
	Door();
	void Open() { state = OPEN; }
	void Close() { state = CLOSE; }
	void ShowState() {
		cout << state << endl;
	}
};
Door :: Door() {

}
int main() {
	Door d;
	d.Open();
	d.ShowState();
		return 0;
}