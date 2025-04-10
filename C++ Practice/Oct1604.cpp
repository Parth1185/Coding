#include<iostream>
using namespace std;

class def;

class abc
{
    int a;
    public:

    abc ()
    {
        a=5;
    }
    abc(def &ob)
    {
        cout<<"def is converted to abc object\n";
    }

    
};

class def
{
    int d;
    public:
    // def ()
    // {
    //     d = 10;
    // }

    // operator abc ()
    // {
    //     cout<<"dfdff\n";   
    // }
};
int main() {
    
    abc a1;
    def d1;

    a1=d1;

    return 0;
}