//2117조해정 
#include<iostream>
using namespace std;

void main() {
	int binary[8];
	int octal[3];
	int  digit[2];
	int hexa[2];

	void num(int c, int n, int x[], int x_len);

	cout << "char\tbinary\t\toctal\tdigit\thexa" << endl;
	for (int i = 'A'; i <= 'Z'; i++) {
		cout << (char)i <<"\t";
		num(i, 2, binary, 8); cout <<"\t"; //2진수
		num(i, 8, octal, 3); cout << "\t";  //8진수
		num(i, 10, digit, 2); cout << "\t"; //10진수
		num(i, 16, hexa, 2); cout << "\t"; //16진수
		cout<< endl;

	}

}
// i문자 진수 x배열  x배열길이
void num(int c, int n, int x[], int x_len) {
	for (int i = 0; i <x_len; i++) {
		x[i] = c % n;
		c = c / n;
	}

	for (int i = x_len-1; i >= 0; i--) {
		if (x[i] > 9) {
			if (x[i] == 10) cout << "A";
			else if (x[i] == 11) cout << "B";
			else if (x[i] == 12) cout << "C";
			else if (x[i] == 13) cout << "D";
			else if (x[i] == 14) cout << "E";
			else if (x[i] == 15) cout << "F";
		}
		else
		cout << x[i];

	}
}
