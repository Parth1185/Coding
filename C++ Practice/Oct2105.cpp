#include<iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout<<"A"<<endl;
    }
};

class B : public A
{
    public:
    B()
    {
        cout<<"B"<<endl;
    }
};
int main() {

    B ob1;

    try
    {
        throw ob1;
    }  
    catch (A ob2)
    {
        cout<<"Base Class"<<endl;
    }

    catch (B ob2)
    {
        cout<<"Derived  Class"<<endl;
    }
    return 0;
}