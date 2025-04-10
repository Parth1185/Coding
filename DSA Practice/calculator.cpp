// #include <iostream>
// using namespace std;

// int sum(int a, int b) {
//     return a + b;
// }

// int sub(int a, int b) {
//     return a - b;
// }

// int mul(int a, int b) {
//     return a * b;
// }

// int divide(int a, int b) {
//     if (b == 0) {
//         cout << "Error: Division by zero!" << endl;
//         return 0; 
//     }
//     return a / b;
// }

// int fact(int a) {
//     if (a < 0) {
//         cout << "Error: Factorial of a negative number is undefined!" << endl;
//         return -1;
//     }
//     if (a == 1 || a == 0) return 1;
//     return a * fact(a - 1);
// }

// int main() {
//     cout << "Select the operation:" << endl;
//     cout << "1. Addition" << endl;
//     cout << "2. Subtraction" << endl;
//     cout << "3. Multiplication" << endl;
//     cout << "4. Divide" << endl;
//     cout << "5. Factorial" << endl;
//     cout << "6. Exit" << endl;

//     int t = 0;
//     while (true) {
//         cout << "Enter your choice: ";
//         cin >> t;

//         if (t == 6) {
//             cout << "Exiting program." << endl;
//             break;
//         }

//         int a, b;
//         switch (t) {
//             case 1:
//                 cout << "Enter two numbers: ";
//                 cin >> a >> b;
//                 cout << "Result: " << sum(a, b) << endl;
//                 break;

//             case 2:
//                 cout << "Enter two numbers: ";
//                 cin >> a >> b;
//                 cout << "Result: " << sub(a, b) << endl;
//                 break;

//             case 3:
//                 cout << "Enter two numbers: ";
//                 cin >> a >> b;
//                 cout << "Result: " << mul(a, b) << endl;
//                 break;

//             case 4:
//                 cout << "Enter two numbers: ";
//                 cin >> a >> b;
//                 cout << "Result: " << divide(a, b) << endl;
//                 break;

//             case 5:
//                 cout << "Enter a number: ";
//                 cin >> a;
//                 int result;
//                 result = fact(a);
//                 if (result != -1) {
//                     cout << "Result: " << result << endl;
//                 }
//                 break;

//             default:
//                 cout << "Enter a valid number!" << endl;
//         }
//     }

//     return 0;
// }



#include<iostream>
using namespace std;
int fibo(int n){
    if(n<=1) return n;
    int last = fibo(n-1);
    int slast = fibo(n-2);
    return (last+slast);
}
int main()
{
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    return 0;
}