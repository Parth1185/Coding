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

int partition(int *arr, int start, int end){
    int pivot = start;
    int i = start + 1;
    int j = end;

    while(i<j){
        while(arr[i]<arr[pivot]) i++;
        while(arr[j]>arr[pivot]) j--;
        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[pivot],arr[j]);
    return j;
}

void QuickSort(int *arr, int start, int end){
    if(start>=end) return;
    int mid = partition(arr,start,end);
    QuickSort(arr,start,mid-1);
    QuickSort(arr, mid+1, end);
}


int main() {
    
    int *arr, n;
    cout<<"Enter number of elements : ";
    cin >> n;
    arr = new int[n];

    input(arr,n);
    QuickSort(arr,0,n-1);
    display(arr,n);
    delete[] arr;
    return 0;
}