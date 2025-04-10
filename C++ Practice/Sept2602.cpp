#include<iostream>
using namespace std;

int main() {
    int a=89;
    int *p;
    p=&a;
    int **q;
    q=&p;   

    cout<<a<<" "<<&a<<endl;
    cout<<p<<" "<<&p<<" "<<*p<<endl;
    cout<<q<<" "<<&q<<" "<<*q<<" "<<**q<<endl;
    
    return 0;
}