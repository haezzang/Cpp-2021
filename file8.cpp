#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;


int main() {
	ofstream fo_bin("data.bin", ofstream::binary);
	int nArray[] = { 100,200,300,400,500,600 };

	if (!fo_bin) {
		cout << "data.bin  ¿¡·¯" << endl;
		exit(1);
	}


	fo_bin.write((char*)&nArray, sizeof(nArray));
	
}