#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;


void main() {
	string empNum;
	string empName;
	string position;
	string grade;
	int year;

	ifstream fin;

	fin.open("data.txt");

		while (fin >> empNum >> empName >> grade>>year) {
			cout << empNum << setw(10) << empName << setw(22) << grade <<setw(10)<< endl;
			}

fin.close();
}
