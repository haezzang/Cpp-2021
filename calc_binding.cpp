#include<iostream>
using namespace std;


int add(int x, int y) {
	return x + y;
}

int sub(int x, int y) {
	return x - y;
}

int mul(int x, int y) {
	return x * y;
}

int main() {
	int x, y;
	cin >> x;
	cin >> y;

	cout << "1: add, 2: sub, 3:mul" << endl;
	int op;
	cin >> op;


	//정적바인딩
	//int result;
	//switch (op)
	//{
	//case 1: result=add(x, y); break;
	//case 2: result=sub(x, y); break;
	//case 3: result=mul(x, y); break;
	//}
	//cout << result << endl;

	//동적바인딩
	int (*func_ptr)(int, int) = nullptr;
	switch (op)
	{
	case 1: func_ptr = add; break;
	case 2: func_ptr = sub; break;
	case 3: func_ptr = mul; break;
	}
	cout << func_ptr(x,y) << endl;
}
