// #include <iostream>
// using namespace std;

// class B;

// class A
// {
// public:
//     int x;
//     A(int z) : x(z) {}
//     friend bool f(A, B); 
// };

// class B
// {
//     int y;
// public:
//     B(int z) : y(z) {}
//     friend bool f(A, B); 
// };

// bool f(A obj1, B obj2)
// {
//     // Return true if obj1.x equals obj2.y; otherwise, return false
//     //return (obj1.x == obj2.y);
//     if(obj1.x == obj2.y)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// int main()
// {
//     A obj1(10);
//     B obj2(20);
//     cout << boolalpha << f(obj1, obj2) << endl; // Outputs 0 (false) since 10 != 20
//     return 0;
// }
#include <iostream>
using namespace std;

class B; 

class A {
    int x;
public:
    A(int z) : x(z) {} 
    void display() { cout << "A's x: " << x << endl; }
    friend void swap(A&, B&); 
};

class B {
    int y;
public:
    B(int z) : y(z) {} 
    void display() { cout << "B's y: " << y << endl; }
    friend void swap(A&, B&); 
};

void swap(A& obj1, B& obj2) {
    int temp = obj1.x;
    obj1.x = obj2.y;
    obj2.y = temp;
}

int main() {
    A obj1(10);
    B obj2(20);

    cout << "Before:" << endl;
    obj1.display();
    obj2.display();

    swap(obj1, obj2);

    cout << "After:" << endl;
    obj1.display();
    obj2.display();

    return 0;
}