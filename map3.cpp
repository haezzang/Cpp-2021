#include<iostream>
#include<map>
#include<vector>
using namespace std;


int main() {
	map<int, string> employees;

		employees[5234] = "Mike C";
		employees[3374] = "Chalie M";
		employees[1923] = "Daivd D";
		employees[7582] = "John A";
		employees[5328] = "Peter Q";

		cout << employees[3374]<<endl;
		cout << employees.size()<<endl;

		map<int, string>::iterator ni;
		for (ni = employees.begin(); ni!=employees.end(); ni++)
			cout << (*ni).first<<" "<<(*ni).second << endl;

		for (map<int, string>::reverse_iterator ni = employees.rbegin(); ni != employees.rend(); ni++)
			cout << (*ni).first << " " << ni->second << endl;

	
	
}























