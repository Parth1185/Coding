#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

class Account{

    private:
    char name[50];
    int account_no;
    double balance;

    public:
    Account() {
        cout<<"\n Default constructor called.";
        strcpy(name, "Amit Gupta");
        account_no = 33445566;
        balance  = 3500.3;

    }
    void setData(Account&);
    friend void tdsCalculate(Account);
};

void Account:: setData(Account& ac) {
        strcpy(ac.name, "Chris Srikant");
        ac.account_no = 778899;
        ac.balance  = 500.3;
}

void tdsCalculate(Account acc) {
    cout<<"\n For Account="<<acc.account_no<<", TDS is ="<<acc.balance*0.1;
}

int main() {
    Account a1, a2;
    tdsCalculate(a1);
    a2.setData(a2);

    tdsCalculate(a2);


}
