//INHERITANCE

#include<iostream>
using namespace std;

class A
{
    public:
    void display()
    {
        cout<<"Class A\n";
    }
};

class B:virtual public A{
        public:

    // void display()
    // {
    //     cout<<"Class B\n";
       
    // }
};
class C:virtual public A{
        public:

    // void display()
    // {
    //     cout<<"Class C\n";
       
    // }
};
class D:public B, public C{
        public:

    void display()
    {
        cout<<"Class D\n";
       
    }
};



int main() {
    D ob1;
    ob1.display();
    ob1.B::display();
    ob1.C::display();

    return 0;
}


// #include <iostream>
// using namespace std;
//.
// class A {
// public:
//     void display() {
//         cout << "Class A\n";
//     }
// };

// class B : virtual public A {
// public:
//     void display() {
//         cout << "Class B\n";
//     }
// };

// class C : virtual public A {
// public:
//     void display() {
//         cout << "Class C\n";
//     }
// };

// class D : public B, public C {
// public:
//     void display() {
//         cout << "Class D\n";
//     }
// };

// int main() {
//     D ob1;
//     ob1.display();
//     ob1.B::display();

//     return 0;
// }
