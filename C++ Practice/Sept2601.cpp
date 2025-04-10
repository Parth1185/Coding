#include<iostream>
using namespace std;

void input(int **arr, int r, int c)
{
    for(int i=0;i<r;i++)
    {
        for( int j=0;j<c;j++)       {
            cout<<"Enter arr["<<i<<"]["<<j<<"] : ";
            cin>>arr[i][j];
        }
    }
}

void display(int **arr, int r, int c)
{
    for(int i=0;i<r;i++)
    {
        for( int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
}

void add(int **ar1, int **ar2, int r,int c, int **sum)
{
    for(int i=0;i<r;i++)
    {
        for( int j=0;j<c;j++)
        {
            sum[i][j] = ar1[i][j] + ar2[i][j];
        }
    }
}

int **sub(int **ar1, int **ar2 , int r, int c)
{
    int **diff;
    diff = new int*[r];
    for (int i=0;i<r;i++)
    {
        diff[i] = new int [c];
    }
    for(int i = 0 ; i<r ; i++)
    {
        for(int j = 0 ; j<c ; j++)
        {
            diff[i][j] = ar1[i][j] - ar2[i][j];
        }
    }
    return diff;
}




int main() {
    
    int r,c;
    cout<<"Enter rows and column : ";
    cin>>r>>c;

    int **arr1 = new int * [r];
    for(int i=0;i<r;i++)
    {
        arr1[i] = new int [c];
    }

    int **arr2 = new int* [r];
    for(int i=0;i<r;i++)
    {
        arr2[i] = new int [c];
    }
    
    int **sum = new int* [r];
    for(int i=0;i<r;i++)
    {
        sum[i] = new int [c];
    }


    cout<<"Input for First Matrix : "<<endl; 
    input(arr1,r,c);

    cout<<"Input for Second Matrix : "<<endl;
    input(arr2,r,c);

    cout<<"First Matrix : "<<endl;
    display(arr1,r,c);

    cout<<"Second Matrix : "<<endl;
    display(arr2,r,c);

    add(arr1,arr2,r,c,sum);
    int **diff = sub(arr1,arr2,r,c);

    cout<<"Addition : "<<endl;
    display(sum,r,c);

    cout<<"Subtraction : " <<endl;
    display(diff,r,c);


    return 0;
}