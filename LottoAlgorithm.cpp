#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;




vector<int> lotto(int range, int sel) {

	//srand(time(NULL));
	vector<int> v;

	for (int i = 1; i <=range; i++) {
		v.push_back(i);	
	}

	random_shuffle(v.begin(),v.end());

	v.resize(sel);
	sort(v.begin(),v.end());


	return v;
	}

int main(void) {

	vector<int> v= lotto(46, 6);
	vector<int>::iterator ptr;
	for (auto& ptr : v) {
		cout << ptr << " ";
	}

	}

	

