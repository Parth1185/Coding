#include<iostream>
using namespace std;

class Complex
{
    int real, imag;

    public :
    void input();
    void display();
    Complex add(Complex);
    Complex sub(Complex);
    Complex multiply(Complex);
    Complex divide(Complex);
};

void Complex::input()
{
    cout <<"enter real part :";
    cin >> real;
    cout << "enter imag part :";
    cin >>imag;
}
 void Complex::display()
 {
    cout << real << " + " << imag << " i"<<endl;
 }

 Complex Complex::add(Complex ob)
 {
    Complex temp;
    temp.real=real+ob.real;
    temp.imag=imag+ob.imag;
    return temp;
 }

Complex Complex::sub(Complex ob)
{
    Complex temp;
    temp.real = real - ob.real;
    temp.imag = real - ob.imag;
    return temp;
}


 int main()
 {
    Complex c1,c2,c3;
    c1.input();
    c2.input();

    c3=c2.add(c1);


    // c1.display();
    // c2.display();
    cout<<"sum of two complex numbers: ";
    c3.display();
 }