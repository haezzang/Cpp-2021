#include <iostream>
using namespace std;

class Shape {
protected:
    int x, y, width, height;
public:
    Shape() : x(0), y(0), width(0), height(0) { cout << "���� ������" << endl; }
    Shape(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) { cout << "�Ű����� ���� ������" << endl; }
    virtual ~Shape() { cout << "�����Ҹ���" << endl << endl; }
    //virtual ����ȯ�� �����ش�
   virtual void draw() { cout << "������ �׸��ϴ�.\n"; cout << "���� ��ǥ : " << x << "," << y << "  width : " << width << ", height : " << height << endl; }
};

class Retangle : public Shape {
    int k;
public:
    Retangle() { cout << "�簢�� ������" << endl; k = 0; }
    Retangle(int x, int y, int width, int height) : Shape(x, y, width, height) { cout << "�Ű����� �簢�� ������" << endl; }
    ~Retangle() { cout << "�簢���Ҹ���" << endl; }

    void draw() {
        cout << "�簢���� �׸��ϴ�.\n"; cout << "���� ��ǥ : " << x << "," << y << "  width : " << width << ", height : " << height << endl;
        cout << k << endl;
    }
            
};

class Elipse : public Shape {
public:
    Elipse() { cout << "Ÿ�� ������" << endl; }
    Elipse(int x, int y, int width, int height) : Shape(x, y, width, height) { cout << "�Ű����� Ÿ�� ������" << endl; }
    ~Elipse() { cout << "Ÿ���Ҹ���" << endl; }

    void draw() { cout << "Ÿ���� �׸��ϴ�.\n"; cout << "���� ��ǥ : " << x << "," << y << "  width : " << width << ", height : " << height << endl; }
};

class Triangle : public Shape {
public:
    Triangle() { cout << "�ﰢ�� ������" << endl; }
    Triangle(int x, int y, int width, int height) : Shape(x, y, width, height) { cout << "�Ű����� �ﰢ�� ������" << endl; }
    ~Triangle() { cout << "�ﰢ���Ҹ���" << endl; }

    void draw() { cout << "�ﰢ���� �׸��ϴ�.\n"; cout << "���� ��ǥ : " << x << "," << y << "  width : " << width << ", height : " << height << endl; }
};

// �����Ҵ�
/*int main() {

   Retangle* r1 = new Retangle();
   Retangle* r2 = new Retangle(1, 2, 3, 4);
   r1->draw();
   delete r1;
   r2->draw();
   delete r2;

   Elipse* e1 = new Elipse();
   Elipse* e2 = new Elipse(4, 3, 2, 1);
   e1->draw();
   delete e1;
   e2->draw();
   delete e2;

   Triangle* t1 = new Triangle();
   Triangle* t2 = new Triangle(5, 6, 7, 8);
   t1->draw();
   delete t1;
   t2->draw();
   delete t2;
}*/

// �����Ҵ�
/*int main() {

   Retangle r1;
   Retangle r2(1, 2, 3, 4);
   r1.draw();
   r2.draw();

   Elipse e1;
   Elipse e2(4, 3, 2, 1);
   e1.draw();
   e2.draw();
   Triangle t1;
   Triangle t2(5, 6, 7, 8);
   t1.draw();
   t2.draw();
}*/

int main() {

    Retangle* rect = 0;
    rect = new Retangle();
    ((Shape*)rect)->draw();      // rect�� Shape�� ����ȯ �ϰڴٴ� �Ҹ���
    delete rect;

    Shape* shape = 0;
    shape = new Shape();
    ((Retangle*)shape)->draw();
    delete shape;

    //Retangle* rs1 = new Shape(); //shape;
    //delete rs1;

    Shape* rs2[6];
    rs2[0]= new Retangle();
    rs2[1] = new Retangle();
    rs2[2] = new Retangle();
    rs2[3] = new Retangle();
    rs2[4] = new Retangle();
    rs2[5] = new Retangle();

    for (int i = 0; i < 6; i++) {
        rs2[i]->draw();
    }

    for (int i = 0; i < 6; i++) {
       delete rs2[i];
    }
}