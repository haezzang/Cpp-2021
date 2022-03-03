#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;


void main() {

	ofstream fout("sample.txt", ios::app);

	if (!fout) {
		cerr << "ÆÄÀÏ ¿ÀÇÂ ³ë" << endl;
		exit(1);
	}

	char name[20], addr[50];
	cin >> name >> addr;
	fout << name << "\t" << addr << endl;
	fout.close();
}
