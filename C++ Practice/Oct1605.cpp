//INHERITANCE

#include<iostream>
using namespace std;

class A
{
    private : int a;
    protected : int c;
    public: int b;

    void input1()
    {
        a=10;
        b=20;
        c=30;
    }
};

class B:public A{
    private : int d;
    protected : int f;
    public: int e;

    void input2()
    {
        d=40;
        e=50;
        f=60;
    }
};
class C:private A
{
    private : int x;
    protected : int y;
    public: int z;

    void input3()
    {
        x=0;
        y=1;
        z=2;
        input1();
    }
    void display()
    {
        cout<<x<<" "<<y<<" "<<z<<endl;
        cout<<b<<" "<<c<<endl;
        //cout<<a;
    }
};



int main() {
    C ob1;
    //ob1.input1();
    ob1.input3();
   ob1.display();
    cout<<ob1.z;
    //cout<<ob1.y;

    return 0;
}