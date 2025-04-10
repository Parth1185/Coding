#include<iostream>
using namespace std;

class array1
{
    int *arr, n;
    public:

    array1()
    {
        n=5;
        arr=new int[n];
    }
    array1(int size)
    {
        n=size;
        arr=new int[n];
    }
    void input()
    {
        cout<<"Enter "<<n<<" elements: ";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }
    void display()
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};


int main() {
    int x;
    cin>>x;
    array1 ob1, ob2(x);

    cout<<sizeof(ob1)<<" "  <<sizeof(ob2)<<endl;
    // cout<<sizeof(ob1.arr);

    ob1.input();
    ob1.display();

    ob2.input();
    ob2.display();

    return 0;
}