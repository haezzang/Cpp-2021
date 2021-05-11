#include<iostream>
using namespace std;

int main(void) {

	char* sec = nullptr;
	char dest[] = "same";
	sec = dest;
	//*sec = 'g';
	//cout << dest;
	cout << *(sec + 2)<<endl;

}
