#include<iostream>
using namespace std;

inline void disp(int a,int b)
{
    cout<<"Hello 1 : "<<a<<" "<<b<<endl;
}

void disp(int a,double b)
{
    cout<<"Hello 2 : " << a<<" "<<b<<endl;
}

int main() {
    disp(5,6);
    disp(2,7.2);
    disp(7.2,2);
    disp(7.6,2.6);
    disp('c',23);
    disp(true,3);
    return 0;
}

