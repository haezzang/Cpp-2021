#include<iostream>
using namespace std;

int main(void) {
	short nArray[10] = { 0,1,2,3,4,5,6,7,8,9 };
	short* pArray = nullptr;
	pArray = nArray;
	cout << *pArray << ", " << nArray[0] << endl;
	*pArray = 10; //nArray 10À¸·Î ¹Ù²ñ
	cout << *pArray << ", " << nArray[0] << endl;
	pArray = &nArray[1];
	cout << *pArray << ", " << nArray[1] << endl;
	cout << sizeof(pArray) << endl;
	cout << pArray << endl;
	cout << pArray+1 << endl;
	cout << sizeof(*pArray) << endl;; 
	cout << sizeof(nArray) << endl; 
	pArray += 2;//
	/*int count = sizeof(nArray) / sizeof(int);

	for(int i = 0; i<count; i++) {
		cout << i <<" : "<<nArray[i]<<endl ;
		
	}
	cout << sizeof(nArray) << endl;*/
}
