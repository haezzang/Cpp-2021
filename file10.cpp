#include<iostream>
#include<fstream>
using namespace std;


int main() {
	
	
	ifstream fin("sample.txt");
	if (!fin) {
		cout << "¿¡·¯" << endl;
		exit(1);
	}
	fin.seekg(0, ios::end);
	cout << fin.tellg() << endl;
	fin.close();
}