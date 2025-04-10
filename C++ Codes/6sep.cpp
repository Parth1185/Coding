// #include<iostream>
//INHERITANCE
#include<bits/stdc++.h>
using namespace std;
//constructor of base and constructor of child
class A     //base class
{
    public:
    A()
    {
        cout <<"A\n";
    }
};

class B : public A      //derived class
{
    public:
    B()
    {
        cout<<"B\n";
    }
};

class C : public B     //derived class
{
    public:
    C()
    {
        cout<<"C\n";
    }
};

int main() {
    C obj;
    
    return 0;
}

