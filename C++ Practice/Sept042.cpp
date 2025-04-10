#include<iostream>
using namespace std;

void swap(int a, int b);
void swap_ref(int &a, int &b);
void swap_addr(int *a, int *b);


int main()
{
    int c,d;
    cin >> c >> d;
    //swap(a,b);
    //swap_ref(c,d);
    swap_addr(&c,&d);
    cout << c << " " << d<<endl;
    return 0;
}
void swap(int a, int b)
{
    int temp;
    temp = a;
    a=b;
    b=temp;
    cout << a << " " << b<<endl;
}
void swap_ref(int &a, int &b)
{
    int temp;
    temp = a;
    a=b;
    b=temp;
    //cout << a << " " << b<<endl;
}


void swap_addr(int *a, int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
    //cout << a << " " << b<<endl;
}
