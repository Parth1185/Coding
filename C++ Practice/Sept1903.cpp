#include<iostream>
using namespace std;

void display(int ar[][50], int r, int c)
{
        for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    
    int arr [50][50];
    int r,c;
    cout<<"Enter no. of rows and columns : ";
    cin>>r>>c;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"Enter element at arr[" <<i<<"]["<<j<<"] : ";
            cin>>arr[i][j];
        }
    }
    display(arr,r,c);
    return 0;
}