#include<iostream>
#include<fstream>
using namespace std;


int main() {
	int nArray[6] = { 0, };
	ifstream fo_bin("data.bin", ifstream::binary);


	if (!fo_bin) {
		cout << "data.bin  ����" << endl;
		exit(1);
	}

	//fo_bin�� ����Ű�� ������ �迭�� ����
	fo_bin.read((char*)&nArray, sizeof(nArray));

	for (auto&e : nArray)
		cout << e << "\t";

}