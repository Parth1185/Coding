#include<iostream>
using namespace std;

void input(int *arr, int n)
{
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

void display(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
}

void insert_sort(int *arr, int n)
{
    int key;
    for(int i=1;i<n;i++)
    {
        key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    
    int *ar, n;
    cout<<"Enter number of elements : ";
    cin >> n;
    ar = new int[n];

    input(ar,n);
    // display(ar,n);

    insert_sort(ar,n);
    display(ar,n);
    return 0;
}
