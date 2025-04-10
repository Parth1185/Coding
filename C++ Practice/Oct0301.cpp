#include<iostream>
using namespace std;

void input(int **arr, int r, int c)
{
    for(int i=0;i<r;i++)
    {
        for( int j=0;j<c;j++)   
        {
            cout<<"Enter arr["<<i<<"]["<<j<<"] : ";
            cin>>arr[i][j];
        }
    }
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

int **multiply(int **ar1, int **ar2, int r1, int c1, int r2, int c2 )
{
    int **prod = new int *[r1];
    for(int i=0;i<r1;i++)
    {
        prod[i] = new int [c2];
    }

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            prod[i][j]=0;
            for(int k=0; k<c1; k++)
            {
                prod[i][j]+=ar1[i][k]*ar2[k][j];
            }
        }
    }
    return prod;
}


int main() {
    
    int r1,c1,r2,c2;
    cout<<"Enter rows and column of array 1 : ";
    cin>>r1>>c1;

    cout<<"Enter rows and column of array 2 : ";
    cin>>r2>>c2;

    int **arr1 = new int*[r1];
    for(int i=0;i<r1;i++)
    {
        arr1[i] = new int[c1];
    }

    int **arr2 = new int*[r2];
    for(int i=0;i<r2;i++)
    {
        arr2[i] = new int[c2];
    }

    cout<<"Input for First Matrix : "<<endl; 
    input(arr1,r1,c1);

    cout<<"Input for Second Matrix : "<<endl;
    input(arr2,r2,c2);

    cout<<"First Matrix : "<<endl;
    display(arr1,r1,c1);

    cout<<"Second Matrix : "<<endl;
    display(arr2,r2,c2);

    if(c1==r2)
    {
       int **prod =  multiply(arr1, arr2, r1,c1,r2,c2);
       cout<<"Multiplication : "<<endl;
       display(prod, r1, c2);
    }

    
    for (int i = 0; i < r1; i++)
    {
        delete[] arr1[i];
    }
    
    for (int i = 0; i < r2; i++)
    {
        delete[] arr2[i];
    }
    
    delete[] arr1;
    delete[] arr2;


    return 0;
}