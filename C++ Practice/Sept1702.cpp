#include<iostream>
using namespace std;

void input(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>*(arr+i);
    }
}

void display(int p[], int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<*(p+i)<<" ";
    }
    cout<<endl;
}

int smallest (int *arr, int n)
{
    int min = arr[0];
    int min_index=0;

    for(int i = 0; i<n;i++)
    {
        if(arr[i]<min)
        {
            min=*(arr+i);
            min_index=i;
        }
    }
    return min_index;
}

int largest (int *arr, int n)
{
    int max = arr[0];
    int max_index = 0;
    for(int i = 0; i<n;i++)
    {
        if(arr[i]>max)
        {
            max=*(arr+i);
            max_index=i;
        }
    }
    return max_index;
}

void func(int *arr, int n, int &max_i, int &min_i)
{
    int max =arr[0],  min = arr[0];

    for(int i =0; i<n; i++)
    {
        if(arr[i]<min)
        {
            min=*(arr+i);
            min_i=i;
        }
        if(arr[i]>max)
        {
            max=*(arr+i);
            max_i=i;
        }
    }    
}

int main() {
    
    int *arr;
    int n;
    int index;
    cout<<"Enter number of elements : ";
    cin>>n;
    // int arr[n];
    arr= new int[n];
    input(arr,n); //arr: call by address, n : call by value
    display(arr,n);

//     index=smallest(arr,n);
//     cout<<"Smallest element : " << arr[index]<<" at " <<index<<endl; 

//    index = largest(arr,n);
//    cout << "Largest Element : " << arr[index] << " at " << index<<endl;

    int min=0, max = 0;
    func(arr, n , max,min);
    cout<<"Smallest element : " << arr[min]<<" at " <<min<<endl; 
    cout<<"Largest element : " << arr[max]<<" at " <<max<<endl; 
delete []arr;

    return 0;
}