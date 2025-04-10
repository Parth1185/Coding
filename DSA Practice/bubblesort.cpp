        // // BUBBLE SORTING
// //INTEGER
#include<iostream>
using namespace std;

void input(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        cout <<"Enter element "<<i+1 << " : ";
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

void bubblesort(int *arr, int n)
{
    for(int i=0; i<n-1;i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            display(arr,n);
            
        }
        //display(arr,n);
        cout<<endl;
    }
    cout<<endl;
}
int main() {
    
    int *ar, n;
    cout<<"Enter number of elements : ";
    cin >> n;
    ar = new int[n];

    input(ar,n);
    display(ar,n);

    bubblesort(ar,n);
    display(ar,n);
    return 0;
}
