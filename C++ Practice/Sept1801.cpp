#include<iostream>
using namespace std;

void input(int *arr, int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<"Enter element " << i+1 << " : ";
        cin>>*(arr+i);
    }
}

void display(int *arr, int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<< i[arr]<< " ";
    }
    cout<<endl;
}

int search(int *arr, int n, int e)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==e)
        {
            return i;
        }
    }
    return -1;
}

void countkey_1( int *arr, int n, int e, int &count)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==e)
        {
            count++;
            cout<<"Element found at : " << i<<endl;
        }
    }
}
int countkey_2( int *arr, int n, int e)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==e)
        {
            count++;
            cout<<"Element found at : " << i<<endl;
        }
    }
    return count;
}


int main() {
    
    int *arr, n, key;
    cout<<"Enter size of array : ";
    cin >> n;
    arr = new int[n];
    input(arr,n);
    display(arr,n);
    cout<<"Enter Element to search : ";
    cin>>key;
    
    // int k = search(arr,n,key);
    // if(k!=-1)
    // cout<<"Element found at index : " << k;
    // else
    // cout<<"Element not found";

    // int count = 0;
    // countkey_1(arr,n,key,count);
    // cout<<"count of "<<key<<" is: "<<count<<"\n";

    int k;
    k = countkey_2(arr,n,key);
    cout<<"count of "<<key<<" is: "<<k<<"\n";

    return 0;
}