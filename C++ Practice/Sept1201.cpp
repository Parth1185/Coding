// #include <iostream>
// using namespace std;

// class Room {
//     int width;
//     int height;
//     static int count;

// public:
//     // Default constructor
//     Room() {
//         width = 12;
//         height = 8;
//     }

//     // Parameterized constructor
//     Room(int w, int h) {
//         width = w;
//         height = h;
//     }

//     // Copy constructor
//     Room(const Room &r) {
//         cout << "Copy constructor called\n";
//         width = r.width;
//         height = r.height;
//         count++;
//     }

//     // Assignment operator
//     Room& operator=(const Room &r) {
//         if (this == &r) // self-assignment check
//             return *this;
        
//         width = r.width;
//         height = r.height;
//         // Note: Static members are shared among all objects, so no need to copy 'count'
        
//         return *this;
//     }

//     void display() const {
//         cout << width << " " << height << " " << count << "\n"; 
//     }
// };

// // Initialize static member
// int Room::count = 0;

// int main() {
//     Room ob1; // Default constructor
//     Room ob2(ob1); // Copy constructor
//     Room ob3(3, 5); // Parameterized constructor
//     Room ob4; // Default constructor
//     ob4 = ob3; // Assignment operator

//     ob1.display();
//     ob2.display();
//     ob3.display();
//     ob4.display();

//     return 0;
// }

#include<iostream>
using namespace std;
class Room
{
    int width;
    int height;
    static int count;
    public:

 Room()
{
    width = 12;
    height = 8;
}
// Room(int w , int h)
// {
//     width = w;
//     height = h;
// }
Room(Room &r)
{
    cout<<"Copy constructor called\n";
    width = r.width;
    height=r.height;
    count++;
}
void display()
{
    cout<<width << " " << height << " " << count<<"\n"; 
}
};
int Room::count = 0;
int main()
{
    Room ob1;
    Room ob2(ob1);
    Room ob3 = ob1;
    Room ob4;
    ob4 = ob3;
    ob4.display();
    return 0;
}