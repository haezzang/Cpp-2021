#include <iostream>
using namespace std;
namespace min {
	void j() { cout << "�� " << endl; }
}
namespace m {
	void j() { cout << "��fma" << endl; }
}
int main() {
	cout <<min::j()<<endl;
	return 0;
}