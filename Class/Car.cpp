#include<iostream>
using namespace std;

class Car {
int ton, price;

protected: static int count;
public :
	Car() {
		ton = 0; price = 1000; count++;
	}
	Car(int ton, int price) {
		this->ton = ton; this->price = price; count++;
	}

	static int getCount() {
		return count;
	}
	~Car() {
		count--;
		cout <<count << endl;
	}
};

 int Car::count = 0; //밖에서 초기값 줄 때는 선언 불가 클래스 안에서만 가능하다

int main() {
		cout << "생성된 자동차 수 : " << Car::count << endl;
		Car car1;
		cout << "생성된 자동차 수 : " << car1.getCount()<< endl;
		Car car2(10,3000);
		cout << "생성된 자동차 수 : " << car2.count << endl;
		return 0;
}