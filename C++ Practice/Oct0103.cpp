#include<stdlib.h>
#include<iostream>
#include<time.h>
using namespace std;

void input(int **arr, int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr[i][j] = rand() % 10;
        }
    }
            cout<<endl;

}

void display(int **arr, int r, int c)
{
        for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
}

int* largest_row(int **arr, int r , int c)
{
    int *ar1 = new int[r];

    for(int i=0;i<r;i++)
    {
        int max = arr[i][0];
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]>max)
            {
                max = arr[i][j];
            }
        }
        ar1[i]=max;
    }
    return ar1;
    cout<<endl;
}

int * largest_col(int **arr, int r, int c)
{
    int *ar1;
    ar1=new int [c];

    for(int i=0;i<c;i++)
    {
        int max = arr[0][i];
        for(int j=0;j<r;j++)
        {
            if(arr[j][i]>max)
            {
                max = arr[j][i];
            }
        }
        ar1[i]=max;
    }
    return ar1;

}

int ** transpose(int **arr, int r, int c)
{
    int **arr1;
    arr1 = new int*[c];
    for (int i=0;i<c;i++)
    {
        arr1[i] = new int[r];
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr1[j][i] = arr[i][j];
        }
    }
    return arr1;
}


int main() {
    
    srand(time(NULL));
    int **arr, r,c;
    cout<<"Enter rows and columns : ";
    cin>>r>>c;

    arr = new int*[r];
    for(int i=0;i<r;i++)
    {
        arr[i] = new int[c];
    }

    input(arr,r,c);
    display(arr,r,c);

    int *ar = largest_row(arr,r,c);
    for(int i=0;i<r;i++)
    {
        cout<<ar[i]<<" ";
    }
cout<<endl;
    int *ar2 = largest_col(arr,r,c);
    
        for(int i=0;i<c;i++)
        {
            cout<<ar2[i]<<" ";
        }
        cout<<endl;

        cout<<endl;


int **ar1 = transpose(arr,r,c);
display(ar1,c,r);

    return 0;
}
