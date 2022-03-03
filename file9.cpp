#include<iostream>
#include<fstream>
using namespace std;


int main() {
	int nArray[6] = { 0, };
	ifstream fo_bin("data.bin", ifstream::binary);


	if (!fo_bin) {
		cout << "data.bin  에러" << endl;
		exit(1);
	}

	//fo_bin이 가리키는 내용을 배열에 저장
	fo_bin.read((char*)&nArray, sizeof(nArray));

	for (auto&e : nArray)
		cout << e << "\t";

}