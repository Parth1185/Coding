#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    int sum=(n*(n+1))/2;
    int add=0;
    for(int i=0;i<n-1;i++){
        add+=a[i];
    }
    int missing=sum-add;
    cout<<missing;
    
}