#include<iostream>
using namespace std;

class Time
{
    int hrs, min;
    public:
    Time()
    {
        
    }
    Time(int t)
    {
        cout<<"Welcome\n";
    }

    Time(double t)
    {
        cout<<"Welcome1\n";
    }
};

int main() {
    Time t1;
    int a = 5;
    double b=34.1;
    t1 = a;  
    t1=b;
    decltype(t1);

    return 0;
}