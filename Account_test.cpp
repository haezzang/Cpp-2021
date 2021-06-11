#include <iostream>
using namespace std;

class CBank {
private:
    string name;      // 이름   
    string account;      // 계좌번호
    int balance;      // 입금
    static int cnt;      // 배열 방 갯수 세주기 위해

public:
    // 생성자
    CBank() {
        this->name = "";
        this->account = "";
        this->balance = 0;
    }
    CBank(string name, string account, int balance) {
        this->name = name;
        this->account = account;
        this->balance = balance;
        cout << "생성" << endl;
    }

    // 입금되는 금액을 출력하는 함수 작성
    void refer() {
        cout << "예금주 : " << this->name << endl;
        cout << "계좌번호 : " << this->account << endl;
        cout << "잔액 : " << this->balance << endl;
    }

    // 소멸자
    ~CBank() {
        this->balance = -1;
        cout << this->account << "소멸" << endl;
    }

    // 입금
    void deposit() {
        int money;
        cout << "입금금액 : ";
        cin >> money;
        balance += money;

    }

    // 출금
    void withdraw() {
        int money;
        cout << "출금금액 : ";
        cin >> money;
        balance -= money;
    }
    // 계좌생성
    void account_create() {
        string name = "";
        string account_no = "";
        int balance = 0;

        cout << "이름 : ";
        cin >> name;
        cout << "계좌번호 : ";
        cin >> account_no;
        cout << "입금금액 : ";
        cin >> balance;

        this->name = name;
        this->account = account_no;
        this->balance = balance;
        this->refer();
        cnt++;   // 대기
    }

    // 계좌해지
    /*void account_destroy() {
       delete cb;
    }*/

    static int getCnt() {
        return cnt;
    }

    string getAccount() {
        return account;
    }
    int getBalance() {
      return balance;
    }
    string getName() {
        return name;
    }
};

CBank* cb[10];
int CBank::cnt = 0;

int  search() {
    string account_no;
    cout << "계좌번호 : ";
    cin >> account_no;
    for (int i = 0; i < CBank::getCnt(); i++) {
        if (cb[i]!=nullptr) {
            cout << account_no << " " << cb[i]->getAccount() << endl;
            return i;
        }
    }
    return -1;
}

void All_Search() {
    for (int i = 0; i < CBank::getCnt(); i++) {
        if (cb[i]!=nullptr) {
            cout << cb[i]->getName() << "  " << cb[i]->getAccount() << "  " << cb[i]->getBalance() << endl;
        }
    }
}

int main() {
    // DB를 만약 한다면
    // data reading 하는 부분이 있어야한다. 
    while (1) {
        cout << "1. 계좌생성" << endl;
        cout << "2. 입금" << endl;
        cout << "3. 출금" << endl;
        cout << "4. 잔액조회" << endl;
        cout << "5. 계좌해지" << endl;
        cout << "6. 전체 계좌조회" << endl;
        cout << "0. 종료" << endl;

        int menu;
        string account_no;
        CBank* scb;
        int tmp_cnt = 0;

        int se_loc;
        cout << "메뉴 선택 ==> ";
        cin >> menu;

        switch (menu) {
        case 1:
            tmp_cnt = CBank::getCnt();   // 0
            cb[tmp_cnt] = new CBank;
            cb[tmp_cnt]->account_create(); break;

        case 2:
            se_loc = search();
            if (se_loc != -1)cb[se_loc]->deposit();
            else cout<<"계좌번호 오류" << endl;
             break;

        case 3:
        se_loc = search();
        if (se_loc != -1)cb[se_loc]->withdraw();
        else cout << "계좌번호 오류" << endl;
        break;

        case 4:
            se_loc = search();
            if (se_loc != -1)cb[se_loc]->refer();
            else cout << "계좌번호 오류" << endl;
            break;

        case 5:
            se_loc = search();
            if (se_loc != -1) {
                cb[se_loc] = nullptr;
                delete cb[se_loc];
            }
            else cout << "계좌번호 오류" << endl; break;

        case 6:
          All_Search(); break;

        case 0: return 0; break;
        }

        /*CBank cb("강아지", "1111111", 1000);      // 계좌 생성
        cb.print();*/
    }
}