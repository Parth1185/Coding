// #include<iostream>
// using namespace std;

// class Person
// {
//     int x;
//     public:

//     Person()
//     {
//         x=5;
//     }
//     Person(int x)
//     {
//         this->x=x;
//     }

//     Person greater(Person &ob)
//     {
//         if(x>=ob.x)
//         return *this;
//     else
//     return ob;
//     }

//     void display()
//     {
//         cout<<x<<endl;
//     }

// };
// int main() {
    
//     Person p1(10),p2(20),p3;

//     p3 = p1.greater(p2);
//     p3.display();

//     Person *p4; //wild pointer
//     Person *p5=NULL; //NULL pointer
//     //p5->display();
//     return 0;
// }


#include<iostream>
using namespace std;
class A
{
    protected:
int a, b;
public:
    A(int x=0, int y=0) {
        a = x;
        b = y;
    }
    virtual void print();
};

class B: public A {
    private:
        float p, q;
    public:
        B(int m, int n, float u, float v) {
            p = u;
            q = v;
        }
        B() { p = q = 0; }
        void input(float u, float v);
        void print(float);
};

void A::print(void) {
    cout << "A values: " << a << " " << b << "\n";
}

void B::print(float) {
    cout << "B values: " << p << " " << q << "\n";
}

void B::input(float x, float y) {
    p = x;
    q = y;
}

int main() {
    A a1(10, 20), *ptr;
    B b1;
    b1.input(7.5, 3.142);

    ptr = &a1;
    ptr->print();

    ptr = &b1;
    ptr->print();
}
