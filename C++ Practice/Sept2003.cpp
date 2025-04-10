#include<iostream>
using namespace std;

class abc
{
    int x,y;
    public:
    void input()
    {
        cout<<"Enter x and y : ";
        cin>>x>>y;
    }
    void display()
    {
        cout<<x<<" " << y<<endl;
    }
    void operator ++(int t)
    {
        x=x+5;
        y=y+5;
    }
};

int main() {
    abc ob1;
    ob1.input();
    ob1.display();
    ob1++;
    ob1.display();
    return 0;
}