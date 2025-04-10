#include<iostream>
using namespace std;

int length(char *name)
{
    int i;
    for(i=0;name[i]!='\0';i++);
    cout<<"Length is: "<<i<<endl;
}

int main() {
    char *name;
    int n;

    cout<<"Enter number of characters : ";
    cin>>n;
    name = new char[n];
    cin.ignore();
    // gets(name);
cin.getline(name,n+1);
    cout<<name;

    length(name);
    return 0;
}