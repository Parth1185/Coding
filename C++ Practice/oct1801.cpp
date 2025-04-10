#include<iostream>
using namespace std;

class Hello
{
    int x,y;
    public:
    Hello()
    {
        x=0;
        y=0;
    }
    Hello(int a, int b)
    {
        x=a;
        y=b;
    }

    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};
int main() {
    Hello ob1;
    Hello ob2(5,6);

    Hello *p;
    p = &ob1;

    //ob1.display();
    p->display();

    p=&ob2;
    p->display();

    (*p).display();

    Hello *p1 =new Hello(50,60);
    p1->display();
    (*p1).display();

    return 0;
}