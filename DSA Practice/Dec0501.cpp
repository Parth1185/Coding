// #include<iostream>
// using namespace std;

// void input(int arr[100], int n)
// {
//     cout<<"Enter Elements : ";
//     for (int i=0;i<n;i++)
//     {
//         //cout<<"Enter arr["<<i<<"] :";
//         cin>>arr[i];
//     }
// }

// void insert(int arr[], int &n, int index, int key)
// {
//     for(int i=n;i!=index;i--)
//     {
//         arr[i]=arr[i-1];
//     }
//     arr[index]=key;
//     n++;
// }

// void Delete(int arr[], int &n, int index)
// {
//     for(int i=index;i<n;i++)
//     {
//         arr[i]=arr[i+1];
//     }
//     n--;
// }

// int search(int arr[], int n, int e)
// {
//     for(int i=0;i<n;i++)
//     {
//         if(e==arr[i])
//         return i;
//     }
//     return -1;
    
// }
// void display(int arr[100], int n)
// {
//     for (int i=0; i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main()
// {
//     int arr[100],n;
//     cout<<"Enter no. of elements : ";
//     cin>>n;
//     input(arr,n);

//     int s;
    
//     int index,key;
//     char ch='y';

// while(ch=='y')
// {
//     cout<<"Enter :\n 1 for insert. \n 2 for delete by index. \n 3 for delete by element. \n 4 for display.\n 0 for exit.\n";
//     cin>>s;
//     switch(s){
//     case 1:
    
//         cin>>index>>key;

//         if(index>=0 && index<=n)
//         {
//             insert(arr,n,index,key);
//         }
//         else
//         cout<<"Enter Valid Index!!"<<endl;
//         break;
    
//     case 2:
//     cin>>index;
//     Delete (arr,n,index);
//     break;

//     case 3:

//     int ele;
//     cout<<"Enter element : ";
//     cin>>ele;
//     int ind;
//     ind=search(arr,n,ele);
//     if(ind==-1) cout<<"Element not found!!"<<endl;
//     else
//     {
//         Delete(arr,n,ind);
//     }
//     break;

//     case 4:
//         display(arr,n);
//         break;

//     case 0:
//     break;
//     default:
//     cout<<"Enter a valid number !! \n";
//     }

//     cout<<"Do you want to continue y or n?: ";
//     cin>>ch;
// }
    
//     return 0;

// }



#include<iostream>
using namespace std;

void input(int arr[100], int n)
{
    cout<<"Enter Elements : ";
    for (int i=0;i<n;i++)
    {
        //cout<<"Enter arr["<<i<<"] :";
        cin>>arr[i];
    }
}

void insert(int arr[], int &n, int index, int key)
{
    for(int i=n;i!=index;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=key;
    n++;
}

void Delete(int arr[], int &n, int index)
{
    for(int i=index;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
}

int search(int arr[], int n, int e)
{
    for(int i=0;i<n;i++)
    {
        if(e==arr[i])
        return i;
    }
    return -1;
    
}
void display(int arr[100], int n)
{
    for (int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[100],n;
    cout<<"Enter no. of elements : ";
    cin>>n;
    input(arr,n);

    int s;
    int index,key;

while(true)
{
    cout<<"Enter :\n 1 for insert. \n 2 for delete by index. \n 3 for delete by element. \n 4 for display.\n 5 for searching an element \n 0 for exit.\n";
    cin>>s;

    switch(s){
    case 1:

        cout<<"Enter index and element : ";
        cin>>index>>key;

        if(index>=0 && index<=n)
        {
            insert(arr,n,index,key);
        }
        else
        cout<<"Enter Valid Index!!"<<endl;
        break;
    
    case 2:
    cout<<"Enter index : ";
    cin>>index;
    Delete (arr,n,index);
    break;

    case 3:

    
    cout<<"Enter element : ";
    cin>>key;
    int ind;
    ind = search(arr,n,key);
    if(ind==-1) cout<<"Element not found!!"<<endl;
    else
    {
        Delete(arr,n,ind);
    }
    break;

    case 4:
        display(arr,n);
        break;

    case 5:
    cout<<"Enter element to search : ";
    cin>>key;
    search(arr,n,key);
    break;
    
    case 0:
    cout<<"Exiting...\n";
    return 0;

    default:
    cout<<"Enter a valid number !! \n";

    }

}
    
    return 0;

}



