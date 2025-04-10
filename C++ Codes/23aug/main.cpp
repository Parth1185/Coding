#include <iostream>
using namespace std;

// class A
// {
//     private:
//     int* arr;
//     int size;
//     public:
//     //constructor
//     A(int s)
//     {
//         size=s;
//         arr=new int[size]; //allocating memory for the array
//         for(int i = 0 ; i<size; i++)
//         {
//             cin >> arr[i]; //initislise array with some values
//         }
//         cout << "Constructor : array created." << endl;
//     }
//     //copy constructor (deep copy)
//     A(const A & source)
//     {
//         size = source.size;
//         arr = new int[size]; //allocate new memory for copy
//         for(int i = 0 ; i<size; i++)
//         {
//             arr[i] = source.arr[i]; //copy each element
//         }
//         cout << "Copy Constructor (Deep Copy) : array copied." << endl;
//     }
//     //destructor
//     ~A()
//     {
//         delete[] arr; //free dynamically allocated memory
//         cout << "Destructor : array memory released." << endl;
//     }
//     void displayArray()
//     {
//         for(int i = 0 ; i<size; i++)
//         {
//             cout << arr[i] << " ";
//         }       
//         cout << endl;
//     }
// };


// int main()
// {
//     A array1(5);
//     array1.displayArray();
    
//     A array2 = array1; //deep copy
//     array2.displayArray();
//     return 0;
// }

// DYNAMIC ALLOCATION FOR 2D ARRAY

// class Matrix {
//     private:
//         int rows;
//         int cols;
//         int** data;
//     public:
//         Matrix(int r, int c) : rows(r), cols(c) {
//             data = new int*[rows];
//             for (int i = 0; i < rows; ++i) {
//                 data[i] = new int[cols];
//             }

//             // Initialize
//             cout << "Enter the elements of the matrix:" << endl;
//             for (int i = 0; i < rows; ++i) {
//                 for (int j = 0; j < cols; ++j) {
//                     cin >> data[i][j];
//                 }
//             }
//             cout << "Matrix object created with dimensions " << rows << "x" << cols << "." << endl;
//         }

//         ~Matrix() {
//             for (int i = 0; i < rows; ++i) {
//                 delete[] data[i];
//             }
//             delete[] data;
//             cout << "Matrix object is being destroyed, memory released." << endl;
//         }

//         void display() {
//             for (int i = 0; i < rows; ++i) {
//                 for (int j = 0; j < cols; ++j) {
//                     cout << data[i][j] << " ";
//                 }
//                 cout << endl;
//             }
//         }
// };

// int main() {
//     int r, c;
//     cout << "Enter the number of rows and columns:" << endl;
//     cin >> r >> c;

//     Matrix* mat = new Matrix(r, c);
//     mat->display();

//     delete mat;
//     return 0;
// }




#include <array>
#include <algorithm>

int main()
{
    // Create and initialize an array
    array<int, 5> arr = {5, 2, 9, 1, 6};

    // Sort the array
    sort(arr.begin(), arr.end());

    // Display the sorted array
    cout << "Sorted array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
    int n;
    cout<<"Enter the element to find : ";
    cin >> n;
    // Find an element
    auto it = find(arr.begin(), arr.end(), n);
    if (it != arr.end())
    {
        cout << "Element found at index: " << distance(arr.begin(), it) << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    return 0;
}
