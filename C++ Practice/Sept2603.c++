#include<iostream>
using namespace std;

int main() {
    int arr[][3]={{1,4,5},{3,2,6},{8,7,9}};
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<&arr[i][j]<<" ";
        }
        cout<<endl;
    }
        cout<<endl;

    // cout<<arr[2]<<endl;

    // cout<<(arr[1]+1)<<endl;//0x61fef4
    // cout<<*(arr[0]+2)<<endl;//5
    // cout<<*(*(arr+1)+1)<<endl;

for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        // cout<<**(arr+i)<<"\t";
        // cout<<arr[i][j]<<"\t";
        cout<<*(*(arr+i)+j)<<"\t";
    }
    cout<<endl;
}

    return 0;
}