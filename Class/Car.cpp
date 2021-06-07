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

 int Car::count = 0; //�ۿ��� �ʱⰪ �� ���� ���� �Ұ� Ŭ���� �ȿ����� �����ϴ�

int main() {
		cout << "������ �ڵ��� �� : " << Car::count << endl;
		Car car1;
		cout << "������ �ڵ��� �� : " << car1.getCount()<< endl;
		Car car2(10,3000);
		cout << "������ �ڵ��� �� : " << car2.count << endl;
		return 0;
}