#include<iostream>
#include<vector>
#include<string>

using namespace std;





int main(void) {
	//srand(time(NULL));
	int rn;

	for (int k = 0; k < 100; k++) {
		vector<int> v;
		for (int i = 0; i < 6; i++) {
			rn = rand() % 46 + 1;
			v.push_back(rn);
			for (int j = 0; j < i; j++) {
				if (v[i] == v[j]) {
					v.pop_back(); i--; break;
				}
			}
		}

		vector<int>::iterator ptr;
		for (auto& ptr : v) {
			cout << ptr << " ";
		}
		cout << endl;
	
	}




}



