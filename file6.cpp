#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;


void main() {

	char addr[80];
	cout << "���ڿ� �Է�";
		while (cin.get(addr, 80)) {
			if (strcmp(addr, "exit") == 0) break;
			cout << "���ڿ� ��� : " << addr << endl;
			cout << "���ڿ� �Է�";
		}

}
