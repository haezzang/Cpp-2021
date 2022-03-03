#include<iostream>
#include<map>
#include<vector>
using namespace std;


int main() {
	map<string, int> employees;

	employees["Mike C"] = 5234;
	employees["Chalie M"] = 3374;
		
	employees.insert(pair<string, int>("David",1923));
	employees.insert(map<string, int>::value_type("John A",7582));
	employees.insert(make_pair("Peter Q", 5328));


	map<string, int>::iterator ni;
	for (ni = employees.begin(); ni != employees.end(); ni++)
		cout << (*ni).first << " " << (*ni).second << endl;

	for (map<string, int>::reverse_iterator ni = employees.rbegin(); ni != employees.rend(); ni++)
		cout << (*ni).first << " " << ni->second << endl;



}























