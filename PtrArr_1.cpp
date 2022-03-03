#include<iostream>
using namespace std;

int main(void) {
	short nArray[10] = { 0,1,2,3,4,5,6,7,8,9 };
	short* pArray = nullptr; //0도 가능 NULL 가능
	pArray = nArray;
	cout << nArray[0] << "," << *pArray << endl;
	*pArray = 10;
	cout << nArray[0] << "," << *pArray << endl;

	pArray = &nArray[1];
	cout << nArray[0] << "," << *pArray << endl;
	pArray++;
	cout << nArray[0] << "," << *pArray << endl;

	pArray = nArray;

	cout << *pArray << "," << nArray[0] << endl;
	cout << pArray[0] << "," << *nArray << endl;

	//nArray=pArray 이건 불가 nArray의 주소를 바꿀 수없다
	cout << sizeof(pArray) << endl;
	cout << sizeof(nArray) << endl;
	cout << sizeof(*pArray) << endl;
}