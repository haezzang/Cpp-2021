#include<iostream>
using namespace std;

class Complex {
	int real; //실수
	int imaginary;  //허수

public :
	Complex(int real, int imaginary) : real(real), imaginary(imaginary){
	

	}
	Complex() {
		real = 0;
		imaginary = 0;
	}
	Complex &operator+(Complex &res) {
		Complex ctemp;
		ctemp.real=this->real+ res.real ;
		ctemp.imaginary = this->imaginary+ res.imaginary;
		return ctemp;
		
	}
	Complex& operator*(Complex& res) {
		Complex ctemp;
		ctemp.real = this->real*res.real+-1*(this->imaginary*res.imaginary);
		ctemp.imaginary  =this->real* res.imaginary+this->imaginary*res.real ;
		return ctemp;

	}
	Complex& operator++() {
		++this->real;
		return *this;

	}
	Complex& operator++(int) {
		Complex ctemp(real,imaginary);
		this->real++;
		return ctemp;

	}
	Complex& operator--() {
		--this->real;
		return *this;

	}
	Complex& operator--(int) {
		Complex ctemp(real, imaginary);
		this->real--;	
		return ctemp;

	}
	Complex& operator-(Complex& res) {
		Complex ctemp;
		ctemp.real = this->real - res.real;
		ctemp.imaginary = this->imaginary - res.imaginary;
		return ctemp;

	}

	void print() {

		if (real == 0 && imaginary == 0) cout <<"0" << endl;
		else if (real == 0) {
			if (imaginary==1)
				cout  << "i" << endl;
			else
					cout << imaginary << "i" << endl;
		}
		else if (imaginary == 1) cout << real << "+" << "i" << endl;


		else if (imaginary < 0) {
			if (real == 0)
				cout << imaginary << "i" << endl;
			else if(imaginary==-1)
				cout << real  << "i" << endl;

			else 
				cout << real<< imaginary << "i" << endl;
		} 
		else if (imaginary == -1)
			cout << real << "-" << "i" << endl;
	
		else if (imaginary== 0)
			cout << real  <<endl;	


		else
		cout << real << "+" << imaginary << "i" << endl;
	}
};

int main() {
	Complex c1(0, 0);
	Complex c2(1,1);
	Complex c3(2,2);

	cout << "c1 = ";  c1.print();
	cout << "c2 = "; c2.print();
	cout << "c3 = "; c3.print();
	Complex c4(0, -2);
	cout << "c4 = "; c4.print();
	Complex c5(-5, 0);
	Complex c6(3, 0);
	Complex c7(0, 7);
	cout << "c5 = "; c5.print();
	cout << "c6 = "; c6.print();
	cout << "c7 = "; c7.print();


	c1 = c2 + c3;
	cout << "c1 = "; 	c1.print();
	cout << "c2 = "; 	c2.print();
	cout << "c3 = "; 	c3.print();


	//--------------------------
	c7=c1.operator-(c4);
	c1=c7.operator-(c2);
	c6 = c2 * c4;

	cout << "c1 = "; 	c1.print();
	cout << "c2 = "; 	c2.print();
	cout << "c4 = "; 	c4.print();
	cout << "c6 = "; 	c6.print();
	cout << "c7 = "; 	c7.print();

	Complex c8;
	Complex c9;
	c9=++c4;
	cout << "c4 = ";  c4.print();
	cout << "c8 = "; c8.print();
	cout << "c9 = "; c9.print();

	Complex c10;
	c10 = c4++; //후위는 인트 매개변수 꼭 달기
	cout << "c4 = ";  c4.print();
	cout << "c10 = "; c10.print();

	Complex c11;
	Complex c12;
	c11 = c2--;
	cout << "c2 = "; c2.print();
	cout << "c11 = "; c11.print();
	c12 =--c2;
	cout << "c2 = "; c2.print();
	cout << "c12 = "; c12.print();


}