#include <iostream>
using namespace std;
/*class Student{
public:
    string Name;
    int rn;
    float marks;
};

int main()
{
    Student s1, s2;
    s1.Name= "Raghav";
    //s1.rn= 1001;
cout << "Enter Roll No. for " << s1.Name << ": ";
    cin >> s1.rn;
        s1.marks = 98;
    s2.Name= "Kartik";
    s2.rn= 1005;
    s2.marks = 95;
    cout<<s1.Name<<" "<<s1.rn<<" "<<s1.marks<<endl;
    cout<<s2.Name<<" "<<s2.rn<<" "<<s2.marks<<endl;

}*/
// "-" means private and "+" means public

// class A{ // empty class occupies 1 byte

// };

// int main(){
//     A obj;
//     cout<<sizeof(obj)<<endl;
    
//     return 0;
// }


// class A{ 
   
//     int x;
// };

// int main(){
//     A obj;
//     obj.x=10; // private data members can't be accessed directly in main

//     cout<<obj.x<<endl;
    
//     return 0;
// }

// class A{ 
//     int x;
//     public:
//     void getx(){
//         cin>>x;
//     }
//     void display(){
//         cout<<x<<endl;
//     }
// };

// int main(){
//     A obj1,obj2;
//     obj1.getx();
//     obj1.display();

//     obj2.getx();
//     obj2.display();
//      return 0;
// }

// class A{ 
//     int x;
//     public:
//     void getx();
//     void display();
// };
// void A::getx(){
//     cin>>x;
// }
// void A::display(){
//     cout<<x<<endl;
// }

// int main(){
//     A obj1,obj2;
//     obj1.getx();
//     obj1.display();

//     obj2.getx();
//     obj2.display();
//      return 0;
// }

// class A
// {
//     int rno;
//     string name;
//     float marks;
//     string cgpa;
//     public:
//     void accept();
//     void display();
// };
// void A::accept() {
//     cin>>rno;
//     getline(cin,name);
//     cin>>marks;
// }

// void A::display() {
//     if(marks>=90)
//     cgpa="A+";
//     else if(marks>=80)
//     cgpa="A";
//     else if(marks>=70)
//     cgpa="B";
//     else 
//     cgpa="C";
// cout<<"Roll No. : "<< rno<<endl;
// cout<<"Name : "<< name<<endl;
// cout<<"Marks : "<< marks<<endl;
// cout<<"Grade : "<< cgpa<<endl;
// }

// int main()
// {
//     A obj;
//     obj.accept();
//     obj.display();
//     return 0;
// }

/*CONSTRUCTOR OVERLOADING*/


// class Rectangle{
//     private:
//     double length;
//     double width;
//     public:
//     Rectangle();
//     Rectangle(double l);
//     Rectangle(double l, double w);

//     double area();
//     double perimeter();
//     void display();
// };

// Rectangle::Rectangle() {
//     length=0;
//     width=0;
// }

// Rectangle::Rectangle(double l) {
//     length=l;
//     width=l;
// }

// Rectangle::Rectangle(double l, double w) {
//     length=l;width=w ;
// }

// double Rectangle::area() {
//     return length * width;
// }

// double Rectangle::perimeter() {
//     return 2 * (length + width);
// }

// void Rectangle::display() {
//     cout << "Length:" << length << ", Width: " << width << ", Area: " << area() << ", Perimeter: " << perimeter() << endl;
// }

// int main() {
//     double length, width;
//     cin >> length;
//     cin >> width;
//     Rectangle r1;
//     Rectangle r2(length);
//     Rectangle r3(length, width);

//     cout << "\nRectangle details:\n";
//     r1.display();
//     r2.display();
//     r3.display();

//     return 0;
// }
/*INITIALIZER LIST*/


// class Rectangle{
//     private:
//     double length;
//     double width;
//     public:
//     Rectangle();
//     Rectangle(double l);
//     Rectangle(double l, double w);

//     double area();
//     double perimeter();
//     void display();
// };

// Rectangle::Rectangle(): length(0), width(0) {}
// Rectangle::Rectangle(double l): length(l), width(l) {}
// Rectangle::Rectangle(double l, double w): length(l), width(w) {}

// double Rectangle::area() {
//     return length * width;
// }

// double Rectangle::perimeter() {
//     return 2 * (length + width);
// }

// void Rectangle::display() {
//     cout << "Length:" << length << ", Width: " << width << ", Area: " << area() << ", Perimeter: " << perimeter() << endl;
// }

// int main() {
//     double length, width;
//     cin >> length;
//     cin >> width;
//     Rectangle r1;
//     Rectangle r2(length);
//     Rectangle r3(length, width);

//     cout << "\nRectangle details:\n";
//     r1.display();
//     r2.display();
//     r3.display();

//     return 0;
// }
