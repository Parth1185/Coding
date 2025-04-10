#include<iostream>
using namespace std;

class abc{
    int x,y;
    public:
    void input()
    {
        cout<<"Enter x and y : ";
        cin>>x>>y;
    }
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
    friend void operator --(abc &); 
    // friend abc operator--(abc ,int);

};

void operator --(abc &ob)
{
    cout<<"-- overloaded using void.\n";
    ob.x=ob.x-1;
    ob.y-=3;
}

// abc operator --(abc ob,int x)
// {
//     cout<<"-- overloaded using return \n";
//     abc temp;
//     temp.x = ob.x-1;
//     temp.y=ob.y-3;
//     return temp;
// }

int main() {
    abc ob1,ob2;
    ob1.input();
    ob1.display();
    --ob1;
    ob1.display();
    // ob2=ob1--;
    // ob2.display();
    return 0;
}