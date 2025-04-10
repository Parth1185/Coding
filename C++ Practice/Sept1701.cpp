#include<iostream>
using namespace std;

void display(int p[], int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<p[i]<<endl;
    }
}
int main() {
    int *p;
    int n;
    cin>>n;
    p=new int[n];

    for(int i=0; i<n;i++)    
    {
        cout<<"Enter element " << i+1 << " : ";
        cin >> p[i];
    }
    display(p,n);

    delete []p;
    return 0;
}

