#include<iostream>
#include<string>
#define PI 3.14159265
using namespace std;
class Shape
{
    string color; 
    public:
    Shape(const string & color = "red");  //constructor
    string getcolor() const; //getter
    void setcolor(const string & color); //setter
    //virtual function, run subclass version if overridden
    virtual void print() const;
    //pure virtual, to be implemented by subclass
    //you cannot create instance of shape
    virtual double getarea() const = 0;
};

Shape::Shape(const string & color)
{
    this->color = color;
}
//getter
string Shape::getcolor() const{
    return color;
}

//setter
void Shape::setcolor(const string & color)
{
    this->color = color;
}
void Shape::print() const{
    cout<<"Shape of color : "<<color;
}


class Circle:public Shape{
    int radius;
    public:
    Circle(int radius = 1, const string & color = "red"); //constructor
    int getradius() const; //getter
    void setradius( int radius); //setter
    void print() const; //override the virtual function
    double getarea() const; //to implement virtual function
};



Circle::Circle(int radius, const string & color):Shape(color), radius(radius) { }

int Circle::getradius() const
{
    return radius;
}
void Circle::setradius(int radius)
{
    this->radius = radius;
}
void Circle::print() const
{
    cout<<"Radius of circle : "<<radius<<", subclass of ";
    Shape::print();
}

double Circle::getarea() const{
    return PI*radius*radius;
}


class Rectangle : public Shape{
    int length;
    int width;
    public:
    Rectangle(int length = 1, int width = 1, const string & color= "red");
    int getlength() const;
    void setlength(int length);
    int getwidth() const;
    void setwidth(int width);
    void print() const;
    double getarea() const;
};

Rectangle::Rectangle(int length, int width, const string & color) : Shape(color), length(length), width(width) {}
int Rectangle::getlength() const
{
    return length;
}
void Rectangle::setlength(int length)
{
    this-> length = length;
}
int Rectangle::getwidth() const
{
    return width;
}
void Rectangle::setwidth(int width)
{
    this-> width = width;
}

double Rectangle:: getarea() const{
    return length*width;
}

void Rectangle::print() const
{
    cout<<"Length : "<<length<<", Width : "<<width<<", subclass of ";
    Shape::print();
}


int main() {
    cout<<endl;
    Circle c1(5,"Blue");
    c1.print();
    cout<<endl<<"Area = "<<c1.getarea()<<endl<<endl;

    Rectangle r1(5,6,"Green");
    r1.print();
    cout<<endl<<"Area = "<< r1.getarea() << endl<<endl;

    //Shape s1;     //cannot create instance of abstract class shape

    //polymorphism
    Shape *s1, *s2; //shape pointers
    s1 = new Circle(6);
    s1->print(); //run subclass version
    cout<<endl<<"Area : "<<s1->getarea()<<endl<<endl; //run subclass version of getarea()

    s2 = new Rectangle(7,8);
    s2->print();
    cout<<endl<<"Area : "<< s2->getarea()<<endl<<endl;

    delete s1;
    delete s2;

    //Shape s3 = Circle(6) //error: cannot allocate an object of abstract type 'Shape'

    Circle c3(8);
    Shape &s3 = c3; //object reference
    s3.print();
    cout<<endl<<"Area : "<<s3.getarea()<<endl<<endl;

    // Circle c4(9);
    // Shape *s4 = &c4; // object pointer
    // s4->print();
    // cout<<endl<<"Area : "<<s4->getarea()<<endl<<endl;

    Rectangle r4(9,11);
    Shape *s4 = &r4; // object pointer
    s4->print();
    cout<<endl<<"Area : "<<s4->getarea()<<endl<<endl;



    return 0;
}