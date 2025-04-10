#include<iostream>
using namespace std;

class swp{
    public :
    void Swap1(int , int );
    void Swap3 (int *, int *);
    void Swap2(int & , int & );
};

void swp::Swap1(int a ,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
//address
void swp::Swap1(int *a, int *b)
{
    int temp;
    temp  =*a;
    *a = *b ;
    *b = temp;
}
//reference
void swp:: Swap2(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a,b;
    cin>> a >> b;

    swp ob;
    cout<<"Before: "<<a<<" "<<b<<endl;
    ob.Swap1(a,b);
    cout<<"After "<<a<<" "<<b<<endl;


    return 0;    
}