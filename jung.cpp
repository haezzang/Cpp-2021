#include <iostream>
using namespace std;
namespace min {
	void j() { cout << "¾Æ " << endl; }
}
namespace m {
	void j() { cout << "¾Æfma" << endl; }
}
int main() {
	cout <<min::j()<<endl;
	return 0;
}