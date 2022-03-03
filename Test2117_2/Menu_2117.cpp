//2117 조해정
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
		cout <<count<<"번째 원 생성" << endl;
	}
	void print() {
		const double PI = 3.141592;
		double area = PI * getR() * getR();
		cout << "점의 좌표(" << p.getX() << ", " << p.getY() << ")와 반지름  " << getR() << "인 원의 넓이 : " << area << endl;
	}
	void setData(Point& p, int r) {
		this->p = p;
		this->r = r;

	}
	~Circle() {
		cout << count << "번째 원 소멸" << endl;
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
		cout << count << "번째 선 생성" << endl;
	}
	void setData(Point& p1, Point& p2, char* pname)  {
		this->p1 = p1;
		this->p2 = p2;
		name = new char[strlen(pname) + 1];
		strcpy(name, pname);
	}
	~Line() {
		cout << count << "번째 선 소멸" << endl;
		count--;
	}
	void print() {
		double Xline = pow((p2.getX() - p1.getX()), 2);
		double Yline = pow((p2.getY() - p1.getY()), 2);
		cout << "점 (" << p1.getX() << ", " << p1.getY() << ") 와 점(" << p2.getX() << ", " << p2.getY() << ")를 잇는 " << name << "의 길이 : " << sqrt(Xline + Yline) << endl;
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
			cout << "1. 원의 넓이 구하기" << endl;
			cout << "2. 선 그리기" << endl;
			cout << "0. 종료" << endl;
			cout << "메뉴 선택 == >";
			cin >> chk;
			cout << endl;
			switch (chk)
			{
			case 1: cout << "원의 갯수를 입력 하세요 : "; cin >> num; break;
			case 2: cout << "선의 갯수를 입력 하세요 : "; cin >> num; break;
			case 0: return 0; break;
			default: cout << "메뉴를 다시 선택 하세요."<<endl; break;
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
					cout << "선의 이름을 입력하세요. : ";
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