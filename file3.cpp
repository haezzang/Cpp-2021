#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;


void main() {

	ofstream fout("sample.txt", ios::app);

	if (!fout) {
		cerr << "파일 오픈 노" << endl;
		exit(1);
	}
	fout << "배고프다" << endl;
}
