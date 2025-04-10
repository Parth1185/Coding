#include<iostream>

using namespace std;

void divide(int a, int b)
{
    cout<<"Function\n";

    if(b==0)
    throw a;
else
cout<<"division: "<<a/b<<endl;

}
int main() {
    
    int a,b,c;

    try
    {
        divide(12,3);
        divide(12,0);
    }
    catch(int e)
    {
        cout<<"EXCEPTION : "<<e<<endl;
    }
    
    return 0;
}