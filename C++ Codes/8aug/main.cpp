#include <iostream>
#include<string>
using namespace std;

/* class A {
    int id;
    string name;
    static int count; // static variable to count the number of objects
public:
    A(int, string);  // constructor
    void display();  // method to display id, name, and count
    void show();     // method to display the count
};

int A::count = 0;

A::A(int u, string n) {
    id = u;
    name = n;
    count++;
}

void A::display() {
    cout << id << " " << name << " " << count << endl;
}

void A::show() {
    cout << count << endl;
}

int main() {
    A obj1(1001, "abc");
    A obj2(1002, "def");
    A obj3(1003, "ghi");

    obj1.display();
    obj2.display();
    obj3.display();

    obj1.show();
    obj2.show();
    obj3.show();

    return 0;
} */

/*class Box {
    private:
    double width;
    friend void prwidth(Box b);
    public:
    //Constructor
    Box(double w) : width(w) {}
    //friend function declaration
    // friend void prwidth(Box b);
};

// friend function definition
void prwidth(Box b)
{
    cout << "Width of Box : " << b.width << endl;
}
int main()
{
    Box b(10.5);
    b.prwidth(b); //call friend function
    return 0;
}


class Rectangle;

class Circle
{
    private:
        double radius;
    public:
        Circle(double r) : radius(r) {}

        // Friend function declaration
        friend double areadiff(Circle c, Rectangle r);
};

class Rectangle
{
    private:
        double width, height;
    public:
        Rectangle(double w, double h) : width(w), height(h) {}

        // Friend function declaration
        friend double areadiff(Circle c, Rectangle r);
};

// Friend function definition outside the classes
double areadiff(Circle c, Rectangle r)
{
    double ca = 3.142 * c.radius * c.radius; // Area of the circle
    double ra = r.width * r.height;            // Area of the rectangle
    return ca - ra;                            // Difference between the areas
}

int main()
{
    Circle circle(5.0);
    Rectangle rectangle(7.0, 6.0);
    double difference = areadiff(circle, rectangle);
    cout << "Area Difference = " << difference << endl;
    return 0;
}




class ClassB; // Forward declaration of ClassB

class ClassA {
private:
    int valueA;

public:
    ClassA() : valueA(5) {}

    // Friend function declaration with non-const references
    friend int addvalues(ClassA &a, ClassB &b);
};

class ClassB {
private:
    int valueB;

public:
    ClassB() : valueB(15) {}

    // Friend function declaration with non-const references
    friend int addvalues(ClassA &a, ClassB &b);
};

// Definition of the friend function
int addvalues(ClassA &a, ClassB &b) {
    return a.valueA + b.valueB;
}

int main() {
    ClassA objA;
    ClassB objB;

    // Using friend function to add values from both classes
    int sum = addvalues(objA, objB);

    cout << "Sum of the values from ClassA and ClassB : " << sum << endl;
    return 0;
}


//FRIEND CLASS
class B; //forward declaration of class B
class A {
    private:
    int a;

    public:
    A() : a(10) {} //constructor initializes 'a'
    //declare b as friend class
    friend class B;
};
class B{
    public:
    void showA(A& obj)
    {
        //accessing private memebr 'a' of class A
        cout<< "Value of a from class A : " << obj.a << endl;
    }
};

int main()

{
    A objA; //create an object of class A
    B objB; //create an object of class B

    objB.showA(objA); //B can access private member 'a' of A
    return 0;
}
*/
const int MB = 10;
class Library;
class Book
{
    private:
    title;
    string author;
    public:

};
class Library{
    private:
    Book books[MB];
    int count;

    public:
    //default coonstructor
    Library() : count(0) {}

    void addBook(const Book& b)
    {
        if(count<MB)
        {
            books[count++] = b;
            }
        else {
            cout << "Library is Full !!" << endl;
        }
        }
        void showBooks()
    }
