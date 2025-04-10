#include<iostream>
using namespace std;
int main() {
    
    int a,b,c;

    a=5;
    b=5;

    try
    {
        
        if(b==0)
        throw 7.9;
        c=a/b;
        cout<<c;
    }
    catch(double e)
    {
        cout<<"Exception catched\n";
        cout <<e;
    }

    
    return 0;
}