//pointer arithmetic character array

// #include <iostream>
// using namespace std;
// int main(){
//     char str[] = "Hello";
//     char *ptr = str;
//     for(int i=0; i<*(ptr+i)!='\0'; i++){
//         cout << *(ptr+i) << '\n';
//     }
//     return 0;
// }

// int main()
// {
//     int var = 10;
//     int *ptr1 = &var;
//     int **ptr2 = &ptr1;

//     cout << "It will display the value of var : " << var<<endl;
//     cout << "Address of var variable : "  << &var << endl;
//     cout << "Stored in ptr 1 which is address of var variable : " << ptr1 << endl;
//     cout << "ptr1 is printing the value x"<< *ptr1 <<endl;
//     cout << ""
    
//     return 0;  
// }
// #include <vector>
// using namespace std;

// int main() {
//     int n; // Number of test cases
//     cin >> n;
    
//     while (n--) {
//         int len; // Length of the array
//         cin >> len;
        
//         int am; // Initial amount
//         cin >> am;
        
//         vector<int> arr(len);
        
//         // Read the array elements
//         for (int i = 0; i < len; ++i) {
//             cin >> arr[i];
//         }
        
//         // Process each element of the array
//         for (int i = 0; i < len; ++i) {
//             if (am >= arr[i]) {
//                 cout << 1 << " "; // Can afford this item
//                 am -= arr[i]; // Deduct the cost
//             } else {
//                 cout << 0 << " "; // Cannot afford this item
//             }
//         }
//         cout << endl; // End of test case
//     }
    
//     return 0;
// }

#include<iostream>
using namespace std;
f(int n,int arr[],int amount)
{
    
    for(int i=0;i<n;i++){
        if(arr[i]<=amount){
            cout<<"1";
            amount = amount - arr[i];
        }
        else{
            cout<<"0";
        }

    }
}
int main()
{
    int t;
    cout<<"testcases"<<endl;
    cin>>t;
    while(t!=0){
        int n;
        cout<<"no of persons"<<endl;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int amount;
        cout<<"enter amount"<<endl;
        cin>>amount;
        f(n,arr,amount);
        t--;
    }
}