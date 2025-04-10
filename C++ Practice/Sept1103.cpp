#include<iostream>
using namespace std;

            // //MALLOC

// int main()
// {
//     int *p;
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;

//     p = (int *)malloc(n*sizeof(int));
//     for(int i=0;i<n;i++)
//     {
//         cout<<"Enter data: ";
//         //cin>>p[i];
//         //cin>>i[p];
//         //cin>>*(p+i);
//         cin>>*(i+p);

//     }

//     for(int i=0;i<n;i++)
//     {
//         cout<<i[p]<<" "<< (p+i)<<" "<<*p+i<<endl;
//     }
// }



////CALLOC

int main()
{
    int *p;
    int n;
    cin>>n;
    p = (int *) calloc(n, sizeof(int));
    for(int i=0;i<n;i++)
    {
        cout<<"Enter data: ";
        cin>>p[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<i[p]<<" "<< (p+i)<<" "<<*p+i<<endl;
    }
}