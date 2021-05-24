#include<iostream>
using namespace std;

class CONTAC600 {
public:
	void SnotTake(int id) {
		cout << id << " Äà¹° ³´±â" << endl;
	}
	void SneezTake(int id) {
		cout << id << " ÀçÃ¤±â ¸Ü±â" << endl;
	}
	void SnuffleTake(int id) {
		cout << id << " ÄÚ ¶Õ±â" << endl;
	}
	void take(int id) {
		SnotTake(id);
		SneezTake(id);
		SnuffleTake(id);
	}
};

class Patient {
public :int id;
public: void takeCANTA600(CONTAC600 cap) { cap.take(id); }

};
int main() {
	Patient suf = { 1001 };
	suf.takeCANTA600(CONTAC600());
}

