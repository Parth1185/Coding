// #include<iostream>
// using namespace std;


// void display(int **ar, int r, int c)
// {
//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//         {
//             cout<<ar[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main() {
//     int **arr, r, c;
//     cout<<"Enter rows and columns : ";
//     cin>>r>>c;
//     // arr= (int **)malloc(r*sizeof(int *));
//     // for(int i=0;i<r;i++)
//     // {
//     //     arr[i] = (int *) malloc(c * sizeof(int));
//     // }

//     arr=new int*[r];

//     for(int i=0;i<r;i++)
//     {
//         arr[i]=new int[c];
//     }

//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//         {
//             cout<<"Enter arr ["<<i<<"]["<<j<<"] : ";
//             cin>>arr[i][j];
//         }
//     }
//     display(arr,r,c);

//     for(int i=0;i<r;i++)
//     {
//         delete[] arr[i];
//     }
//     delete [] arr;


    
//     return 0;
// }


#include<iostream>
using namespace std;

int largest(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int sec_largest(int arr[], int n){
    int lar = arr[0];
    int slar = -1;  // Initialize slar to -1 or a very low value to handle edge cases
    for(int i = 1; i < n; i++){
        if(arr[i] > lar){
            slar = lar;  // Update second largest before updating the largest
            lar = arr[i];  // Update largest
        }
        else if(arr[i] > slar && arr[i] != lar){  // Ensure it's not equal to largest
            slar = arr[i];
        }
    }
    return slar;
}

int main(){
    int arr[] = {1, 3, 10, 68,4, 11, 20};
    int n = 7;
    
    cout << "Largest: " << largest(arr, n) << endl;
    cout << "Second Largest: " << sec_largest(arr, n) << endl;
    return 0;
}
