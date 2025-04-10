#include<iostream>
using namespace std;

void input(int arr[100], int n)
{
    cout<<"Enter Elements : ";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

void display(int arr[100], int n)
{
    for (int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void ssort(int arr[100], int n)
{
    for (int i = 0; i < n ; i++) 
    {
        int min_ind = i;  
        for (int j = i+1; j < n; j++)  
        {
            if (arr[j] < arr[min_ind])
            {
                min_ind = j;  
            }
        }        
                                    
        int temp = arr[i];
        arr[i] = arr[min_ind];
        arr[min_ind] = temp;

    }
}
|


int main()
{
    int arr[100],n;
    cin>>n;
    input(arr,n);
    ssort(arr,n);
    display(arr,n);
    return 0;
}