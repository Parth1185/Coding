#include<iostream>
using namespace std;

// class A
// {
//     public:
//     void print()
//     {
//         cout<<"A";
//         cout<<endl;
//     }
// };
// class B:public A
// {
//     public:
//     int print()
//     {
//         cout<<"B"<<endl;
//         return 10;
//     }
// };
// int main()
// {
//     A ob1;
//     B obj;
//     obj.print();
//     ob1.print();
//     return 0;
// }

// class A
// {
//     protected:
//     int x;
//     public:
//     // void input()
//     // {
//     //     cout<<"Enter x : "; 
//     //     cin>>x;
//     // }
//     A()
//     {
//         cin>>x;
//     }
    

// };
// class B:public A{
//     protected:
//     int y;
//     public:
//     // void input()
//     // {
//     //     A::input();
//     //     cout<<"Enter y : ";
//     //     cin>>y;
//     // }
//     // {cin>>x;
//     // cin>>y;}
//     B()
//     {
//         cin>>y;
//     }
    
// };
// class C:public B{
//     public:
//     void display()
//     {
//         cout<<x+y<<endl;
//     }
// };


// int main()
// {
//     C obj;
//     // obj.input();
//     obj.display();
// }


// class A
// {
//     protected:
//     int x;
//     public:
//     A()
//     {
//         cin>>x;
//    } 
//    int getX()
//    {
//     return x;
//    }
// };

// class B:public A{
//     int y;
//     public:
  
//     B()
//     {
//         cin>>y;
//     }
//     int getY()
//     {
//         return y;
//     }
    
// };
// class C:public B{
//     public:
//     void display()
//     {
//         cout<<A::getX() + B::getY();
//     }
// };


// int main()
// {
//     C obj;
//     obj.display();
// }



        

class Point {
    int x, y;

public:
    Point(int x = 0, int y = 0);  // Constructor
    void setx(int x);             // Set x
    int getx() const;             // Get x
    void sety(int y);             // Set y
    int gety() const;             // Get y
    void setxy(int x, int y);     // Set both x and y
    void print() const;           // Print x and y
};

Point::Point(int x, int y) : x(x), y(y) {}

int Point::getx() const {
    return x;
}

int Point::gety() const {
    return y;
}

void Point::setx(int x) {
    this->x = x;
}

void Point::sety(int y) {
    this->y = y;
}

void Point::setxy(int x, int y) {
    this->x = x;
    this->y = y;
}

void Point::print() const {
    cout << x << " , " << y << endl;
}

int main() {
    Point p1;
    Point p2(2, 3);
    p1.print();
    p2.print();

    Point* ptrp3, * ptrp4;
    ptrp3 = new Point();
    ptrp4 = new Point(4, 4);
    ptrp3->print();
    ptrp4->print();

    delete ptrp3;
    delete ptrp4;

    return 0;
}
