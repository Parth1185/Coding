#include<iostream>
using namespace std;

void divide(int a, int b)
{
    //cout<<"Function\n";

    if(b==0)
    throw 10;
else if (b<0)
throw 0;
else if (b==2)
throw "hello";
else if(b==10)
throw 'h';
else
cout<<"division: "<<a/b<<endl;

}
int main() {
    
    int a,b,c;

    try
    {
        divide(12, 3);
        divide(12, 0);
        divide(12, 2);
        divide(12,-5);
        divide(12,10);
    }
    catch(int e)
    {
        cout<<"Int exception : "<<e<<endl;
    }
    catch(double e)
    {
        cout<<"Double exception: "<<e<<endl;
    }
    catch(const char *p)
    {
        cout<<"String exception: "<<p<<endl;
    }
    catch(...)
    {
        cout<<"all exception handeled\n";
    }
    
    return 0;
}