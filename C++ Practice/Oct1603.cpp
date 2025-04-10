#include<iostream>
using namespace std;

class Time{
    int hours;
    public:
    operator double ()
    {
        cout<<"Class to Basic: "<<hours;

    }
    Time()
    {
        hours = 20;
    }
    Time(int t)
    {hours = t;}
};

int main() {
    
    Time t1;
    double a=t1;

    return 0;
}