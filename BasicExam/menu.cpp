#include<iostream>
using namespace std;

int main(void) { 
	int menu_select;
	cout << "메뉴를 선택하세요." << endl;
	cout << "1.피자" << endl;
	cout << "2.치킨" << endl;
	cout << "3.족발" << endl<<endl;

	cin >> menu_select;

	switch (menu_select) {
	case 1:cout << "1번 피자가 주문 되었습니다." << endl; break;

	case 2:cout << "2번 치킨가 주문 되었습니다." << endl; break;

	case 3:cout << "3번 족발가 주문 되었습니다." << endl; break;

	default: cout << "잘못된 주문입니다." << endl; 
	}
	
}