#include<iostream>
#include<cmath>
using namespace std;

class Shape
{
    public:
    virtual double area() const = 0; //pure virtual function for area
    virtual double volume() const = 0; //pure virtual function for area
    virtual ~Shape() {} //virtual destructor for proper cleanup
};

//abstract class for 2D shapes
class TwoD: public Shape
{
    public:
    double volume() const override {return 0;}
};

//abstract class for 3D shapes
class ThreeD: public Shape
{
    public:
    //3D shapes must implement volume and area
};

//concrete class : Circle (ingerited form 2D)
class Circle:public TwoD
{
    private:
    double radius;
    public:
    Circle(double r) : radius(r) {}
    double area () const override{
        return M_PI * radius * radius;
    }
};

class Square : public TwoD{
    private:
    double side;
    public:
    Square(double s) : side(s) {}
    double area() const override
    {
        return side * side;
    }
};

class Triangle:public TwoD
{
    private:
    double base, height;
    public:
    Triangle(double b, double h) : base(b), height(h) {}
    double area() const override
    {
        return (base * height)/2;
    }
};


//concrete class : Sphere (inherited from ThreeD)
class Sphere : public ThreeD
{
    double radius;
    public:
    Sphere(double r) : radius(r) {}
    double area() const override
    {
        return 4 * M_PI * radius * radius;
    }
    double volume() const override
    {
        return (4.0/3.0) * M_PI * radius * radius;
    }
};
class Cube : public ThreeD
{
    double side;
    public:
    Cube(double s) : side(s) {}
    double area() const override
    {
        return 6 * side * side;
    }
    double volume() const override 
    {
        return side * side * side;
    }
};

class Tetrahedron : public ThreeD
{
    double edge;
    public:
    Tetrahedron(double e) : edge(e) {}
    double area() const override
    {
        return sqrt(3) * edge * edge;
    }
    double volume() const override
    {
        return (pow(edge, 3) / (6 * sqrt(2)));
    }
};


int main() {

    Circle circle(5);
    Square square(4);
    Triangle triangle (3,6);
    Sphere sphere (7);
    Cube cube(4);
    Tetrahedron tetrahedron (3);

cout <<endl;
    //demonstrating areas

    cout<<"Area of Circle : "<< circle.area()<<endl;
    cout<<"Area of Square : "<< square.area()<<endl;
    cout<<"Area of Triangle : "<< triangle.area()<<endl;
    
    //demonstrating area and volume of 3D shapes
    cout<<endl;

    cout<<"Area of Sphere : "<< sphere.area()<< " , Volume : " << sphere.volume()<<endl;
    cout<<"Area of Cube : "<< cube.area() << " , Volume : " << cube.volume() <<endl;
    cout<<"Area of Tetrahedron : "<< tetrahedron.area() << " , Volume : " << tetrahedron.volume() <<endl;
cout<<endl;
    return 0;
}