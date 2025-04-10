#include<iostream>
using namespace std;

int main()
{
    int a=23;
    int b=a;

    int &c=a; //reference

    int *d = &a; //address

    b=b+3;
    c=c+5;
    

    cout<<a<<" "<<b<<" "<<c<<" "<<*d <<endl;

}

