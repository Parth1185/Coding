#include <iostream>
using namespace std;
#include<bits/stdc++.h>

// void f(int *a, int x, int *b, int y, int *result, int c) {

//     for (int i = 0; i < x; i++) {
//         result[i] = a[i];
//     }

//     for (int i = 0; i < y; i++) {
//         result[i + x] = b[i];
//     }

// sort(result,result+c);
//     for (int i = 0; i < c; i++) {
//         cout << result[i] << " ";
//     }

    
// }

// int main() {
//     int a[] = {10, 20, 50};
//     int b[] = {1, 2, 3};

//     int x = sizeof(a) / sizeof(int);
//     int y = sizeof(b) / sizeof(int);
//     int c = x + y;  
//     int result[c];  

//     f(a, x, b, y, result, c);

//     return 0;
// }






// void f(int a[], int s) {
//     int n = 0; 

//     for (int i = 0; i < s; i++) {
//         if (a[i] != 0) 
//         {
//             a[n] = a[i];
//             n++;
//         }
//     }

//     for (int i = n; i < s; i++) 
//     {
//         a[i] = 0;
//     }
// }

// int main()
// {
//     int a[] = {10,0,20,0,0,30,40,50};
//     int s = sizeof(a)/sizeof(int);
//     f(a,s);
//     for(int i = 0;i<s;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }




