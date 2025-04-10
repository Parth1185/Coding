// //STATIC DATA MEMBER AND DATA FUNCTION
#include <iostream>
using namespace std;

/* class Student {
public:
    // Static Data Member
    static int totalStudents;

    // Constructor
    Student() {
        totalStudents++;
    }

    // Static member function
    static int getTotalStudents() {
        return totalStudents;
    }
};

// Initialize the static data member
int Student::totalStudents = 0;

int main() {
    // Create student objects
    Student s1;
    cout << s1.getTotalStudents() << "\n";
    Student s2;
    cout << s2.getTotalStudents() << "\n";
    Student s3;
    cout << s3.getTotalStudents() << "\n";

    // Access static member function
    cout << "Total Students: " << Student::getTotalStudents() << endl;
    cout << s1.getTotalStudents() << "\n";
    cout << s2.getTotalStudents() << "\n";
    cout << s3.getTotalStudents() << "\n";

    return 0;
}   


class BankAc
{
    private:
    double balance;
    static double totalBal;

    public:
    BankAc(double initialBal)
    {
        balance=initialBal;
        totalBal += balance;
    }
    void deposit(double amt)
    {
        balance +=amt;
        totalBal += amt;
    }
    void withdraw(double amt)
    {
        if(amt<=balance)
        {
            balance-=amt;
            totalBal-=amt;
        }
        else
        {
            cout << "Insufficient Balance!!" << endl;
        }
    }

    double getBal()
    {
        return balance;
    }
    static double getTotalBalance()
    {
        return totalBal;
    }
};
// INITIALISE THE STATIC DATA MEMBER
double BankAc::totalBal = 0.0;

int main()
{
    BankAc ac1(100.0);
    BankAc ac2(200.0);

    cout << "A/c 1 Balance : Rs. " << ac1.getBal() << endl;
    cout << "A/c 2 Balance : Rs. " << ac2.getBal() << endl;
    cout << "Total Balance of all Accounts : Rs. " << BankAc::getTotalBalance() << endl;
    
    ac1.deposit(50.0);
    ac2.withdraw(30.0);

    cout << "A/c 1 Balance : Rs. " << ac1.getBal() << endl;
    cout << "A/c 2 Balance : Rs. " << ac2.getBal() << endl;
    cout << "Total Balance of all Accounts : Rs. " << BankAc::getTotalBalance() << endl;

    return 0;
}*/