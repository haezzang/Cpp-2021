#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;


void main() {

	ofstream fout("sample.txt", ios::app);

	if (!fout) {
		cerr << "���� ���� ��" << endl;
		exit(1);
	}
	fout << "�������" << endl;
}
