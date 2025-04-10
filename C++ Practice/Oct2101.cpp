#include<iostream>
using namespace std;

class abc
{
    public:
    virtual void display()
    {
        cout<<"abc class \n";
    }
};

class def: public abc
{
    public:
     void display()
    {
        cout<<"def class\n";
    }
};
int main() {

    def ob1;
    ob1.display();
    // ob1.display1();

    abc *p;
    p=&ob1;

    p->display();
    
    return 0;
}