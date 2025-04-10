#include<stdlib.h>
#include<iostream>
#include<time.h>
using namespace std;

// int main()
// {
//     srand(time(NULL));
//     for(int i=0; i<5; i++)
//     {
//         int temp = rand() % 10;
//         cout<<temp<<" ";
//     }
// }


int main()
{
    int arr[5];
    srand(time(NULL));
    for(int i=0; i<5; i++)
    {
        arr[i] = rand() % 10;
    }
    for( int i=0;i<5;i++)
            {cout<<arr[i]<<" ";
            }

}


