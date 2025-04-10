#include<iostream>
using namespace std;

class Complex
{
    int real, imag;
    public:
    void input();
    void display();
    void add(Complex, Complex &);
    void mul(Complex, Complex &);
};

void Complex::input()
{
    cout <<"enter real part : ";
    cin >> real;
    cout << "enter imag part : ";
    cin >>imag;
}
 void Complex::display()
 {
    cout << real << " + " << imag << " i"<<endl;
 }

void Complex::add(Complex ob1 , Complex &ob2)
{
    ob2.real = real + ob1.real;
    ob2.imag = imag + ob1.imag;

}
void Complex::mul(Complex ob1, Complex &ob2)
{
    ob2.real = (real * ob1.real) - (imag * ob1.imag);
    ob2.imag = (real * ob1.imag) + (imag * ob1.real);
}


int main() {

    Complex ob1, ob2, ob3;
    ob1.input();
    ob2.input();
    // ob1.add(ob2, ob3);
    ob1.mul(ob2,ob3);
    ob3.display();
    
    return 0;
}