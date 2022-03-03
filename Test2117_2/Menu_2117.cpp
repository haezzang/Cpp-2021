//2117 ������
#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<time.h>

using namespace std;


class Point {
	int x;
	int y;

public:
	Point() {
	}
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	Point(Point& p) {
		x = p.x;
		y = p.y;
	}
	int getX() { return x; }
	int getY() { return y; }
};

class Circle {
	Point p;
	int r;
public:
	static int count;
	int getR() { return r; }
	 Circle() {
		 count++;
		cout <<count<<"��° �� ����" << endl;
	}
	void print() {
		const double PI = 3.141592;
		double area = PI * getR() * getR();
		cout << "���� ��ǥ(" << p.getX() << ", " << p.getY() << ")�� ������  " << getR() << "�� ���� ���� : " << area << endl;
	}
	void setData(Point& p, int r) {
		this->p = p;
		this->r = r;

	}
	~Circle() {
		cout << count << "��° �� �Ҹ�" << endl;
		count--;
	}
};

class Line {
	Point p1;
	Point p2;
	char* name;
public:
	static int count;


	Line() {
		count++;
		cout << count << "��° �� ����" << endl;
	}
	void setData(Point& p1, Point& p2, char* pname)  {
		this->p1 = p1;
		this->p2 = p2;
		name = new char[strlen(pname) + 1];
		strcpy(name, pname);
	}
	~Line() {
		cout << count << "��° �� �Ҹ�" << endl;
		count--;
	}
	void print() {
		double Xline = pow((p2.getX() - p1.getX()), 2);
		double Yline = pow((p2.getY() - p1.getY()), 2);
		cout << "�� (" << p1.getX() << ", " << p1.getY() << ") �� ��(" << p2.getX() << ", " << p2.getY() << ")�� �մ� " << name << "�� ���� : " << sqrt(Xline + Yline) << endl;
	}
};

int Circle::count = 0;
int Line::count = 0;

int main() {
	srand((unsigned)time(0));
	int chk;
	int num;
	while (true) {
		while (true) {
			cout << "==========" << endl;
			cout << "==SELECT==" << endl;
			cout << "==========" << endl;
			cout << "1. ���� ���� ���ϱ�" << endl;
			cout << "2. �� �׸���" << endl;
			cout << "0. ����" << endl;
			cout << "�޴� ���� == >";
			cin >> chk;
			cout << endl;
			switch (chk)
			{
			case 1: cout << "���� ������ �Է� �ϼ��� : "; cin >> num; break;
			case 2: cout << "���� ������ �Է� �ϼ��� : "; cin >> num; break;
			case 0: return 0; break;
			default: cout << "�޴��� �ٽ� ���� �ϼ���."<<endl; break;
			}
			if (chk == 1) {
				Circle* cir = new Circle[num];
				for (int i = 0; i < num; i++) {
					int x = rand() % 101;
					int y = rand() % 101;
					Point p(x, y);
					int r = rand() % 10 + 1;
					cir[i].setData(p, r);
				}
				for (int i = 0; i < num; i++) {
					cir[i].print();

				}
				delete[] cir;

			}
			if (chk == 2) {
				Line* line = new Line[num];
				for (int i = 0; i < num; i++) {
					int x = rand() % 61 - 30;
					int y = rand() % 61 - 30;
					Point p1(x, y);
					x = rand() % 61 - 30;
					y = rand() % 61 - 30;
					Point p2(x, y);
					char name[11];
					cout << "���� �̸��� �Է��ϼ���. : ";
					cin >> name;
					line[i].setData(p1, p2, name);
				}
				for (int i = 0; i < num; i++) {
					line[i].print();

				}
				delete[] line;

			}
			else break;
			cout << endl << endl << endl << endl;
		}

	}




}