#include<iostream>
using namespace std;

class Complex
{
    int real, imag;
    public:
    void input();
    void display();
friend Complex operator + (Complex,Complex);

Complex operator-()
{
    cout<<"Unary - overloaded\n";
    Complex temp;
    temp.real=-real;
    temp.imag=-imag;
    return temp;
}

};

Complex operator + (Complex t1,Complex t2)
{
    Complex temp;
    temp.real = t1.real + t2.real;
    temp.imag = t1.imag + t2.imag;
    return temp;
}
void Complex::input()
{
    cout<<"Enter real and imaginary part : ";
    cin>>real>>imag;
}
void Complex ::display()
{
    cout<<real<<" + "<<imag<<" i"<<endl;
}

int main() {

    Complex c1,c2,c3;
    c1.input();
    c2.input();

    c3=c1+c2;
    c3.display();

    c3=-c1;
    c3.display();

    
    return 0;
}