#include<iostream>
using namespace std;

class CONTAC600 {
public:
	void SnotTake(int id) {
		cout << id << " �๰ ����" << endl;
	}
	void SneezTake(int id) {
		cout << id << " ��ä�� �ܱ�" << endl;
	}
	void SnuffleTake(int id) {
		cout << id << " �� �ձ�" << endl;
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

