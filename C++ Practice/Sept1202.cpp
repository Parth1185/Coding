#include<iostream>
using namespace std;

void display(int *p, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<i[p]<<" " << p[i] << " " << (p+i) << " " << p+i << " " <<(*p)+i << " " << *(p+i)<<" "<<*p+i<<endl;
    }
}

int main() {
    int *p;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    // p = new int (5);
    p = new int [n];

for(int i=0;i<n;i++)
    {
        cout<<"Enter data: ";
        cin>>p[i];
    }

    cout<<p<<" "<<*p<<" "<<&p<<endl;
    cout<<p+1<<" "<<*(p+1)<<" "<<&p+1<<endl;
//    display(p,n);
    
    //p  is a pointer variable that stores address of same data type, it itself gets another memory

    return 0;
}