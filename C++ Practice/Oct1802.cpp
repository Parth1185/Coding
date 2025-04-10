#include<iostream>
using namespace std;

class Base{
    int x,y;
    public:
    Base()
    {
        x=y=0;
    }
    Base(int a, int b)
    {
        this->x=a;
        y=b;
    }
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }

    void hello()
    {
        cout<<"hello\n";
    }

    virtual void bye()
    {
        cout<<"bye base class\n";
    }

    virtual void bye2()=0;

    
};

class Derived:public Base{
    int c,d;
    public:
    Derived()
    {
        c=1;
        d=2;
    }
    Derived(int m, int n)
    {
        c=m;
        d=n;
    }
    void display1()
    {
        cout<<c<<" "<<d<<endl;
    }

    void bye()
    {
        cout<<"bye derived class\n";
    }

    
};
int main() {

    Base b(10,20);
    Base *p;
    Derived d;

    d.display1();
    d.display();

    p =&b;
    p->hello();

    p = &d;
    p->hello();
    p->bye();

    p->display1();

    
    return 0;
}