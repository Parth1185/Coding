#include<iostream>
using namespace std;

class mno;
class abc
{
    int x;
    public:
    void setval(int m)
    {
        x=m;
    }
    friend void max(abc, mno);
};

class mno{
    int y=20;
    public:
    void setval(int n){
        y=n;
    }
    friend void max(abc, mno);
};

void max(abc ob1, mno ob2)
{
    if(ob1.x> ob2.y)
    {
        cout << ob1.x << endl;
    }
    else
    cout << ob2.y<<endl;
}



int main() {
    abc ob1;
    mno ob2;
     ob1.setval(8);
     ob2.setval(10);
     max(ob1, ob2);
    return 0;
}