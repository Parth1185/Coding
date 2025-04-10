#include<iostream>
using namespace std;

void input(int arr[][50], int r, int c)
{
    for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        cout<<"Enter element arr ["<<i<<"]["<<j<<"] : ";
        cin>>arr[i][j];
    }
}
}

void display(int arr[][50], int r, int c)
{
    for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {cout<<arr[i][j];
    }
}
cout<<endl;
}

void ldiagonal(int arr[][50], int r, int c)
{
    for(int i=0;i<r;i++)
    {
        cout<<arr[i][i]<<" ";
    }
    cout<<endl;
}
void rdiagonal(int arr[][50],int r, int c)
{
    // for(int i=0, j=c-1; i<r;i++,j-- )
    // {
    //     cout<<arr[i][j]<<" ";
    // }

    for(int i=0;i<r;i++)
    {
        cout<<arr[i][c-i-1]<<" ";
    }
}
int main() {
    int arr[50][50], r,c;
    cout<<"Enter no. of rows & columns : ";
    cin>>r>>c;
    input(arr,r,c);
    ldiagonal(arr,r,c);
    rdiagonal(arr,r,c);
    return 0;
}