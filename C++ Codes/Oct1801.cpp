#include<iostream>
using namespace std;

class BankAccount
{
    protected:
    float balance;
    public:
    BankAccount (float initialBalance) : balance(initialBalance) {}

    virtual void deposit(float amount) = 0;
    virtual void withdraw(float amount) = 0;
    virtual void getBalance() const = 0;

    virtual ~BankAccount()
    {
        cout<< "BankAccount Destructor Called\n";
    }
};

class SavingsAccount : public BankAccount
{
    float interestRate;
    public:
    SavingsAccount(float initialBalance, float rate) : BankAccount(initialBalance), interestRate(rate) {}

    void deposit(float amount) override
    {
        balance += amount;
        balance += (balance * interestRate);
        cout<< "Deposited " << amount << " to Savings Account.\n Current Balance : " << balance << endl;
    }
    void withdraw(float amount) override
    {
        if(amount>balance)
        cout << "Insufficient funds in Savings Account!!\n";
        else
        {
            balance -= amount;
            cout<< "Withdrew " << amount << " from Savings Account.\n Current Balance : " << balance << endl;    
        }
    }
    float getBalance() const override{
        return balance;
    }
    ~SavingsAccount()
    {
        cout<< "SavingsAccount Destructor Called\n";
    }
};

class CheckingAccount : public BankAccount
{
    float penalty;
    public:
    CheckingAccount(float initialBalance, float penaltyFee) : BankAccount(initialBalance), penalty(penaltyFee) {}

    void deposit(float amount) override
    {
        balance += amount;
        cout<< "Deposited " << amount << " to Checking Account.\n Current Balance : " << balance << endl;
    }
    void withdraw(float amount) override
    {
        if(amount>balance)
        {
            balance -= penalty;
            cout << "Insufficient funds!!\n Penalty of " << penalty << " applied.\n Current Balance : " << balance << endl;
        }
        else
        {
            balance -= amount;
            cout<< "Withdrew " << amount << " from Checking Account.\n Current Balance : " << balance << endl;    
        }
    }

    float getBalance() const override{
        return balance;
    }
    ~CheckingAccount()
    {
        cout<< "CheckingAccount Destructor Called\n";
    }
    
    };


int main() {

    BankAccount *accounts[2];

    accounts[0] = new SavingsAccount(1000.0f, 0.05f);
    accounts[1] = new CheckingAccount(500.0f, 25.0f);

    //polymorphic access to deposit and withdraw methods

    cout << "\n--- Transactions for Savings Account ---\n";
    accounts[0]->deposit(200.0f);
    accounts[0]->withdraw(500.0f);

    cout << "\n--- Transactions for Checking Account ---\n";
    accounts[1]->deposit(100.0f);
    accounts[1]->withdraw(700.0f);

    cout<< "\n Final Balance in Savings Account : " << accounts[0]->getBalance() << endl;
    cout<< "\n Final Balance in Checking Account : " << accounts[1]->getBalance() << endl;

    delete accounts[0];
    delete accounts[1];

    return 0;
}