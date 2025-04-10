#include<iostream>
using namespace std;

class x
{
    int number;
    public:
    void fun1();
    friend class  y;
};

void x::fun1()
{
    number = 5;
    n2=45;
    cout<<number<<" "<<n2<<endl;
}

class y
{
    int n2;
    public:
    friend void x::fun1();

};

int main() {
    
    x ob1;
    y ob2;
    ob1.fun1();
    return 0;
}